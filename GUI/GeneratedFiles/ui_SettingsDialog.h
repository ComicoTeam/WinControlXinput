/********************************************************************************
** Form generated from reading UI file 'SettingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *okayButton;
    QPushButton *cancelButton;
    QTabWidget *tabWidget;
    QWidget *inputTab;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QCheckBox *mouseAlterate;
    QCheckBox *anologSwitch;
    QCheckBox *virtualKeyboard;
    QCheckBox *dPadMouse;
    QWidget *generalTab;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *autoStart;
    QCheckBox *startMini;
    QCheckBox *useBlack;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QStringLiteral("SettingsDialog"));
        SettingsDialog->resize(400, 230);
        layoutWidget = new QWidget(SettingsDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(230, 200, 158, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        okayButton = new QPushButton(layoutWidget);
        okayButton->setObjectName(QStringLiteral("okayButton"));

        horizontalLayout->addWidget(okayButton);

        cancelButton = new QPushButton(layoutWidget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout->addWidget(cancelButton);

        tabWidget = new QTabWidget(SettingsDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(-4, -1, 411, 201));
        inputTab = new QWidget();
        inputTab->setObjectName(QStringLiteral("inputTab"));
        layoutWidget1 = new QWidget(inputTab);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 305, 88));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mouseAlterate = new QCheckBox(layoutWidget1);
        mouseAlterate->setObjectName(QStringLiteral("mouseAlterate"));

        verticalLayout->addWidget(mouseAlterate);

        anologSwitch = new QCheckBox(layoutWidget1);
        anologSwitch->setObjectName(QStringLiteral("anologSwitch"));
        anologSwitch->setChecked(false);

        verticalLayout->addWidget(anologSwitch);

        virtualKeyboard = new QCheckBox(layoutWidget1);
        virtualKeyboard->setObjectName(QStringLiteral("virtualKeyboard"));

        verticalLayout->addWidget(virtualKeyboard);

        dPadMouse = new QCheckBox(layoutWidget1);
        dPadMouse->setObjectName(QStringLiteral("dPadMouse"));

        verticalLayout->addWidget(dPadMouse);

        tabWidget->addTab(inputTab, QString());
        generalTab = new QWidget();
        generalTab->setObjectName(QStringLiteral("generalTab"));
        layoutWidget2 = new QWidget(generalTab);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 20, 139, 65));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        autoStart = new QCheckBox(layoutWidget2);
        autoStart->setObjectName(QStringLiteral("autoStart"));

        verticalLayout_2->addWidget(autoStart);

        startMini = new QCheckBox(layoutWidget2);
        startMini->setObjectName(QStringLiteral("startMini"));

        verticalLayout_2->addWidget(startMini);

        useBlack = new QCheckBox(layoutWidget2);
        useBlack->setObjectName(QStringLiteral("useBlack"));

        verticalLayout_2->addWidget(useBlack);

        tabWidget->addTab(generalTab, QString());

        retranslateUi(SettingsDialog);
        QObject::connect(okayButton, SIGNAL(clicked()), SettingsDialog, SLOT(accept()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QApplication::translate("SettingsDialog", "SettingsDialog", Q_NULLPTR));
        okayButton->setText(QApplication::translate("SettingsDialog", "Okay", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("SettingsDialog", "Cancel", Q_NULLPTR));
        mouseAlterate->setText(QApplication::translate("SettingsDialog", "Use alterate mouse code (If mouse donset go to the right)", Q_NULLPTR));
        anologSwitch->setText(QApplication::translate("SettingsDialog", "Use Left anolog as mouse", Q_NULLPTR));
        virtualKeyboard->setText(QApplication::translate("SettingsDialog", "Use virtual keyboard(W.I.P.)", Q_NULLPTR));
        dPadMouse->setText(QApplication::translate("SettingsDialog", "Use dPad as mouse (ComingSoon)", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(inputTab), QApplication::translate("SettingsDialog", "Input Tab", Q_NULLPTR));
        autoStart->setText(QApplication::translate("SettingsDialog", "Auto start", Q_NULLPTR));
        startMini->setText(QApplication::translate("SettingsDialog", "Start minimized(W.I.P)", Q_NULLPTR));
        useBlack->setText(QApplication::translate("SettingsDialog", "Use black theme(W.I.P)", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(generalTab), QApplication::translate("SettingsDialog", "GeneralTab", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
