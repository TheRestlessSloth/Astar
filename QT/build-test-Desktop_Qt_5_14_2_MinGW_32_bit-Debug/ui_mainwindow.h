/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QOpenGLWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *exitbt;
    QSlider *speedsl;
    QProgressBar *progressBar;
    QPushButton *startbt;
    QOpenGLWidget *openGLWidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *HorSize;
    QSpinBox *VertSize;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *algobt;
    QPushButton *genmapbt;
    QCheckBox *checkBox;
    QMenuBar *menubar;
    QMenu *menuPathfinder;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(604, 461);
        MainWindow->setAutoFillBackground(true);
        MainWindow->setTabShape(QTabWidget::Triangular);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        exitbt = new QPushButton(centralwidget);
        exitbt->setObjectName(QString::fromUtf8("exitbt"));
        exitbt->setGeometry(QRect(550, 10, 41, 21));
        speedsl = new QSlider(centralwidget);
        speedsl->setObjectName(QString::fromUtf8("speedsl"));
        speedsl->setGeometry(QRect(430, 260, 160, 16));
        speedsl->setOrientation(Qt::Horizontal);
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(430, 290, 161, 23));
        progressBar->setValue(24);
        startbt = new QPushButton(centralwidget);
        startbt->setObjectName(QString::fromUtf8("startbt"));
        startbt->setGeometry(QRect(434, 322, 161, 41));
        openGLWidget = new QOpenGLWidget(centralwidget);
        openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));
        openGLWidget->setGeometry(QRect(9, 9, 411, 391));
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(430, 50, 160, 80));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        HorSize = new QSpinBox(formLayoutWidget);
        HorSize->setObjectName(QString::fromUtf8("HorSize"));
        HorSize->setMinimum(2);

        formLayout->setWidget(0, QFormLayout::FieldRole, HorSize);

        VertSize = new QSpinBox(formLayoutWidget);
        VertSize->setObjectName(QString::fromUtf8("VertSize"));
        VertSize->setMinimum(2);

        formLayout->setWidget(1, QFormLayout::FieldRole, VertSize);

        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(430, 140, 161, 71));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        algobt = new QComboBox(layoutWidget);
        algobt->addItem(QString());
        algobt->addItem(QString());
        algobt->addItem(QString());
        algobt->setObjectName(QString::fromUtf8("algobt"));
        algobt->setEditable(true);

        gridLayout->addWidget(algobt, 0, 1, 1, 1);

        genmapbt = new QPushButton(layoutWidget);
        genmapbt->setObjectName(QString::fromUtf8("genmapbt"));

        gridLayout->addWidget(genmapbt, 1, 0, 1, 2);

        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(430, 220, 161, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 604, 21));
        menuPathfinder = new QMenu(menubar);
        menuPathfinder->setObjectName(QString::fromUtf8("menuPathfinder"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setEnabled(true);
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuPathfinder->menuAction());

        retranslateUi(MainWindow);
        QObject::connect(exitbt, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "AlgoTEST", nullptr));
        exitbt->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        startbt->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Horizontal size", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Vertical size", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Algor", nullptr));
        algobt->setItemText(0, QCoreApplication::translate("MainWindow", "BFS", nullptr));
        algobt->setItemText(1, QCoreApplication::translate("MainWindow", "Dijkstra", nullptr));
        algobt->setItemText(2, QCoreApplication::translate("MainWindow", "A*", nullptr));

        algobt->setCurrentText(QCoreApplication::translate("MainWindow", "BFS", nullptr));
        genmapbt->setText(QCoreApplication::translate("MainWindow", "Generate map", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "With data", nullptr));
        menuPathfinder->setTitle(QCoreApplication::translate("MainWindow", "Pathfinder", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
