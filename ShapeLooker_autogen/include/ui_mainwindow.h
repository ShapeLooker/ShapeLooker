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
    QAction *actionEraserTool;
    QAction *actionNoTool;
    QAction *actionCornerCircleTool;
    QAction *actionCenterCircleTool;
    QAction *actionPenTool;
    QAction *actionPanTool;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboSpace;
    QLabel *label_2;
    QComboBox *comboUnits;
    QLabel *label_3;
    QComboBox *comboModel;
    QLabel *labelP1;
    QLineEdit *leP1;
    QLabel *labelP2;
    QLineEdit *leP2;
    QSpacerItem *verticalSpacer_2;
    QFrame *line;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolSelect;
    QToolButton *toolPan;
    QToolButton *toolErase;
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
        actionEraserTool = new QAction(MainWindow);
        actionEraserTool->setObjectName("actionEraserTool");
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
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboSpace = new QComboBox(centralwidget);
        comboSpace->setObjectName("comboSpace");
        comboSpace->setFont(font);

        gridLayout->addWidget(comboSpace, 0, 1, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        comboUnits = new QComboBox(centralwidget);
        comboUnits->setObjectName("comboUnits");
        comboUnits->setFont(font);

        gridLayout->addWidget(comboUnits, 1, 1, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        comboModel = new QComboBox(centralwidget);
        comboModel->setObjectName("comboModel");
        comboModel->setFont(font);

        gridLayout->addWidget(comboModel, 2, 1, 1, 1);

        labelP1 = new QLabel(centralwidget);
        labelP1->setObjectName("labelP1");
        labelP1->setFont(font);

        gridLayout->addWidget(labelP1, 3, 0, 1, 1);

        leP1 = new QLineEdit(centralwidget);
        leP1->setObjectName("leP1");
        leP1->setFont(font);

        gridLayout->addWidget(leP1, 3, 1, 1, 1);

        labelP2 = new QLabel(centralwidget);
        labelP2->setObjectName("labelP2");
        labelP2->setFont(font);

        gridLayout->addWidget(labelP2, 4, 0, 1, 1);

        leP2 = new QLineEdit(centralwidget);
        leP2->setObjectName("leP2");
        leP2->setFont(font);

        gridLayout->addWidget(leP2, 4, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 5, 0, 1, 2);


        horizontalLayout_4->addLayout(gridLayout);

        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout_4->addWidget(line);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
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

        toolLine = new QToolButton(centralwidget);
        toolLine->setObjectName("toolLine");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/assets/line.png"), QSize(), QIcon::Mode::Selected, QIcon::State::On);
        toolLine->setIcon(icon3);

        horizontalLayout->addWidget(toolLine);

        toolRect = new QToolButton(centralwidget);
        toolRect->setObjectName("toolRect");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/assets/rect.png"), QSize(), QIcon::Mode::Selected, QIcon::State::On);
        toolRect->setIcon(icon4);

        horizontalLayout->addWidget(toolRect);

        toolCircleCenter = new QToolButton(centralwidget);
        toolCircleCenter->setObjectName("toolCircleCenter");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/assets/centercircle.png"), QSize(), QIcon::Mode::Selected, QIcon::State::On);
        toolCircleCenter->setIcon(icon5);

        horizontalLayout->addWidget(toolCircleCenter);

        toolCircleCorner = new QToolButton(centralwidget);
        toolCircleCorner->setObjectName("toolCircleCorner");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/assets/ellipse.png"), QSize(), QIcon::Mode::Selected, QIcon::State::On);
        toolCircleCorner->setIcon(icon6);

        horizontalLayout->addWidget(toolCircleCorner);

        toolPen = new QToolButton(centralwidget);
        toolPen->setObjectName("toolPen");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/assets/pen.png"), QSize(), QIcon::Mode::Selected, QIcon::State::On);
        toolPen->setIcon(icon7);

        horizontalLayout->addWidget(toolPen);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);

        graphicsView = new ShapeLookerGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");

        verticalLayout->addWidget(graphicsView);

        labelTool = new QLabel(centralwidget);
        labelTool->setObjectName("labelTool");
        labelTool->setFont(font);
        labelTool->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(labelTool);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        drawStyleButton = new QPushButton(centralwidget);
        drawStyleButton->setObjectName("drawStyleButton");

        horizontalLayout_2->addWidget(drawStyleButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 98, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_4->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_4);

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
        menuTools->addAction(actionEraserTool);
        menuTools->addAction(actionPanTool);
        menuDraw_Circle->addAction(actionCornerCircleTool);
        menuDraw_Circle->addAction(actionCenterCircleTool);

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
        actionEraserTool->setText(QCoreApplication::translate("MainWindow", "Eraser", nullptr));
        actionNoTool->setText(QCoreApplication::translate("MainWindow", "No Tool", nullptr));
        actionCornerCircleTool->setText(QCoreApplication::translate("MainWindow", "Corner To Corner", nullptr));
        actionCenterCircleTool->setText(QCoreApplication::translate("MainWindow", "Center", nullptr));
        actionPenTool->setText(QCoreApplication::translate("MainWindow", "Pen", nullptr));
        actionPanTool->setText(QCoreApplication::translate("MainWindow", "Pan", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Space", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Units", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Model", nullptr));
        labelP1->setText(QCoreApplication::translate("MainWindow", "Radius", nullptr));
        labelP2->setText(QCoreApplication::translate("MainWindow", "Height", nullptr));
        toolSelect->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolPan->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolErase->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
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
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
