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

#pragma once

#include <QPointer>
#include <QScopedPointer>

#include <DSettings>

#include "dabstractdialog.h"

DWIDGET_BEGIN_NAMESPACE

class DSettingsWidgetFactory;
class DSettingsDialogPrivate;
class LIBDTKWIDGETSHARED_EXPORT DSettingsDialog : public DAbstractDialog
{
    Q_OBJECT
public:
    DSettingsDialog(QWidget *parent = nullptr);
    ~DSettingsDialog();

    DSettingsWidgetFactory* widgetFactory() const;

public Q_SLOTS:
    void updateSettings(DTK_CORE_NAMESPACE::DSettings *settings);
    void updateSettings(const QByteArray &translateContext, DTK_CORE_NAMESPACE::DSettings *settings);

private:
    QScopedPointer<DSettingsDialogPrivate> dd_ptr;
    Q_DECLARE_PRIVATE_D(qGetPtrHelper(dd_ptr), DSettingsDialog)
};

DWIDGET_END_NAMESPACE
