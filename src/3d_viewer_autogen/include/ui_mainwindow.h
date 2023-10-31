/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include <View/myopenglwidgegt.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    MyOpenGLWidgegt *openGLWidget;
    QLabel *label_4;
    QLabel *label_5;
    QLCDNumber *lcdNumber_vertices;
    QLCDNumber *lcdNumber_edges;
    QWidget *tabWidget;
    QTabWidget *tabWidget_2;
    QWidget *tab;
    QLabel *label_textFile;
    QPushButton *pushButton_chooseFile;
    QLabel *label_scale;
    QSlider *horizontalSlider_scale;
    QLabel *label_rotate;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_y_value;
    QSlider *horizontalSlider_y_value;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_x_value;
    QSlider *horizontalSlider_x_value;
    QHBoxLayout *horizontalLayout;
    QLabel *label_z_value;
    QSlider *horizontalSlider_z_value;
    QLabel *label_rotate_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_y_translate;
    QSlider *horizontalSlider_y_translate;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_x_translate;
    QSlider *horizontalSlider_x_translate;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_y_translate_3;
    QSlider *horizontalSlider_z_translate;
    QWidget *tab_2;
    QSlider *slider_edgeThickness;
    QTextEdit *textEdit;
    QCheckBox *checkBox_dashedLine;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QRadioButton *radioButtonParal;
    QRadioButton *radioButtonCentral;
    QPushButton *background_color;
    QPushButton *peaks_color;
    QPushButton *color;
    QPushButton *without;
    QPushButton *circle;
    QPushButton *square;
    QSlider *size_point;
    QPushButton *gif;
    QPushButton *screen;
    QRadioButton *radioButtonNON;
    QStatusBar *statusbar;

    void setupUi(s21::Controller * controller_, QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1440, 798);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:#a2a2a2"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        openGLWidget = new MyOpenGLWidgegt(controller_,centralwidget);
        openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));
        openGLWidget->setGeometry(QRect(10, 20, 851, 551));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 600, 351, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Sukhumvit Set")});
        font.setPointSize(24);
        font.setBold(true);
        font.setItalic(false);
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("border: 1px solid white;\n"
"	border-radius: 3px;\n"
"	background: #a2a2a2;\n"
"	min-width: 6em;\n"
"	color: #ffffff;"));
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(510, 600, 351, 51));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("border: 1px solid white;\n"
"	border-radius: 3px;\n"
"	background: #a2a2a2;\n"
"	min-width: 6em;\n"
"	color: #ffffff;"));
        label_5->setAlignment(Qt::AlignCenter);
        lcdNumber_vertices = new QLCDNumber(centralwidget);
        lcdNumber_vertices->setObjectName(QString::fromUtf8("lcdNumber_vertices"));
        lcdNumber_vertices->setGeometry(QRect(40, 670, 351, 101));
        lcdNumber_edges = new QLCDNumber(centralwidget);
        lcdNumber_edges->setObjectName(QString::fromUtf8("lcdNumber_edges"));
        lcdNumber_edges->setGeometry(QRect(510, 670, 351, 101));
        tabWidget = new QWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(1200, 10, 201, 80));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget::pane {\n"
"    border: 1px solid rgb(242, 165, 60);\n"
"    background: rgb(58, 57, 57);\n"
"}\n"
"\n"
"QTabWidget::tab-bar:top {\n"
"    top: 1px;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"	border: 1px solid rgb(242, 165, 60);\n"
"	color: white;\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:selected {\n"
"    background:  rgb(242, 165, 60);\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"    background: rgb(58, 57, 57);\n"
"}\n"
"\n"
"QTabBar::tab:top:!selected {\n"
"    margin-top: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:bottom:!selected {\n"
"    margin-bottom: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:top, QTabBar::tab:bottom {\n"
"    min-width: 8ex;\n"
"    margin-right: -1px;\n"
"    padding: 5px 10px 5px 10px;\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:top:last, QTabBar::tab:bottom:last,\n"
"QTabBar::tab:top:only-one, QTabBar::tab:bottom:only-one {\n"
"    margin-right: 0;\n"
"}\n"
"\n"
"QTabBar::tab:left:!selected {\n"
"    margin-right: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:right:!selected {\n"
"    margin-left: 3px;\n"
"}\n"
"\n"
"QTabBar::ta"
                        "b:left, QTabBar::tab:right {\n"
"    min-height: 8ex;\n"
"    margin-bottom: -1px;\n"
"    padding: 10px 5px 10px 5px;\n"
"}\n"
"\n"
"QTabBar::tab:left:selected {\n"
"    border-left-color: none;\n"
"}\n"
"\n"
"QTabBar::tab:right:selected {\n"
"    border-right-color: none;\n"
"}\n"
"\n"
"QTabBar::tab:left:last, QTabBar::tab:right:last,\n"
"QTabBar::tab:left:only-one, QTabBar::tab:right:only-one {\n"
"    margin-bottom: 0;\n"
"}\n"
""));
        tabWidget_2 = new QTabWidget(centralwidget);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(910, 0, 521, 981));
        tabWidget_2->setStyleSheet(QString::fromUtf8("QTabWidget::pane {\n"
"    \n"
"    background: rgb(58, 57, 57);\n"
"}\n"
"\n"
"QTabWidget::tab-bar:top {\n"
"    top: 1px;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"	border: 1px solid rgb(250, 165, 60);\n"
"	color: white;\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:selected {\n"
"    background:  rgb(250, 58, 60);\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"    background: rgb(250, 57, 57);\n"
"}\n"
"\n"
"QTabBar::tab:top:!selected {\n"
"    margin-top: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:bottom:!selected {\n"
"    margin-bottom: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:top, QTabBar::tab:bottom {\n"
"    min-width: 8ex;\n"
"    margin-right: -1px;\n"
"    padding: 5px 10px 5px 10px;\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:top:last, QTabBar::tab:bottom:last,\n"
"QTabBar::tab:top:only-one, QTabBar::tab:bottom:only-one {\n"
"    margin-right: 0;\n"
"}\n"
"\n"
"QTabBar::tab:left:!selected {\n"
"    margin-right: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:right:!selected {\n"
"    margin-left: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:left, QTabBar::tab:right {\n"
"   "
                        " min-height: 8ex;\n"
"    margin-bottom: -1px;\n"
"    padding: 10px 5px 10px 5px;\n"
"}\n"
"\n"
"QTabBar::tab:left:selected {\n"
"    border-left-color: none;\n"
"}\n"
"\n"
"QTabBar::tab:right:selected {\n"
"    border-right-color: none;\n"
"}\n"
"\n"
"QTabBar::tab:left:last, QTabBar::tab:right:last,\n"
"QTabBar::tab:left:only-one, QTabBar::tab:right:only-one {\n"
"    margin-bottom: 0;\n"
"}\n"
"\n"
""));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label_textFile = new QLabel(tab);
        label_textFile->setObjectName(QString::fromUtf8("label_textFile"));
        label_textFile->setGeometry(QRect(0, 0, 251, 81));
        QFont font1;
        font1.setPointSize(24);
        label_textFile->setFont(font1);
        label_textFile->setStyleSheet(QString::fromUtf8("border: 1px solid white;\n"
"	border-radius: 3px;\n"
"	background: #a2a2a2;\n"
"	min-width: 6em;\n"
"	color: #ffffff;\n"
""));
        pushButton_chooseFile = new QPushButton(tab);
        pushButton_chooseFile->setObjectName(QString::fromUtf8("pushButton_chooseFile"));
        pushButton_chooseFile->setGeometry(QRect(270, 10, 241, 81));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Kohinoor Gujarati")});
        font2.setPointSize(24);
        font2.setBold(true);
        font2.setItalic(false);
        pushButton_chooseFile->setFont(font2);
        pushButton_chooseFile->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #797979, stop:0.48 #696969, stop:0.52 #5e5e5e, stop:1 #4f4f4f);\n"
