/*
 * Copyright (C) 2015 ~ 2017 Deepin Technology Co., Ltd.
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

#include <QPropertyAnimation>
#include <QTimer>
#include <QDebug>
#include <QGraphicsOpacityEffect>
#include <QEvent>

#include "dscrollarea.h"
#include "dthememanager.h"
#include "dscrollbar.h"
#include "private/dscrollarea_p.h"

DWIDGET_BEGIN_NAMESPACE

DScrollAreaPrivate::DScrollAreaPrivate(DScrollArea *qq):
    DObjectPrivate(qq),
    autoHideScrollBar(false),
    vBar(new DScrollBar),
    hBar(new DScrollBar),
    scrollBarAnimation(nullptr),
    timer(nullptr)
{

}

DScrollAreaPrivate::~DScrollAreaPrivate()
{
    vBar->deleteLater();
    hBar->deleteLater();
    if(scrollBarAnimation)
        scrollBarAnimation->deleteLater();
    if(timer)
        timer->deleteLater();
}

void DScrollAreaPrivate::init()
{
    Q_Q(DScrollArea);

    q->setVerticalScrollBar(vBar);
    q->setHorizontalScrollBar(hBar);

    QObject::connect(vBar, &DScrollBar::valueChanged, q, [q, this]{
        q->showScrollBar(vBar);
    });
    QObject::connect(hBar, &DScrollBar::valueChanged, q, [q, this]{
        q->showScrollBar(hBar);
    });
}

DScrollArea::DScrollArea(QWidget *parent) :
    QScrollArea(parent),
    DObject(*new DScrollAreaPrivate(this))
{
    DThemeManager::registerWidget(this);

    d_func()->init();
}

bool DScrollArea::autoHideScrollBar() const
{
    Q_D(const DScrollArea);

    return d->autoHideScrollBar;
}

void DScrollArea::setAutoHideScrollBar(bool autoHideScrollBar)
{
    Q_D(DScrollArea);

    if (d->autoHideScrollBar == autoHideScrollBar)
        return;

    d->autoHideScrollBar = autoHideScrollBar;

    if(autoHideScrollBar){
        if(!d->scrollBarAnimation)
            d->scrollBarAnimation = new QPropertyAnimation(this, "windowOpacity");
        if(!d->timer)
            d->timer = new QTimer(this);

        d->scrollBarAnimation->setDuration(300);
        d->timer->setSingleShot(true);

        d->vBar->hide();
        d->hBar->hide();

        connect(d->timer, &QTimer::timeout, [&]{
            if(d->vBar->isVisible())
                hideScrollBar(d->vBar);
            if(d->hBar->isVisible())
                hideScrollBar(d->hBar);
        });
    }else{
        if(d->scrollBarAnimation)
            d->scrollBarAnimation->deleteLater();
        if(d->timer)
            d->timer->deleteLater();

        showScrollBar(d->vBar);
        showScrollBar(d->hBar);
    }

    Q_EMIT autoHideScrollBarChanged(autoHideScrollBar);
}

void DScrollArea::hideScrollBar(QScrollBar *bar)
{
    Q_D(DScrollArea);

    if(bar->isHidden())
        return;

    if(d->scrollBarAnimation){
        connect(d->scrollBarAnimation, &QPropertyAnimation::finished, bar, &DScrollBar::hide);
        connect(d->scrollBarAnimation, &QPropertyAnimation::finished, bar, &DScrollBar::hide);

        d->scrollBarAnimation->setStartValue(1.0);
        d->scrollBarAnimation->setEndValue(0.0);
        d->scrollBarAnimation->start();
    }else{
        bar->hide();
    }
}

void DScrollArea::showScrollBar(QScrollBar *bar)
{
    Q_D(DScrollArea);

    if(bar->isVisible())
        return;

    if(bar == d->vBar && verticalScrollBarPolicy() != Qt::ScrollBarAlwaysOff)
        d->vBar->show();
    else if(bar == d->hBar && horizontalScrollBarPolicy() != Qt::ScrollBarAlwaysOff)
        d->hBar->show();

    if(d->scrollBarAnimation){
        disconnect(d->scrollBarAnimation, &QPropertyAnimation::finished, bar, &DScrollBar::hide);
        disconnect(d->scrollBarAnimation, &QPropertyAnimation::finished, bar, &DScrollBar::hide);

        d->scrollBarAnimation->setStartValue(1.0);
        d->scrollBarAnimation->setEndValue(0.0);
        d->scrollBarAnimation->start();
        d->timer->start(1000);
    }
}

DScrollArea::DScrollArea(DScrollAreaPrivate &dd, QWidget *parent):
    QScrollArea(parent),
    DObject(dd)
{
    DThemeManager::registerWidget(this);

    d_func()->init();
}

DWIDGET_END_NAMESPACE
