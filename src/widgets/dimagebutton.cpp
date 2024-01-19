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

#include "dimagebutton.h"
#include "dconstants.h"
#include "dthememanager.h"
#include "private/dimagebutton_p.h"

#include <QMouseEvent>
#include <QEvent>
#include <QIcon>
#include <QApplication>
#include <QImageReader>
#include <QDebug>

DWIDGET_BEGIN_NAMESPACE

/*!
 * \~english \class DImageButton
 * \~english \brief The DImageButton class provides an easy way to create image based buttons.
 *
 * A DImageButton has four states: normal, hover, pressed and checked, developers
 * should provide at least the normal state image to get it to work properly.
 */

/*!
 * \~english \brief DImageButton::DImageButton constructs an instance of DImageButton
 * \~english \param parent is the parent widget that the button will be attached to.
 */

/*!
 * \~chinese \class DImageButton
 * \~chinese \brief 在Deepin的程序设计中，用到了大量基于图片的按钮，而Qt的QPushButton不能方便的只使用图片，
 * 每个项目都存在相同的自绘图片的按钮控件，所以Dtk提供了基于图片来构建的按钮。
 *
 * DImageButton 五个状态:
 * - 正常 DImageButton::State::Normal
 * - 鼠标移动在控件上 DImageButton::State::Hover
 * - 鼠标按下 DImageButton::State::Press
 * - 当前选中 DImageButton::State::Checked
 * - 禁用 DImageButton::State::Disabled
 *
 * \code
 * DImageButton *button = new DImageButton(":/normal.png", ":/hover.png", ":/press.png", this);
 * ...
 * connect(button, &DImageButton::clicked, ...);
 * \endcode
 *
 * \~chinese \enum DImageButton::State
 * DImageButton::State 定义了按钮可以使用的状态
 *
 * \~chinese \var DImageButton::Normal
 * 按钮默认状态图片 DImageButton::setNormalPic
 *
 * \~chinese \var DImageButton::Hover
 * 鼠标在按钮上时的图片 DImageButton::setHoverPic
 *
 * \~chinese \var DImageButton::Press
 * 按钮按下时的图片 DImageButton::setPressPic
 *
 * \~chinese \var DImageButton::Checked
 * 按钮选中的图片 DImageButton::setCheckedPic
 *
 * \~chinese \var DImageButton::Disabled
 * 按钮被禁用时的图片 DImageButton::setDisabledPic
 */

/*!
 * \fn DImageButton::clicked
 * \~chinese \brief 当按钮被点击时会发出该信号
 * \fn DImageButton::checkedChanged
 * \~chinese \brief 当按钮的选择状态发生改变时会发出该信号
 * \fn DImageButton::stateChanged
 * \~chinese \brief 当按钮的状态发生变化时会发出该信号
 */

/*!
 * \~chinese \brief DImageButton的默认构造函数
 *
 * \param parent
 */
DImageButton::DImageButton(QWidget *parent)
    : QLabel(parent)
    , DObject(*new DImageButtonPrivate(this))
{
    DThemeManager::registerWidget(this, QStringList({"checked", "state"}));

    D_D(DImageButton);

    d->updateIcon();
}

/*!
 * \~english \brief DImageButton::DImageButton This is an overloaded function.
 *
 * It's convinient to provide the images that used at the initialize stage.
 *
 * \param normalPic is the path of image to be used as the normal state.
 * \param hoverPic is the path of image to be used as the hover state.
 * \param pressPic is the path of image to be used as the pressed state.
 * \param parent is the parent widget that the button will be attached to.
 */

/*!
 * \~chinese \brief 这是重载的构造函数
 *
 *  通过图片来初始化按钮
 *
 * \param normalPic 默认状态下的图片
 * \param hoverPic 鼠标在控件上的图片
 * \param pressPic 鼠标按下的图片
 * \param parent
 */