"    border-radius: 3px;\n"
"    border: 1px solid #333333;\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #555555, stop:0.48 #4e4e4e, stop:0.52 #444444, stop:1 #3d3d3d);\n"
"    border: 1px solid #333333;\n"
"}\n"
""));
        label_scale = new QLabel(tab);
        label_scale->setObjectName(QString::fromUtf8("label_scale"));
        label_scale->setGeometry(QRect(0, 100, 511, 31));
        label_scale->setFont(font1);
        label_scale->setStyleSheet(QString::fromUtf8("border: 1px solid white;\n"
"	border-radius: 3px;\n"
"	background: #a2a2a2;\n"
"	min-width: 6em;\n"
"	color: #ffffff;"));
        label_scale->setAlignment(Qt::AlignCenter);
        horizontalSlider_scale = new QSlider(tab);
        horizontalSlider_scale->setObjectName(QString::fromUtf8("horizontalSlider_scale"));
        horizontalSlider_scale->setGeometry(QRect(0, 140, 501, 25));
        horizontalSlider_scale->setMinimum(10);
        horizontalSlider_scale->setMaximum(100);
        horizontalSlider_scale->setPageStep(1);
        horizontalSlider_scale->setValue(50);
        horizontalSlider_scale->setOrientation(Qt::Horizontal);
        label_rotate = new QLabel(tab);
        label_rotate->setObjectName(QString::fromUtf8("label_rotate"));
        label_rotate->setGeometry(QRect(0, 170, 511, 31));
        label_rotate->setFont(font1);
        label_rotate->setStyleSheet(QString::fromUtf8("border: 1px solid white;\n"
"	border-radius: 3px;\n"
"	background: #a2a2a2;\n"
"	min-width: 6em;\n"
"	color: #ffffff;"));
        label_rotate->setAlignment(Qt::AlignCenter);
        gridLayoutWidget = new QWidget(tab);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 210, 511, 231));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_y_value = new QLabel(gridLayoutWidget);
        label_y_value->setObjectName(QString::fromUtf8("label_y_value"));

        horizontalLayout_4->addWidget(label_y_value);

        horizontalSlider_y_value = new QSlider(gridLayoutWidget);
        horizontalSlider_y_value->setObjectName(QString::fromUtf8("horizontalSlider_y_value"));
        horizontalSlider_y_value->setMinimum(-100);
        horizontalSlider_y_value->setMaximum(100);
        horizontalSlider_y_value->setPageStep(1);
        horizontalSlider_y_value->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalSlider_y_value);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_x_value = new QLabel(gridLayoutWidget);
        label_x_value->setObjectName(QString::fromUtf8("label_x_value"));

        horizontalLayout_5->addWidget(label_x_value);

        horizontalSlider_x_value = new QSlider(gridLayoutWidget);
        horizontalSlider_x_value->setObjectName(QString::fromUtf8("horizontalSlider_x_value"));
        horizontalSlider_x_value->setMinimum(-100);
        horizontalSlider_x_value->setMaximum(100);
        horizontalSlider_x_value->setPageStep(1);
        horizontalSlider_x_value->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(horizontalSlider_x_value);


        gridLayout->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_z_value = new QLabel(gridLayoutWidget);
        label_z_value->setObjectName(QString::fromUtf8("label_z_value"));

        horizontalLayout->addWidget(label_z_value);

        horizontalSlider_z_value = new QSlider(gridLayoutWidget);
        horizontalSlider_z_value->setObjectName(QString::fromUtf8("horizontalSlider_z_value"));
        horizontalSlider_z_value->setMinimum(-100);
        horizontalSlider_z_value->setMaximum(100);
        horizontalSlider_z_value->setPageStep(1);
        horizontalSlider_z_value->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider_z_value);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        label_rotate_2 = new QLabel(tab);
        label_rotate_2->setObjectName(QString::fromUtf8("label_rotate_2"));
        label_rotate_2->setGeometry(QRect(0, 450, 511, 31));
        label_rotate_2->setFont(font1);
        label_rotate_2->setStyleSheet(QString::fromUtf8("border: 1px solid white;\n"
"	border-radius: 3px;\n"
"	background: #a2a2a2;\n"
"	min-width: 6em;\n"
"	color: #ffffff;"));
        label_rotate_2->setAlignment(Qt::AlignCenter);
        gridLayoutWidget_2 = new QWidget(tab);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 480, 511, 221));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_y_translate = new QLabel(gridLayoutWidget_2);
        label_y_translate->setObjectName(QString::fromUtf8("label_y_translate"));

        horizontalLayout_6->addWidget(label_y_translate);

        horizontalSlider_y_translate = new QSlider(gridLayoutWidget_2);
        horizontalSlider_y_translate->setObjectName(QString::fromUtf8("horizontalSlider_y_translate"));
        horizontalSlider_y_translate->setMinimum(-100);
        horizontalSlider_y_translate->setMaximum(100);
        horizontalSlider_y_translate->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(horizontalSlider_y_translate);


        gridLayout_2->addLayout(horizontalLayout_6, 1, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_x_translate = new QLabel(gridLayoutWidget_2);
        label_x_translate->setObjectName(QString::fromUtf8("label_x_translate"));

        horizontalLayout_7->addWidget(label_x_translate);

        horizontalSlider_x_translate = new QSlider(gridLayoutWidget_2);
        horizontalSlider_x_translate->setObjectName(QString::fromUtf8("horizontalSlider_x_translate"));
        horizontalSlider_x_translate->setMinimum(-100);
        horizontalSlider_x_translate->setMaximum(100);
        horizontalSlider_x_translate->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(horizontalSlider_x_translate);


        gridLayout_2->addLayout(horizontalLayout_7, 0, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_y_translate_3 = new QLabel(gridLayoutWidget_2);
        label_y_translate_3->setObjectName(QString::fromUtf8("label_y_translate_3"));

        horizontalLayout_9->addWidget(label_y_translate_3);

        horizontalSlider_z_translate = new QSlider(gridLayoutWidget_2);
        horizontalSlider_z_translate->setObjectName(QString::fromUtf8("horizontalSlider_z_translate"));
        horizontalSlider_z_translate->setMinimum(-100);
        horizontalSlider_z_translate->setMaximum(100);
        horizontalSlider_z_translate->setOrientation(Qt::Horizontal);

        horizontalLayout_9->addWidget(horizontalSlider_z_translate);


        gridLayout_2->addLayout(horizontalLayout_9, 2, 0, 1, 1);

        tabWidget_2->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        slider_edgeThickness = new QSlider(tab_2);
        slider_edgeThickness->setObjectName(QString::fromUtf8("slider_edgeThickness"));
        slider_edgeThickness->setGeometry(QRect(0, 110, 521, 16));
        slider_edgeThickness->setOrientation(Qt::Horizontal);
        textEdit = new QTextEdit(tab_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(170, 20, 161, 51));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("AkayaKanadaka")});
        font3.setItalic(true);
        textEdit->setFont(font3);
        checkBox_dashedLine = new QCheckBox(tab_2);
        checkBox_dashedLine->setObjectName(QString::fromUtf8("checkBox_dashedLine"));
        checkBox_dashedLine->setGeometry(QRect(30, 200, 261, 20));
        textEdit_2 = new QTextEdit(tab_2);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(30, 150, 104, 41));
        textEdit_3 = new QTextEdit(tab_2);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setGeometry(QRect(33, 230, 151, 41));
        radioButtonParal = new QRadioButton(tab_2);
        radioButtonParal->setObjectName(QString::fromUtf8("radioButtonParal"));
        radioButtonParal->setGeometry(QRect(30, 280, 99, 20));
        radioButtonCentral = new QRadioButton(tab_2);
        radioButtonCentral->setObjectName(QString::fromUtf8("radioButtonCentral"));
        radioButtonCentral->setGeometry(QRect(190, 280, 99, 20));
        background_color = new QPushButton(tab_2);
        background_color->setObjectName(QString::fromUtf8("background_color"));
        background_color->setGeometry(QRect(20, 380, 251, 21));
        background_color->setFont(font2);
        background_color->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #797979, stop:0.48 #696969, stop:0.52 #5e5e5e, stop:1 #4f4f4f);\n"
