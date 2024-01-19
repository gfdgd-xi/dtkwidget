/********************************************************************************
** Form generated from reading UI file 'cameraform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERAFORM_H
#define UI_CAMERAFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CameraForm
{
public:
    QSlider *horizontalSlider;
    QLabel *label;
    QPushButton *pushButton;
    QWidget *widget;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *CameraForm)
    {
        if (CameraForm->objectName().isEmpty())
            CameraForm->setObjectName(QString::fromUtf8("CameraForm"));
        CameraForm->resize(506, 268);
        horizontalSlider = new QSlider(CameraForm);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(10, 240, 201, 16));
        horizontalSlider->setOrientation(Qt::Horizontal);
        label = new QLabel(CameraForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(290, 10, 200, 200));
        pushButton = new QPushButton(CameraForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(440, 240, 51, 20));
        widget = new QWidget(CameraForm);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 200, 200));
        pushButton_2 = new QPushButton(CameraForm);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 240, 61, 21));
        pushButton_2->setStyleSheet(QString::fromUtf8(""));
        pushButton_3 = new QPushButton(CameraForm);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(380, 240, 51, 21));
        pushButton_4 = new QPushButton(CameraForm);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(250, 240, 51, 22));

        retranslateUi(CameraForm);

        QMetaObject::connectSlotsByName(CameraForm);
    } // setupUi

    void retranslateUi(QWidget *CameraForm)
    {
        CameraForm->setWindowTitle(QCoreApplication::translate("CameraForm", "Form", nullptr));
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("CameraForm", "ok", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CameraForm", "mirrored", nullptr));
        pushButton_3->setText(QCoreApplication::translate("CameraForm", "Round", nullptr));
        pushButton_4->setText(QCoreApplication::translate("CameraForm", "start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CameraForm: public Ui_CameraForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERAFORM_H
