/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GUIClass
{
public:
    QAction *actionSettings;
    QAction *actionExit;
    QWidget *centralWidget;
    QPushButton *buttonY;
    QPushButton *buttonB;
    QPushButton *buttonX;
    QPushButton *buttonA;
    QPushButton *buttonRT;
    QPushButton *buttonRB;
    QPushButton *buttonLT;
    QPushButton *buttonLB;
    QGraphicsView *graphicsView;
    QPushButton *dpadLeft;
    QPushButton *dpadDown;
    QPushButton *dpadRight;
    QPushButton *dpadUp;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GUIClass)
    {
        if (GUIClass->objectName().isEmpty())
            GUIClass->setObjectName(QStringLiteral("GUIClass"));
        GUIClass->resize(601, 398);
        actionSettings = new QAction(GUIClass);
        actionSettings->setObjectName(QStringLiteral("actionSettings"));
        actionExit = new QAction(GUIClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(GUIClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        buttonY = new QPushButton(centralWidget);
        buttonY->setObjectName(QStringLiteral("buttonY"));
        buttonY->setGeometry(QRect(460, 120, 71, 61));
        buttonY->setStyleSheet(QLatin1String("border-image: url(:/GUI/Resources/Xbox_Y_button.png) 0 0 0 0;\n"
"border-top: 3px transparent;\n"
"border-bottom: 3px transparent; \n"
"border-right: 10px transparent;\n"
"border-left: 10px transparent;"));
        buttonB = new QPushButton(centralWidget);
        buttonB->setObjectName(QStringLiteral("buttonB"));
        buttonB->setGeometry(QRect(410, 180, 71, 61));
        buttonB->setStyleSheet(QLatin1String("border-image: url(:/GUI/Resources/Xbox_B_button.png) 0 0 0 0;\n"
"border-top: 3px transparent;\n"
"border-bottom: 3px transparent; \n"
"border-right: 10px transparent;\n"
"border-left: 10px transparent;"));
        buttonX = new QPushButton(centralWidget);
        buttonX->setObjectName(QStringLiteral("buttonX"));
        buttonX->setGeometry(QRect(510, 180, 71, 61));
        buttonX->setStyleSheet(QLatin1String("border-image: url(:/GUI/Resources/Xbox_X_button.png) 0 0 0 0;\n"
"border-top: 3px transparent;\n"
"border-bottom: 3px transparent; \n"
"border-right: 10px transparent;\n"
"border-left: 10px transparent;"));
        buttonA = new QPushButton(centralWidget);
        buttonA->setObjectName(QStringLiteral("buttonA"));
        buttonA->setGeometry(QRect(460, 230, 71, 61));
        buttonA->setStyleSheet(QLatin1String("border-image: url(:/GUI/Resources/Xbox_A_button.png) 0 0 0 0;\n"
"border-top: 3px transparent;\n"
"border-bottom: 3px transparent; \n"
"border-right: 10px transparent;\n"
"border-left: 10px transparent;"));
        buttonRT = new QPushButton(centralWidget);
        buttonRT->setObjectName(QStringLiteral("buttonRT"));
        buttonRT->setGeometry(QRect(500, -10, 101, 81));
        buttonRT->setStyleSheet(QLatin1String("border-image: url(:/GUI/Resources/Xbox_RT.png) 0 0 0 0;\n"
"border-top: 3px transparent;\n"
"border-bottom: 3px transparent; \n"
"border-right: 10px transparent;\n"
"border-left: 10px transparent;"));
        buttonRB = new QPushButton(centralWidget);
        buttonRB->setObjectName(QStringLiteral("buttonRB"));
        buttonRB->setGeometry(QRect(500, 50, 101, 81));
        buttonRB->setStyleSheet(QLatin1String("border-image: url(:/GUI/Resources/Xbox_RB.png) 0 0 0 0;\n"
"border-top: 3px transparent;\n"
"border-bottom: 3px transparent; \n"
"border-right: 10px transparent;\n"
"border-left: 10px transparent;"));
        buttonLT = new QPushButton(centralWidget);
        buttonLT->setObjectName(QStringLiteral("buttonLT"));
        buttonLT->setGeometry(QRect(0, -10, 101, 81));
        buttonLT->setStyleSheet(QLatin1String("border-image: url(:/GUI/Resources/Xbox_LT.png) 0 0 0 0;\n"
"border-top: 3px transparent;\n"
"border-bottom: 3px transparent; \n"
"border-right: 10px transparent;\n"
"border-left: 10px transparent;"));
        buttonLB = new QPushButton(centralWidget);
        buttonLB->setObjectName(QStringLiteral("buttonLB"));
        buttonLB->setGeometry(QRect(0, 50, 101, 81));
        buttonLB->setStyleSheet(QLatin1String("border-image: url(:/GUI/Resources/Xbox_LB.png) 0 0 0 0;\n"
"border-top: 3px transparent;\n"
"border-bottom: 3px transparent; \n"
"border-right: 10px transparent;\n"
"border-left: 10px transparent;"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(60, 120, 161, 171));
        graphicsView->setStyleSheet(QStringLiteral("border-image: url(:/GUI/Resources/Xbox-dpad.png);"));
        dpadLeft = new QPushButton(centralWidget);
        dpadLeft->setObjectName(QStringLiteral("dpadLeft"));
        dpadLeft->setGeometry(QRect(50, 170, 71, 71));
        dpadLeft->setStyleSheet(QLatin1String("border-top: 3px transparent;\n"
"border-bottom: 3px transparent; \n"
"border-right: 10px transparent;\n"
"border-left: 10px transparent;"));
        dpadDown = new QPushButton(centralWidget);
        dpadDown->setObjectName(QStringLiteral("dpadDown"));
        dpadDown->setGeometry(QRect(110, 230, 71, 61));
        dpadDown->setStyleSheet(QLatin1String("border-top: 3px transparent;\n"
"border-bottom: 3px transparent; \n"
"border-right: 10px transparent;\n"
"border-left: 10px transparent;"));
        dpadRight = new QPushButton(centralWidget);
        dpadRight->setObjectName(QStringLiteral("dpadRight"));
        dpadRight->setGeometry(QRect(160, 170, 71, 71));
        dpadRight->setStyleSheet(QLatin1String("border-top: 3px transparent;\n"
"border-bottom: 3px transparent; \n"
"border-right: 10px transparent;\n"
"border-left: 10px transparent;"));
        dpadUp = new QPushButton(centralWidget);
        dpadUp->setObjectName(QStringLiteral("dpadUp"));
        dpadUp->setGeometry(QRect(100, 120, 71, 61));
        dpadUp->setStyleSheet(QLatin1String("border-top: 3px transparent;\n"
"border-bottom: 3px transparent; \n"
"border-right: 10px transparent;\n"
"border-left: 10px transparent;"));
        GUIClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(GUIClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 601, 21));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        GUIClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GUIClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        GUIClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(GUIClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        GUIClass->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuMenu->addAction(actionSettings);
        menuMenu->addAction(actionExit);

        retranslateUi(GUIClass);
        QObject::connect(actionExit, SIGNAL(triggered()), GUIClass, SLOT(close()));

        QMetaObject::connectSlotsByName(GUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *GUIClass)
    {
        GUIClass->setWindowTitle(QApplication::translate("GUIClass", "GUI", Q_NULLPTR));
        actionSettings->setText(QApplication::translate("GUIClass", "Settings", Q_NULLPTR));
        actionExit->setText(QApplication::translate("GUIClass", "Exit", Q_NULLPTR));
        buttonY->setText(QString());
        buttonB->setText(QString());
        buttonX->setText(QString());
        buttonA->setText(QString());
        buttonRT->setText(QString());
        buttonRB->setText(QString());
        buttonLT->setText(QString());
        buttonLB->setText(QString());
        dpadLeft->setText(QString());
        dpadDown->setText(QString());
        dpadRight->setText(QString());
        dpadUp->setText(QString());
        menuMenu->setTitle(QApplication::translate("GUIClass", "Menu", Q_NULLPTR));
        menuAbout->setTitle(QApplication::translate("GUIClass", "About", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GUIClass: public Ui_GUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