"    border-radius: 3px;\n"
"    border: 1px solid #333333;\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #555555, stop:0.48 #4e4e4e, stop:0.52 #444444, stop:1 #3d3d3d);\n"
"    border: 1px solid #333333;\n"
"}\n"
""));
        peaks_color = new QPushButton(tab_2);
        peaks_color->setObjectName(QString::fromUtf8("peaks_color"));
        peaks_color->setGeometry(QRect(20, 420, 251, 21));
        peaks_color->setFont(font2);
        peaks_color->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #797979, stop:0.48 #696969, stop:0.52 #5e5e5e, stop:1 #4f4f4f);\n"
"    border-radius: 3px;\n"
"    border: 1px solid #333333;\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #555555, stop:0.48 #4e4e4e, stop:0.52 #444444, stop:1 #3d3d3d);\n"
"    border: 1px solid #333333;\n"
"}\n"
""));
        color = new QPushButton(tab_2);
        color->setObjectName(QString::fromUtf8("color"));
        color->setGeometry(QRect(10, 460, 251, 21));
        color->setFont(font2);
        color->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #797979, stop:0.48 #696969, stop:0.52 #5e5e5e, stop:1 #4f4f4f);\n"
"    border-radius: 3px;\n"
"    border: 1px solid #333333;\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #555555, stop:0.48 #4e4e4e, stop:0.52 #444444, stop:1 #3d3d3d);\n"
"    border: 1px solid #333333;\n"
"}\n"
""));
        without = new QPushButton(tab_2);
        without->setObjectName(QString::fromUtf8("without"));
        without->setGeometry(QRect(30, 540, 251, 21));
        without->setFont(font2);
        without->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #797979, stop:0.48 #696969, stop:0.52 #5e5e5e, stop:1 #4f4f4f);\n"
