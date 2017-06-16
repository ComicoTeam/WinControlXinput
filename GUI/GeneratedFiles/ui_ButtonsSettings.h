/********************************************************************************
** Form generated from reading UI file 'ButtonsSettings.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUTTONSSETTINGS_H
#define UI_BUTTONSSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ButtonsSettings
{
public:
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *okayButton;
    QPushButton *cancelButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *buttonY;
    QPushButton *buttonB;
    QPushButton *buttonX;
    QPushButton *buttonA;
    QTextEdit *textEdit;
    QComboBox *Y_Combo;
    QComboBox *B_Combo;
    QTextEdit *textEdit_2;
    QComboBox *X_Combo;
    QTextEdit *textEdit_3;
    QComboBox *A_Combo;
    QTextEdit *textEdit_4;

    void setupUi(QDialog *ButtonsSettings)
    {
        if (ButtonsSettings->objectName().isEmpty())
            ButtonsSettings->setObjectName(QStringLiteral("ButtonsSettings"));
        ButtonsSettings->resize(400, 177);
        layoutWidget_4 = new QWidget(ButtonsSettings);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(110, 140, 158, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget_4);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        okayButton = new QPushButton(layoutWidget_4);
        okayButton->setObjectName(QStringLiteral("okayButton"));

        horizontalLayout->addWidget(okayButton);

        cancelButton = new QPushButton(layoutWidget_4);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout->addWidget(cancelButton);

        layoutWidget = new QWidget(ButtonsSettings);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(25, 10, 46, 111));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        buttonY = new QPushButton(layoutWidget);
        buttonY->setObjectName(QStringLiteral("buttonY"));
        buttonY->setStyleSheet(QLatin1String("border-image: url(:/GUI/Resources/Xbox_Y_button.png) 0 0 0 0;\n"
"border-top: 3px transparent;\n"
"border-bottom: 3px transparent; \n"
"border-right: 10px transparent;\n"
"border-left: 10px transparent;"));

        verticalLayout->addWidget(buttonY);

        buttonB = new QPushButton(layoutWidget);
        buttonB->setObjectName(QStringLiteral("buttonB"));
        buttonB->setStyleSheet(QLatin1String("border-image: url(:/GUI/Resources/Xbox_B_button.png) 0 0 0 0;\n"
"border-top: 3px transparent;\n"
"border-bottom: 3px transparent; \n"
"border-right: 10px transparent;\n"
"border-left: 10px transparent;"));

        verticalLayout->addWidget(buttonB);

        buttonX = new QPushButton(layoutWidget);
        buttonX->setObjectName(QStringLiteral("buttonX"));
        buttonX->setStyleSheet(QLatin1String("border-image: url(:/GUI/Resources/Xbox_X_button.png) 0 0 0 0;\n"
"border-top: 3px transparent;\n"
"border-bottom: 3px transparent; \n"
"border-right: 10px transparent;\n"
"border-left: 10px transparent;"));

        verticalLayout->addWidget(buttonX);

        buttonA = new QPushButton(layoutWidget);
        buttonA->setObjectName(QStringLiteral("buttonA"));
        buttonA->setStyleSheet(QLatin1String("border-image: url(:/GUI/Resources/Xbox_A_button.png) 0 0 0 0;\n"
"border-top: 3px transparent;\n"
"border-bottom: 3px transparent; \n"
"border-right: 10px transparent;\n"
"border-left: 10px transparent;"));

        verticalLayout->addWidget(buttonA);

        textEdit = new QTextEdit(ButtonsSettings);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(210, 10, 231, 16));
        textEdit->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        textEdit->setFrameShape(QFrame::NoFrame);
        textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit->setReadOnly(true);
        textEdit->setTabStopWidth(80);
        textEdit->setCursorWidth(1);
        Y_Combo = new QComboBox(ButtonsSettings);
        Y_Combo->setObjectName(QStringLiteral("Y_Combo"));
        Y_Combo->setGeometry(QRect(70, 10, 128, 20));
        B_Combo = new QComboBox(ButtonsSettings);
        B_Combo->setObjectName(QStringLiteral("B_Combo"));
        B_Combo->setGeometry(QRect(70, 40, 128, 20));
        textEdit_2 = new QTextEdit(ButtonsSettings);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(210, 40, 231, 16));
        textEdit_2->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        textEdit_2->setFrameShape(QFrame::NoFrame);
        textEdit_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_2->setReadOnly(true);
        textEdit_2->setTabStopWidth(80);
        textEdit_2->setCursorWidth(1);
        X_Combo = new QComboBox(ButtonsSettings);
        X_Combo->setObjectName(QStringLiteral("X_Combo"));
        X_Combo->setGeometry(QRect(70, 70, 128, 20));
        textEdit_3 = new QTextEdit(ButtonsSettings);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(210, 70, 231, 16));
        textEdit_3->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        textEdit_3->setFrameShape(QFrame::NoFrame);
        textEdit_3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_3->setReadOnly(true);
        textEdit_3->setTabStopWidth(80);
        textEdit_3->setCursorWidth(1);
        A_Combo = new QComboBox(ButtonsSettings);
        A_Combo->setObjectName(QStringLiteral("A_Combo"));
        A_Combo->setGeometry(QRect(70, 100, 128, 20));
        textEdit_4 = new QTextEdit(ButtonsSettings);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));
        textEdit_4->setGeometry(QRect(210, 100, 231, 16));
        textEdit_4->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        textEdit_4->setFrameShape(QFrame::NoFrame);
        textEdit_4->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_4->setReadOnly(true);
        textEdit_4->setTabStopWidth(80);
        textEdit_4->setCursorWidth(1);
        layoutWidget->raise();
        layoutWidget_4->raise();
        textEdit->raise();
        Y_Combo->raise();
        B_Combo->raise();
        textEdit_2->raise();
        X_Combo->raise();
        textEdit_3->raise();
        A_Combo->raise();
        textEdit_4->raise();

        retranslateUi(ButtonsSettings);

        QMetaObject::connectSlotsByName(ButtonsSettings);
    } // setupUi

    void retranslateUi(QDialog *ButtonsSettings)
    {
        ButtonsSettings->setWindowTitle(QApplication::translate("ButtonsSettings", "ButtonsSettings", Q_NULLPTR));
        okayButton->setText(QApplication::translate("ButtonsSettings", "Okay", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("ButtonsSettings", "Cancel", Q_NULLPTR));
        buttonY->setText(QString());
        buttonB->setText(QString());
        buttonX->setText(QString());
        buttonA->setText(QString());
        textEdit->setHtml(QApplication::translate("ButtonsSettings", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Select Action</p></body></html>", Q_NULLPTR));
        Y_Combo->clear();
        Y_Combo->insertItems(0, QStringList()
         << QApplication::translate("ButtonsSettings", "None", Q_NULLPTR)
         << QApplication::translate("ButtonsSettings", "LeftClick", Q_NULLPTR)
         << QApplication::translate("ButtonsSettings", "RightClick", Q_NULLPTR)
         << QApplication::translate("ButtonsSettings", "Start(W.I.P)", Q_NULLPTR)
         << QApplication::translate("ButtonsSettings", "ScrollUp", Q_NULLPTR)
         << QApplication::translate("ButtonsSettings", "ScrollDown", Q_NULLPTR)
         << QApplication::translate("ButtonsSettings", "OpenVirtualKeyboard", Q_NULLPTR)
        );
        B_Combo->clear();
        B_Combo->insertItems(0, QStringList()
         << QApplication::translate("ButtonsSettings", "None", Q_NULLPTR)
         << QApplication::translate("ButtonsSettings", "LeftClick", Q_NULLPTR)
         << QApplication::translate("ButtonsSettings", "RightClick", Q_NULLPTR)
         << QApplication::translate("ButtonsSettings", "Start(W.I.P)", Q_NULLPTR)
         << QApplication::translate("ButtonsSettings", "ScrollUp", Q_NULLPTR)
         << QApplication::translate("ButtonsSettings", "ScrollDown", Q_NULLPTR)
         << QApplication::translate("ButtonsSettings", "OpenVirtualKeyboard", Q_NULLPTR)
        );
        textEdit_2->setHtml(QApplication::translate("ButtonsSettings", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Select Action</p></body></html>", Q_NULLPTR));
        X_Combo->clear();
        X_Combo->insertItems(0, QStringList()
         << QApplication::translate("ButtonsSettings", "None", Q_NULLPTR)
         << QApplication::translate("ButtonsSettings", "LeftClick", Q_NULLPTR)
         << QApplication::translate("ButtonsSettings", "RightClick", Q_NULLPTR)
         << QApplication::translate("ButtonsSettings", "Start(W.I.P)", Q_NULLPTR)
         << QApplication::translate("ButtonsSettings", "ScrollUp", Q_NULLPTR)
         << QApplication::translate("ButtonsSettings", "ScrollDown", Q_NULLPTR)
         << QApplication::translate("ButtonsSettings", "OpenVirtualKeyboard", Q_NULLPTR)
        );
        textEdit_3->setHtml(QApplication::translate("ButtonsSettings", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Select Action</p></body></html>", Q_NULLPTR));
        A_Combo->clear();
        A_Combo->insertItems(0, QStringList()
         << QApplication::translate("ButtonsSettings", "None", Q_NULLPTR)
         << QApplication::translate("ButtonsSettings", "LeftClick", Q_NULLPTR)
         << QApplication::translate("ButtonsSettings", "RightClick", Q_NULLPTR)
         << QApplication::translate("ButtonsSettings", "Start(W.I.P)", Q_NULLPTR)
         << QApplication::translate("ButtonsSettings", "ScrollUp", Q_NULLPTR)
         << QApplication::translate("ButtonsSettings", "ScrollDown", Q_NULLPTR)
         << QApplication::translate("ButtonsSettings", "OpenVirtualKeyboard", Q_NULLPTR)
        );
        textEdit_4->setHtml(QApplication::translate("ButtonsSettings", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Select Action</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ButtonsSettings: public Ui_ButtonsSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUTTONSSETTINGS_H