DImageButton::DImageButton(const QString &normalPic, const QString &hoverPic, const QString &pressPic, QWidget *parent)
    : QLabel(parent)
    , DObject(*new DImageButtonPrivate(this))
{
    DThemeManager::registerWidget(this, QStringList({"checked", "state"}));

    D_D(DImageButton);

    if (!normalPic.isEmpty()) {
        d->m_normalPic = normalPic;
    }
    if (!hoverPic.isEmpty()) {
        d->m_hoverPic = hoverPic;
    }
    if (!pressPic.isEmpty()) {
        d->m_pressPic = pressPic;
    }

    setCheckable(false);

    d->updateIcon();
}

/*!
 * \~english \brief DImageButton::DImageButton This is an overloaded function.
 *
 * It's convinient to provide the images that used at the initialize stage.
 *
 * \param normalPic is the path of image to be used as the normal state.
 * \param hoverPic is the path of image to be used as the hover state.
 * \param pressPic is the path of image to be used as the pressed state.
 * \param checkedPic is the path of image to be used as the checked state.
 * \param parent is the parent widget that the button will be attached to.
 */

/*!
 * \~chinese \brief 这是重载的构造函数
 *
 * 通过图片来初始化按钮
 *
 * \param normalPic 默认的图片
 * \param hoverPic 鼠标在控件上的图片
 * \param pressPic 鼠标按下的图片
 * \param checkedPic 选中时的图片
 * \param parent
 */
DImageButton::DImageButton(const QString &normalPic, const QString &hoverPic,
                           const QString &pressPic, const QString &checkedPic, QWidget *parent)
    : QLabel(parent)
    , DObject(*new DImageButtonPrivate(this))
{
    DThemeManager::registerWidget(this, QStringList({"checked", "state"}));

    D_D(DImageButton);

    if (!normalPic.isEmpty()) {
        d->m_normalPic = normalPic;
    }
    if (!hoverPic.isEmpty()) {
        d->m_hoverPic = hoverPic;
    }
    if (!pressPic.isEmpty()) {
        d->m_pressPic = pressPic;
    }
    if (!checkedPic.isEmpty()) {
        d->m_checkedPic = checkedPic;
    }

    setCheckable(true);

    d->updateIcon();
}

DImageButton::~DImageButton()
{
}

void DImageButton::enterEvent(QEvent *event)
{
    D_D(DImageButton);

    setCursor(Qt::PointingHandCursor);

    if (!d->m_isChecked && isEnabled()) {
        d->setState(Hover);
    }

    event->accept();
    //QLabel::enterEvent(event);
}

void DImageButton::leaveEvent(QEvent *event)
{
    D_D(DImageButton);

    if (!d->m_isChecked && isEnabled()) {
        d->setState(Normal);
    }

    event->accept();
    //QLabel::leaveEvent(event);
}

void DImageButton::mousePressEvent(QMouseEvent *event)
{
    D_D(DImageButton);

    if (event->button() != Qt::LeftButton) {
        return;
    }

    d->setState(Press);

    event->accept();
    //QLabel::mousePressEvent(event);
}

void DImageButton::mouseReleaseEvent(QMouseEvent *event)
{
    D_D(DImageButton);

    event->accept();

    if (event->button() != Qt::LeftButton) {
        return;
    }

    if (!rect().contains(event->pos())) {
        return;
    }

    if (d->m_isCheckable) {
        d->m_isChecked = !d->m_isChecked;
        if (d->m_isChecked) {
            d->setState(Checked);
        } else {
            d->setState(Normal);
        }
    } else {
        d->setState(Hover);
    }

    Q_EMIT clicked();
}

void DImageButton::mouseMoveEvent(QMouseEvent *event)
{
    D_D(DImageButton);

    if (!d->m_isCheckable && !rect().contains(event->pos())) {
        d->setState(Normal);
    }
}

/*!
 * \~chinese \brief 设置是否启用按钮的功能
 *
 * 该方法和 DImageButton::setDisabled() 方法的作用相反，设置为False时则按钮的功能不可用，不能被点击和选中。
 *
 * \see DImageButton::setDisabled
 * \see DImageButton::isEnabled
 * \see DImageButton::enabled
 *
 * \param enabled
 */