"    border-radius: 3px;\n"
"    border: 1px solid #333333;\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #555555, stop:0.48 #4e4e4e, stop:0.52 #444444, stop:1 #3d3d3d);\n"
"    border: 1px solid #333333;\n"
"}\n"
""));
        circle = new QPushButton(tab_2);
        circle->setObjectName(QString::fromUtf8("circle"));
        circle->setGeometry(QRect(30, 570, 251, 21));
        circle->setFont(font2);
        circle->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #797979, stop:0.48 #696969, stop:0.52 #5e5e5e, stop:1 #4f4f4f);\n"
"    border-radius: 3px;\n"
"    border: 1px solid #333333;\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #555555, stop:0.48 #4e4e4e, stop:0.52 #444444, stop:1 #3d3d3d);\n"
"    border: 1px solid #333333;\n"
"}\n"
""));
        square = new QPushButton(tab_2);
        square->setObjectName(QString::fromUtf8("square"));
        square->setGeometry(QRect(30, 600, 251, 21));
        square->setFont(font2);
        square->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #797979, stop:0.48 #696969, stop:0.52 #5e5e5e, stop:1 #4f4f4f);\n"
"    border-radius: 3px;\n"
"    border: 1px solid #333333;\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #555555, stop:0.48 #4e4e4e, stop:0.52 #444444, stop:1 #3d3d3d);\n"
"    border: 1px solid #333333;\n"
"}\n"
""));
        size_point = new QSlider(tab_2);
        size_point->setObjectName(QString::fromUtf8("size_point"));
        size_point->setGeometry(QRect(20, 500, 521, 16));
        size_point->setOrientation(Qt::Horizontal);
        gif = new QPushButton(tab_2);
        gif->setObjectName(QString::fromUtf8("gif"));
        gif->setGeometry(QRect(30, 650, 251, 21));
        gif->setFont(font2);
        gif->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #797979, stop:0.48 #696969, stop:0.52 #5e5e5e, stop:1 #4f4f4f);\n"
