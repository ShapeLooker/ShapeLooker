/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "shapelookergraphicsview.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSave;
    QAction *actionLoad;
    QAction *actionLineTool;
    QAction *actionRectTool;
    QAction *actionNoTool;
    QAction *actionCornerCircleTool;
    QAction *actionCenterCircleTool;
    QAction *actionPenTool;
    QAction *actionPanTool;
    QAction *actionEraseFull;
    QAction *actionErasePartial;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout;
    QComboBox *comboModel;
    QLabel *label_2;
    QLabel *labelP1;
    QComboBox *comboSpace;
    QLabel *label;
    QComboBox *comboUnits;
    QLabel *labelP2;
    QLineEdit *leP1;
    QLabel *label_3;
    QLineEdit *leP2;
    QSpacerItem *verticalSpacer_2;
    QFrame *line;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QToolButton *toolSelect;
    QToolButton *toolPan;
    QToolButton *toolErase;
    QToolButton *toolPartialErase;
    QToolButton *toolLine;
    QToolButton *toolRect;
    QToolButton *toolCircleCenter;
    QToolButton *toolCircleCorner;
    QToolButton *toolPen;
    QSpacerItem *horizontalSpacer_3;
    ShapeLookerGraphicsView *graphicsView;
    QLabel *labelTool;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *drawStyleButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuTools;
    QMenu *menuDraw_Circle;
    QMenu *menuEraser;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName("actionLoad");
        actionLineTool = new QAction(MainWindow);
        actionLineTool->setObjectName("actionLineTool");
        actionRectTool = new QAction(MainWindow);
        actionRectTool->setObjectName("actionRectTool");
        actionNoTool = new QAction(MainWindow);
        actionNoTool->setObjectName("actionNoTool");
        actionCornerCircleTool = new QAction(MainWindow);
        actionCornerCircleTool->setObjectName("actionCornerCircleTool");
        actionCenterCircleTool = new QAction(MainWindow);
        actionCenterCircleTool->setObjectName("actionCenterCircleTool");
        actionPenTool = new QAction(MainWindow);
        actionPenTool->setObjectName("actionPenTool");
        actionPanTool = new QAction(MainWindow);
        actionPanTool->setObjectName("actionPanTool");
        actionEraseFull = new QAction(MainWindow);
        actionEraseFull->setObjectName("actionEraseFull");
        actionErasePartial = new QAction(MainWindow);
        actionErasePartial->setObjectName("actionErasePartial");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        comboModel = new QComboBox(centralwidget);
        comboModel->setObjectName("comboModel");
        QFont font;
        font.setPointSize(12);
        comboModel->setFont(font);

        gridLayout->addWidget(comboModel, 2, 1, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        labelP1 = new QLabel(centralwidget);
        labelP1->setObjectName("labelP1");
        labelP1->setFont(font);

        gridLayout->addWidget(labelP1, 3, 0, 1, 1);

        comboSpace = new QComboBox(centralwidget);
        comboSpace->setObjectName("comboSpace");
        comboSpace->setFont(font);

        gridLayout->addWidget(comboSpace, 0, 1, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboUnits = new QComboBox(centralwidget);
        comboUnits->setObjectName("comboUnits");
        comboUnits->setFont(font);

        gridLayout->addWidget(comboUnits, 1, 1, 1, 1);

        labelP2 = new QLabel(centralwidget);
        labelP2->setObjectName("labelP2");
        labelP2->setFont(font);

        gridLayout->addWidget(labelP2, 4, 0, 1, 1);

        leP1 = new QLineEdit(centralwidget);
        leP1->setObjectName("leP1");
        leP1->setFont(font);

        gridLayout->addWidget(leP1, 3, 1, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        leP2 = new QLineEdit(centralwidget);
        leP2->setObjectName("leP2");
        leP2->setFont(font);

        gridLayout->addWidget(leP2, 4, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 5, 0, 1, 2);


        horizontalLayout_3->addLayout(gridLayout);

        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout_3->addWidget(line);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        toolSelect = new QToolButton(centralwidget);
        toolSelect->setObjectName("toolSelect");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/assets/cursor.png"), QSize(), QIcon::Mode::Selected, QIcon::State::On);
        toolSelect->setIcon(icon);

        horizontalLayout->addWidget(toolSelect);

        toolPan = new QToolButton(centralwidget);
        toolPan->setObjectName("toolPan");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/assets/grab.png"), QSize(), QIcon::Mode::Selected, QIcon::State::On);
        toolPan->setIcon(icon1);

        horizontalLayout->addWidget(toolPan);

        toolErase = new QToolButton(centralwidget);
        toolErase->setObjectName("toolErase");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/assets/erase.png"), QSize(), QIcon::Mode::Selected, QIcon::State::On);
        toolErase->setIcon(icon2);

        horizontalLayout->addWidget(toolErase);

        toolPartialErase = new QToolButton(centralwidget);
        toolPartialErase->setObjectName("toolPartialErase");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/assets/partialErase.png"), QSize(), QIcon::Mode::Selected, QIcon::State::On);
        toolPartialErase->setIcon(icon3);

        horizontalLayout->addWidget(toolPartialErase);

        toolLine = new QToolButton(centralwidget);
        toolLine->setObjectName("toolLine");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/assets/line.png"), QSize(), QIcon::Mode::Selected, QIcon::State::On);
        toolLine->setIcon(icon4);

        horizontalLayout->addWidget(toolLine);

        toolRect = new QToolButton(centralwidget);
        toolRect->setObjectName("toolRect");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/assets/rect.png"), QSize(), QIcon::Mode::Selected, QIcon::State::On);
        toolRect->setIcon(icon5);

        horizontalLayout->addWidget(toolRect);

        toolCircleCenter = new QToolButton(centralwidget);
        toolCircleCenter->setObjectName("toolCircleCenter");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/assets/centercircle.png"), QSize(), QIcon::Mode::Selected, QIcon::State::On);
        toolCircleCenter->setIcon(icon6);

        horizontalLayout->addWidget(toolCircleCenter);

        toolCircleCorner = new QToolButton(centralwidget);
        toolCircleCorner->setObjectName("toolCircleCorner");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/assets/ellipse.png"), QSize(), QIcon::Mode::Selected, QIcon::State::On);
        toolCircleCorner->setIcon(icon7);

        horizontalLayout->addWidget(toolCircleCorner);

        toolPen = new QToolButton(centralwidget);
        toolPen->setObjectName("toolPen");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/assets/pen.png"), QSize(), QIcon::Mode::Selected, QIcon::State::On);
        toolPen->setIcon(icon8);

        horizontalLayout->addWidget(toolPen);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        graphicsView = new ShapeLookerGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");

        gridLayout_2->addWidget(graphicsView, 1, 0, 1, 1);

        labelTool = new QLabel(centralwidget);
        labelTool->setObjectName("labelTool");
        labelTool->setFont(font);
        labelTool->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(labelTool, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        drawStyleButton = new QPushButton(centralwidget);
        drawStyleButton->setObjectName("drawStyleButton");

        horizontalLayout_2->addWidget(drawStyleButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 98, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 4, 0, 1, 1);


        horizontalLayout_3->addLayout(gridLayout_2);


        verticalLayout->addLayout(horizontalLayout_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuTools = new QMenu(menubar);
        menuTools->setObjectName("menuTools");
        menuDraw_Circle = new QMenu(menuTools);
        menuDraw_Circle->setObjectName("menuDraw_Circle");
        menuEraser = new QMenu(menuTools);
        menuEraser->setObjectName("menuEraser");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuTools->menuAction());
        menuFile->addAction(actionSave);
        menuFile->addAction(actionLoad);
        menuTools->addAction(actionNoTool);
        menuTools->addAction(actionLineTool);
        menuTools->addAction(actionRectTool);
        menuTools->addAction(menuDraw_Circle->menuAction());
        menuTools->addAction(actionPenTool);
        menuTools->addAction(menuEraser->menuAction());
        menuTools->addAction(actionPanTool);
        menuDraw_Circle->addAction(actionCornerCircleTool);
        menuDraw_Circle->addAction(actionCenterCircleTool);
        menuEraser->addAction(actionEraseFull);
        menuEraser->addAction(actionErasePartial);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionLoad->setText(QCoreApplication::translate("MainWindow", "Load", nullptr));
        actionLineTool->setText(QCoreApplication::translate("MainWindow", "Draw Line", nullptr));
        actionRectTool->setText(QCoreApplication::translate("MainWindow", "Draw Rectangle", nullptr));
        actionNoTool->setText(QCoreApplication::translate("MainWindow", "No Tool", nullptr));
        actionCornerCircleTool->setText(QCoreApplication::translate("MainWindow", "Corner To Corner", nullptr));
        actionCenterCircleTool->setText(QCoreApplication::translate("MainWindow", "Center", nullptr));
        actionPenTool->setText(QCoreApplication::translate("MainWindow", "Pen", nullptr));
        actionPanTool->setText(QCoreApplication::translate("MainWindow", "Pan", nullptr));
        actionEraseFull->setText(QCoreApplication::translate("MainWindow", "Full Erase", nullptr));
        actionErasePartial->setText(QCoreApplication::translate("MainWindow", "Partial Erase", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Units", nullptr));
        labelP1->setText(QCoreApplication::translate("MainWindow", "Radius", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Space", nullptr));
        labelP2->setText(QCoreApplication::translate("MainWindow", "Height", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Model", nullptr));
        toolSelect->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolPan->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolErase->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolPartialErase->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolLine->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolRect->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolCircleCenter->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolCircleCorner->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolPen->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        labelTool->setText(QCoreApplication::translate("MainWindow", "Tool: None", nullptr));
        drawStyleButton->setText(QCoreApplication::translate("MainWindow", "Style: Click", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "Tools", nullptr));
        menuDraw_Circle->setTitle(QCoreApplication::translate("MainWindow", "Draw Circle", nullptr));
        menuEraser->setTitle(QCoreApplication::translate("MainWindow", "Eraser", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