void DImageButton::setEnabled(bool enabled)
{
    D_D(DImageButton);
    if (!enabled) {
        d->setState(Disabled);
    } else {
        d->setState(Normal);
    }

    QWidget::setEnabled(enabled);
}

/*!
 * \~chinese \brief 设置是否禁用按钮的功能
 *
 * 该方法和 DImageButton::setEnabled() 方法的作用相反，设置为True时则按钮的功能不可用，不能被点击和选中。
 *
 * \see DImageButton::setEnabled
 * \see DImageButton::disabled
 *
 * \param disabled
 */
void DImageButton::setDisabled(bool disabled)
{
    setEnabled(!disabled);
}

/*!
 * \~chinese \brief 设置按钮是否可以被选中
 *
 * 该方法默认值为false，如果要开启选中效果，则需要设置为True。
 *
 * \see DImageButton::checkable
 * \see DImageButton::isCheckable
 *
 * \param flag
 */
void DImageButton::setCheckable(bool flag)
{
    D_D(DImageButton);

    d->m_isCheckable = flag;

    if (!d->m_isCheckable) {
        d->setState(Normal);
    }
}

/*!
 * \~chinese \brief 设置按钮的选中状态
 *
 * 如果DImageButton::setCheckable()没有被设置为true，则当前方法不可用。
 *
 * \param flag
 *
 * \see DImageButton::setCheckable
 * \see DImageButton::isChecked
 * \see DImageButton::checkedChanged
 */
void DImageButton::setChecked(bool flag)
{
    D_D(DImageButton);

    if (d->m_isCheckable == false) {
        return;
    }

    d->m_isChecked = flag;
    if (d->m_isChecked) {
        d->setState(Checked);
    } else {
        d->setState(Normal);
    }

    Q_EMIT checkedChanged(d->m_isChecked);
}

/*!
 * \~english \property DImageButton::checked
 * \~english \brief This property indicates the DImageButton is in checked state of not.
 */

/*!
 * \~chinese \property DImageButton::checked
 *
 * \~chinese \brief 返回按钮现在是否为选中状态
 *
 * \see DImageButton::setChecked
 * \see DImageButton::checkedChanged
 *
 * \return true 选中
 * \return false 未选中
 */

/*!
 * \~chinese \brief 返回按钮是否是选中状态
 *
 * \see DImageButton::setChecked
 * \see DImageButton::checkedChanged
 *
 * \return true 选中状态
 * \return false 不是选中状态
 */
bool DImageButton::isChecked() const
{
    D_DC(DImageButton);

    return d->m_isChecked;
}

/*!
 * \~english \property DImageButton::checkable
 * \~english \brief This property indicates the DImageButton can be checked or not.
 */

/*!
 * \~chinese \property DImageButton::checkable
 *
 * \~chinese \brief 这个方法会返回按钮是否可以被选中
 *
 * \see DImageButton::setCheckable
 * \see DImageButton::isCheckable
 *
 * \return true 可以被选中
 * \return false 不可以被选中
 */

/*!
 * \~chinese \brief 这个方法会返回按钮是否可以被选中
 *
 * \see DImageButton::setCheckable
 * \see DImageButton::checkable
 *
 * \return true
 * \return false
 */
bool DImageButton::isCheckable() const
{
    D_DC(DImageButton);

    return d->m_isCheckable;
}

/*!
 * \~chinese \brief 该方法用来设置默认状态下的图片
 *
 * \see DImageButton::normalPic
 * \see DImageButton::getNormalPic
 *
 * \param normalPicPixmap 图片的访问地址
 */
void DImageButton::setNormalPic(const QString &normalPicPixmap)
{
    D_D(DImageButton);

    d->m_normalPic = normalPicPixmap;
    d->updateIcon();
}

/*!
 * \~chinese \brief 设置鼠标在控件上时的图片
 *
 * \see DImageButton::hoverPic
 * \see DImageButton::getHoverPic
 *
 * \param hoverPicPixmap 图片的访问地址
 */
void DImageButton::setHoverPic(const QString &hoverPicPixmap)
{
    D_D(DImageButton);

    d->m_hoverPic = hoverPicPixmap;
    d->updateIcon();
}