"    border-radius: 3px;\n"
"    border: 1px solid #333333;\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #555555, stop:0.48 #4e4e4e, stop:0.52 #444444, stop:1 #3d3d3d);\n"
"    border: 1px solid #333333;\n"
"}\n"
""));
        screen = new QPushButton(tab_2);
        screen->setObjectName(QString::fromUtf8("screen"));
        screen->setGeometry(QRect(30, 690, 251, 21));
        screen->setFont(font2);
        screen->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #797979, stop:0.48 #696969, stop:0.52 #5e5e5e, stop:1 #4f4f4f);\n"
"    border-radius: 3px;\n"
"    border: 1px solid #333333;\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #555555, stop:0.48 #4e4e4e, stop:0.52 #444444, stop:1 #3d3d3d);\n"
"    border: 1px solid #333333;\n"
"}\n"
""));
        radioButtonNON = new QRadioButton(tab_2);
        radioButtonNON->setObjectName(QString::fromUtf8("radioButtonNON"));
        radioButtonNON->setGeometry(QRect(310, 280, 99, 20));
        tabWidget_2->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\222\320\225\320\240\320\250\320\230\320\235\320\253", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\240\320\225\320\221\320\240\320\220", nullptr));
        label_textFile->setText(QCoreApplication::translate("MainWindow", "File name", nullptr));
        pushButton_chooseFile->setText(QCoreApplication::translate("MainWindow", "SelectFile", nullptr));
        label_scale->setText(QCoreApplication::translate("MainWindow", "Scale", nullptr));
        label_rotate->setText(QCoreApplication::translate("MainWindow", "Rotate", nullptr));
        label_y_value->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_x_value->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_z_value->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        label_rotate_2->setText(QCoreApplication::translate("MainWindow", "Translate", nullptr));
        label_y_translate->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_x_translate->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_y_translate_3->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'AkayaKanadaka'; font-size:13pt; font-weight:400; font-style:italic;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:24pt; font-style:normal;\">LINE WIDTH</span></p></body></html>", nullptr));
        checkBox_dashedLine->setText(QString());
        textEdit_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">DASHED</span></p></body></html>", nullptr));
        textEdit_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">PROECTION</span></p></body></html>", nullptr));
        radioButtonParal->setText(QCoreApplication::translate("MainWindow", "Parallel", nullptr));
        radioButtonCentral->setText(QCoreApplication::translate("MainWindow", "Central", nullptr));
        background_color->setText(QCoreApplication::translate("MainWindow", "background_color", nullptr));
        peaks_color->setText(QCoreApplication::translate("MainWindow", "peaks_color", nullptr));
        color->setText(QCoreApplication::translate("MainWindow", "color", nullptr));
        without->setText(QCoreApplication::translate("MainWindow", "without", nullptr));
        circle->setText(QCoreApplication::translate("MainWindow", "circle", nullptr));
        square->setText(QCoreApplication::translate("MainWindow", "square", nullptr));
        gif->setText(QCoreApplication::translate("MainWindow", "gif", nullptr));
        screen->setText(QCoreApplication::translate("MainWindow", "screen", nullptr));
        radioButtonNON->setText(QCoreApplication::translate("MainWindow", "NON", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
