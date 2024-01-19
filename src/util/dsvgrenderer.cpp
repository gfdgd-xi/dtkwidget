/*
 * Copyright (C) 2017 ~ 2017 Deepin Technology Co., Ltd.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <librsvg/rsvg.h>

#include "dsvgrenderer.h"
#include "dobject_p.h"

#include <QPainter>
#include <QFile>
#include <QDebug>
#include <QApplication>

DCORE_USE_NAMESPACE

DWIDGET_BEGIN_NAMESPACE

class DSvgRendererPrivate : public DObjectPrivate
{
public:
    DSvgRendererPrivate(DObject *qq);

    QImage getImage(const QSize &size, const QString &elementId) const;

    RsvgHandle *handle = NULL;
    QSize defaultSize;

    mutable QRectF viewBox;
};

DSvgRendererPrivate::DSvgRendererPrivate(DObject *qq)
    : DObjectPrivate(qq)
{

}

QImage DSvgRendererPrivate::getImage(const QSize &size, const QString &elementId) const
{
    QImage image(size, QImage::Format_ARGB32_Premultiplied);

    image.fill(Qt::transparent);

    cairo_surface_t *surface = cairo_image_surface_create_for_data(image.bits(), CAIRO_FORMAT_ARGB32, image.width(), image.height(), image.bytesPerLine());
    cairo_t *cairo = cairo_create(surface);
    cairo_scale(cairo, image.width() / viewBox.width(), image.height() / viewBox.height());
    cairo_translate(cairo, -viewBox.x(), -viewBox.y());

    if (elementId.isEmpty())
        rsvg_handle_render_cairo(handle, cairo);
    else
        rsvg_handle_render_cairo_sub(handle, cairo, elementId.toUtf8().constData());

    cairo_destroy(cairo);
    cairo_surface_destroy(surface);

    return image;
}

DSvgRenderer::DSvgRenderer(QObject *parent)
    : QObject(parent)
    , DObject(*new DSvgRendererPrivate(this))
{

}

DSvgRenderer::DSvgRenderer(const QString &filename, QObject *parent)
    : DSvgRenderer(parent)
{
    load(filename);
}

DSvgRenderer::DSvgRenderer(const QByteArray &contents, QObject *parent)
    : DSvgRenderer(parent)
{
    load(contents);
}

DSvgRenderer::~DSvgRenderer()
{
    D_D(DSvgRenderer);

    if (d->handle)
        g_object_unref(d->handle);
}

bool DSvgRenderer::isValid() const
{
    D_DC(DSvgRenderer);

    return d->handle;
}

QSize DSvgRenderer::defaultSize() const
{
    D_DC(DSvgRenderer);

    return d->defaultSize;
}

QRect DSvgRenderer::viewBox() const
{
    D_DC(DSvgRenderer);

    return d->handle ? d->viewBox.toRect() : QRect();
}

QRectF DSvgRenderer::viewBoxF() const
{
    D_DC(DSvgRenderer);

    return d->handle ? d->viewBox : QRectF();
}

void DSvgRenderer::setViewBox(const QRect &viewbox)
{
    setViewBox(QRectF(viewbox));
}

void DSvgRenderer::setViewBox(const QRectF &viewbox)
{
    D_D(DSvgRenderer);

    if (d->handle)
        d->viewBox = viewbox;
}

QRectF DSvgRenderer::boundsOnElement(const QString &id) const
{
    D_DC(DSvgRenderer);

    if (!d->handle)
        return QRectF();

    const QByteArray &id_data = id.toUtf8();

    RsvgDimensionData dimension_data;

    if (!rsvg_handle_get_dimensions_sub(d->handle, &dimension_data, id_data.constData()))
        return QRectF();

    RsvgPositionData pos_data;

    if (!rsvg_handle_get_position_sub(d->handle, &pos_data, id_data.constData()))
        return QRectF();

    return QRectF(pos_data.x, pos_data.y, dimension_data.width, dimension_data.height);
}

bool DSvgRenderer::elementExists(const QString &id) const
{
    D_DC(DSvgRenderer);

    if (!d->handle)
        return false;

    return rsvg_handle_has_sub(d->handle, id.toUtf8().constData());
}

QImage DSvgRenderer::toImage(const QSize sz, const QString &elementId) const
{
    Q_D(const DSvgRenderer);

    return d->getImage(sz, elementId);
}

bool DSvgRenderer::load(const QString &filename)
{
    QFile file(filename);

    if (file.open(QIODevice::ReadOnly)) {
        return load(file.readAll());
    }

    return false;
}

bool DSvgRenderer::load(const QByteArray &contents)
{
    D_D(DSvgRenderer);

    if (d->handle) {
        g_object_unref(d->handle);
        d->handle = NULL;
    }

    GError *error = 0;
    d->handle = rsvg_handle_new_from_data((const guint8*)contents.constData(), contents.length(), &error);

    if (error) {
        qWarning("DSvgRenderer::load: %s", error->message);
        g_error_free(error);

        return false;
    }

    RsvgDimensionData rsvg_data;

    rsvg_handle_get_dimensions(d->handle, &rsvg_data);

    d->defaultSize.setWidth(rsvg_data.width);
    d->defaultSize.setHeight(rsvg_data.height);
    d->viewBox = QRectF(QPointF(0, 0), d->defaultSize);

    return true;
}

void DSvgRenderer::render(QPainter *p)
{
    render(p, QString(), QRectF());
}

void DSvgRenderer::render(QPainter *p, const QRectF &bounds)
{
    render(p, QString(), bounds);
}

void DSvgRenderer::render(QPainter *p, const QString &elementId, const QRectF &bounds)
{
    D_D(DSvgRenderer);

    if (!d->handle)
        return;

    p->save();

    const QImage image = d->getImage(QSize(p->device()->width(), p->device()->height()), elementId);

    if (bounds.isEmpty())
        p->drawImage(0, 0, image);
    else
        p->drawImage(bounds, image);

    p->restore();
}

DWIDGET_END_NAMESPACE