/*!
 * \~chinese \brief 设置鼠标按下的图片
 *
 * \see DImageButton::pressPic
 * \see DImageButton::getPressPic
 *
 * \param pressPicPixmap 图片的访问地址
 */
void DImageButton::setPressPic(const QString &pressPicPixmap)
{
    D_D(DImageButton);

    d->m_pressPic = pressPicPixmap;
    d->updateIcon();
}

/*!
 * \~chinese \brief 设置选中状态下的图片
 *
 * \see DImageButton::checkedPic
 * \see DImageButton::getCheckedPic
 *
 * \param checkedPicPixmap 图片的访问地址
 */
void DImageButton::setCheckedPic(const QString &checkedPicPixmap)
{
    D_D(DImageButton);

    d->m_checkedPic = checkedPicPixmap;
    d->updateIcon();
}

/*!
 * \~chinese \brief 设置禁用状态下的图片
 *
 * \see DImageButton::disabledPic
 * \see DImageButton::getDisabledPic
 *
 * \param disabledPicPixmap 图片的访问地址
 */
void DImageButton::setDisabledPic(const QString &disabledPicPixmap)
{
    D_D(DImageButton);

    d->m_disabledPic = disabledPicPixmap;
    d->updateIcon();
}

/*!
 * \~english \property DImageButton::getNormalPic
 * \~english \brief This property holds the path of the image used as the normal state.
 */

/*!
 * \~chinese \property DImageButton::normalPic
 *
 * \~chinese \brief 当前的默认状态图片
 *
 * \see DImageButton::setNormalPic
 * \see DImageButton::getNormalPic
 *
 * \return const QString
 */

/*!
 * \~chinese \brief 返回默认状态的图片路径
 *
 * \see DImageButton::setNormalPic
 * \see DImageButton::normalPic
 *
 * \return const QString 默认状态图片的路径
 */
const QString DImageButton::getNormalPic() const
{
    D_DC(DImageButton);

    return d->m_normalPic;
}

/*!
 * \~english \property DImageButton::getHoverPic
 * \~english \brief This property holds the path of the image used as the hover state.
 */

/*!
 * \~chinese \property DImageButton::hoverPic
 *
 * \~chinese \brief 返回鼠标在控件上时的图片路径
 *
 * \see DImageButton::setHoverPic
 * \see DImageButton::getHoverPic
 *
 * \return const QString 图片路径
 */

/*!
 * \~chinese \brief 返回鼠标在按钮上时的图片路径
 *
 * \see DImageButton::setHoverPic
 * \see DImageButton::hoverPic
 *
 * \return const QString 图片路径
 */
const QString DImageButton::getHoverPic() const
{
    D_DC(DImageButton);

    return d->m_hoverPic;
}

/*!
 * \~english \property DImageButton::getPressPic
 * \~english \brief This property holds the path of the image used as the pressed state.
 */

/*!
 * \~chinese \property DImageButton::pressPic
 *
 * \~chinese \brief 设置的鼠标按下时的图片
 *
 * \see DImageButton::setPressPic
 * \see DImageButton::getPressPic
 *
 * \return const QString 图片路径
 */

/*!
 * \~chinese \brief 返回鼠标按下时的图片
 *
 * \see DImageButton::pressPic
 * \see DImageButton::setPressPic
 *
 * \return const QString 图片路径
 */
const QString DImageButton::getPressPic() const
{
    D_DC(DImageButton);

    return d->m_pressPic;
}

/*!
 * \~english \property DImageButton::getCheckedPic
 * \~english \brief This property holds the path of the image used as the checked state.
 */

/*!
 * \~chinese \property DImageButton::checkedPic
 *
 * \see DImageButton::setCheckedPic
 * \see DImageButton::getCheckedPic
 *
 * \~chinese \brief 选中状态时的图片
 *
 * \return const QString 图片路径
 */

/*!
 * \~chinese \brief 返回选中状态时的图片
 *
 * \see DImageButton::setCheckedPic
 * \see DImageButton::checkedPic
 *
 * \return const QString 图片路径
 */
const QString DImageButton::getCheckedPic() const
{
    D_DC(DImageButton);

    return d->m_checkedPic;
}

