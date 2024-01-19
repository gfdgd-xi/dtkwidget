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

#ifndef LINETAB_H
#define LINETAB_H

#include <QWidget>
#include <QPushButton>
#include <QTimer>

#include "dheaderline.h"
#include "dbaseline.h"
#include "dseparatorhorizontal.h"
#include "dseparatorvertical.h"
#include "dbaseexpand.h"
#include "darrowlineexpand.h"
#include "dswitchlineexpand.h"
#include "dexpandgroup.h"

DWIDGET_USE_NAMESPACE

class LineTab : public QLabel
{
    Q_OBJECT
public:
    explicit LineTab(QWidget *parent = 0);
};

#endif // LINETAB_H