/*!
 * \~chinese \property DImageButton::disabledPic
 *
 * \~chinese \brief 禁用状态下的图片
 *
 * \see DImageButton::setDisabledPic
 * \see DImageButton::getDisabledPic
 *
 * \return const QString 图片路径
 */

/*!
 * \~chinese \brief 返回禁用状态下的图片
 *
 * \see DImageButton::setDisabledPic
 * \see DImageButton::disabledPic
 *
 * \return const QString 图片路径
 */
const QString DImageButton::getDisabledPic() const
{
    D_DC(DImageButton);

    return d->m_disabledPic;
}

/*!
 * \~english \brief DImageButton::setState change the image by state
 * \~english \param state: see DImageButton::State
 */

/*!
 * \~chinese \brief 设置当前的按钮状态
 *
 * \param state 当前的状态
 *
 * \see DImageButton::getState
 * \see DImageButton::stateChanged
 */
void DImageButton::setState(DImageButton::State state)
{
    D_D(DImageButton);

    d->setState(state);
}


/*!
 * \~english \brief DImageButton::getState
 * \~english \return the state that the DImageButton is in.
 */

/*!
 * \~chinese \brief 返回当前的按钮状态
 *
 * \see DImageButton::setState
 * \see DImageButton::stateChanged
 *
 * \return DImageButton::State
 */
DImageButton::State DImageButton::getState() const
{
    D_DC(DImageButton);

    return d->m_state;
}

DImageButton::DImageButton(DImageButtonPrivate &q, QWidget *parent)
    : QLabel(parent)
    , DObject(q)
{
    DThemeManager::registerWidget(this, QStringList({"checked", "state"}));

    D_D(DImageButton);

    d->updateIcon();
}

DImageButtonPrivate::DImageButtonPrivate(DImageButton *qq)
    : DObjectPrivate(qq)
{

}

DImageButtonPrivate::~DImageButtonPrivate()
{

}

void DImageButtonPrivate::updateIcon()
{
    D_Q(DImageButton);

    switch (m_state) {
    case DImageButton::Hover:
        q->setProperty("state", "hover");
        if (!m_hoverPic.isEmpty()) { q->setPixmap(loadPixmap(m_hoverPic)); }
        break;
    case DImageButton::Press:
        q->setProperty("state", "press");
        if (!m_pressPic.isEmpty()) { q->setPixmap(loadPixmap(m_pressPic)); }
        break;
    case DImageButton::Checked:
        q->setProperty("state", "checked");
        if (!m_checkedPic.isEmpty()) { q->setPixmap(loadPixmap(m_checkedPic)); }
        break;
    case DImageButton::Disabled:
        q->setProperty("state", "disabled");
        if (!m_disabledPic.isEmpty()) { q->setPixmap(loadPixmap(m_disabledPic)); }
        break;
    default:
        q->setProperty("state", "");
        if (!m_normalPic.isEmpty()) { q->setPixmap(loadPixmap(m_normalPic)); }
        break;
    }

    q->setAlignment(Qt::AlignCenter);

    Q_EMIT q->stateChanged();
}

void DImageButtonPrivate::setState(DImageButton::State state)
{
    if (m_state == state) {
        return;
    }

    m_state = state;

    updateIcon();
}

QPixmap DImageButtonPrivate::loadPixmap(const QString &path)
{
    D_Q(DImageButton);

    qreal ratio = 1.0;

    const qreal devicePixelRatio = q->devicePixelRatioF();

    QPixmap pixmap;

    if (!qFuzzyCompare(ratio, devicePixelRatio)) {
        QImageReader reader;
        reader.setFileName(qt_findAtNxFile(path, devicePixelRatio, &ratio));
        if (reader.canRead()) {
            reader.setScaledSize(reader.size() * (devicePixelRatio / ratio));
            pixmap = QPixmap::fromImage(reader.read());
            pixmap.setDevicePixelRatio(devicePixelRatio);
        }
    } else {
        pixmap.load(path);
    }

    return pixmap;
}

DWIDGET_END_NAMESPACE
