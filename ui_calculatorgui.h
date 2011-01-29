/********************************************************************************
** Form generated from reading UI file 'calculatorgui.ui'
**
** Created: Sat Jan 29 12:55:15 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATORGUI_H
#define UI_CALCULATORGUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculatorGUI
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *label;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *btn_clear;
    QPushButton *btn_mult;
    QPushButton *btn_div;
    QPushButton *btn_sub;
    QPushButton *btn_7;
    QPushButton *btn_9;
    QPushButton *btn_4;
    QPushButton *btn_6;
    QPushButton *btn_1;
    QPushButton *btn_0;
    QPushButton *btn_result;
    QPushButton *btn_8;
    QPushButton *btn_5;
    QPushButton *btn_2;
    QPushButton *btn_3;
    QPushButton *btn_dot;
    QPushButton *btn_add;

    void setupUi(QMainWindow *CalculatorGUI)
    {
        if (CalculatorGUI->objectName().isEmpty())
            CalculatorGUI->setObjectName(QString::fromUtf8("CalculatorGUI"));
        CalculatorGUI->resize(360, 298);
        CalculatorGUI->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	font: 20pt \"DejaVu Sans\";\n"
" 	font-weight: bolder;\n"
"}\n"
"\n"
"#centralWidget {\n"
"	background: qlineargradient(spread:pad, x1:0.0321101, y1:1, x2:0.028, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.816514 rgba(74, 74, 74, 255), stop:1 rgba(151, 151, 151, 255));\n"
"}\n"
"\n"
"QPushButton {\n"
"	background: qlineargradient(spread:pad, x1:0.0321101, y1:1, x2:0.0366972, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.174312 rgba(83, 9, 9, 255), stop:0.862385 rgba(74, 28, 28, 255), stop:1 rgba(151, 151, 151, 255));\n"
" 	color: white;\n"
"	border-radius: 10px;\n"
"	border: 2px solid white;\n"
"}\n"
"\n"
"QLineEdit {\n"
"	color: white;\n"
"	border-radius: 10px;\n"
"	border: 2px solid white;\n"
"	background: rgb(75, 75, 75)\n"
"}"));
        centralWidget = new QWidget(CalculatorGUI);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLineEdit(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        label->setMouseTracking(false);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label->setReadOnly(true);

        verticalLayout->addWidget(label);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btn_clear = new QPushButton(widget);
        btn_clear->setObjectName(QString::fromUtf8("btn_clear"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_clear->sizePolicy().hasHeightForWidth());
        btn_clear->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_clear, 0, 0, 1, 1);

        btn_mult = new QPushButton(widget);
        btn_mult->setObjectName(QString::fromUtf8("btn_mult"));
        sizePolicy.setHeightForWidth(btn_mult->sizePolicy().hasHeightForWidth());
        btn_mult->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_mult, 0, 1, 1, 1);

        btn_div = new QPushButton(widget);
        btn_div->setObjectName(QString::fromUtf8("btn_div"));
        sizePolicy.setHeightForWidth(btn_div->sizePolicy().hasHeightForWidth());
        btn_div->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_div, 0, 3, 1, 1);

        btn_sub = new QPushButton(widget);
        btn_sub->setObjectName(QString::fromUtf8("btn_sub"));
        sizePolicy.setHeightForWidth(btn_sub->sizePolicy().hasHeightForWidth());
        btn_sub->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_sub, 0, 6, 1, 1);

        btn_7 = new QPushButton(widget);
        btn_7->setObjectName(QString::fromUtf8("btn_7"));
        sizePolicy.setHeightForWidth(btn_7->sizePolicy().hasHeightForWidth());
        btn_7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_7, 1, 0, 1, 1);

        btn_9 = new QPushButton(widget);
        btn_9->setObjectName(QString::fromUtf8("btn_9"));
        sizePolicy.setHeightForWidth(btn_9->sizePolicy().hasHeightForWidth());
        btn_9->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_9, 1, 3, 1, 1);

        btn_4 = new QPushButton(widget);
        btn_4->setObjectName(QString::fromUtf8("btn_4"));
        sizePolicy.setHeightForWidth(btn_4->sizePolicy().hasHeightForWidth());
        btn_4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_4, 2, 0, 1, 1);

        btn_6 = new QPushButton(widget);
        btn_6->setObjectName(QString::fromUtf8("btn_6"));
        sizePolicy.setHeightForWidth(btn_6->sizePolicy().hasHeightForWidth());
        btn_6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_6, 2, 3, 1, 1);

        btn_1 = new QPushButton(widget);
        btn_1->setObjectName(QString::fromUtf8("btn_1"));
        sizePolicy.setHeightForWidth(btn_1->sizePolicy().hasHeightForWidth());
        btn_1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_1, 3, 0, 1, 1);

        btn_0 = new QPushButton(widget);
        btn_0->setObjectName(QString::fromUtf8("btn_0"));
        sizePolicy.setHeightForWidth(btn_0->sizePolicy().hasHeightForWidth());
        btn_0->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_0, 4, 0, 1, 2);

        btn_result = new QPushButton(widget);
        btn_result->setObjectName(QString::fromUtf8("btn_result"));
        sizePolicy.setHeightForWidth(btn_result->sizePolicy().hasHeightForWidth());
        btn_result->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_result, 3, 6, 2, 1);

        btn_8 = new QPushButton(widget);
        btn_8->setObjectName(QString::fromUtf8("btn_8"));
        sizePolicy.setHeightForWidth(btn_8->sizePolicy().hasHeightForWidth());
        btn_8->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_8, 1, 1, 1, 1);

        btn_5 = new QPushButton(widget);
        btn_5->setObjectName(QString::fromUtf8("btn_5"));
        sizePolicy.setHeightForWidth(btn_5->sizePolicy().hasHeightForWidth());
        btn_5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_5, 2, 1, 1, 1);

        btn_2 = new QPushButton(widget);
        btn_2->setObjectName(QString::fromUtf8("btn_2"));
        sizePolicy.setHeightForWidth(btn_2->sizePolicy().hasHeightForWidth());
        btn_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_2, 3, 1, 1, 1);

        btn_3 = new QPushButton(widget);
        btn_3->setObjectName(QString::fromUtf8("btn_3"));
        sizePolicy.setHeightForWidth(btn_3->sizePolicy().hasHeightForWidth());
        btn_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_3, 3, 3, 1, 1);

        btn_dot = new QPushButton(widget);
        btn_dot->setObjectName(QString::fromUtf8("btn_dot"));
        sizePolicy.setHeightForWidth(btn_dot->sizePolicy().hasHeightForWidth());
        btn_dot->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_dot, 4, 3, 1, 1);

        btn_add = new QPushButton(widget);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));
        sizePolicy.setHeightForWidth(btn_add->sizePolicy().hasHeightForWidth());
        btn_add->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_add, 1, 6, 2, 1);


        verticalLayout->addWidget(widget);

        CalculatorGUI->setCentralWidget(centralWidget);

        retranslateUi(CalculatorGUI);

        QMetaObject::connectSlotsByName(CalculatorGUI);
    } // setupUi

    void retranslateUi(QMainWindow *CalculatorGUI)
    {
        CalculatorGUI->setWindowTitle(QApplication::translate("CalculatorGUI", "CalculatorGUI", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CalculatorGUI", "0", 0, QApplication::UnicodeUTF8));
        btn_clear->setText(QApplication::translate("CalculatorGUI", "C", 0, QApplication::UnicodeUTF8));
        btn_mult->setText(QApplication::translate("CalculatorGUI", "*", 0, QApplication::UnicodeUTF8));
        btn_div->setText(QApplication::translate("CalculatorGUI", "/", 0, QApplication::UnicodeUTF8));
        btn_sub->setText(QApplication::translate("CalculatorGUI", "-", 0, QApplication::UnicodeUTF8));
        btn_7->setText(QApplication::translate("CalculatorGUI", "7", 0, QApplication::UnicodeUTF8));
        btn_9->setText(QApplication::translate("CalculatorGUI", "9", 0, QApplication::UnicodeUTF8));
        btn_4->setText(QApplication::translate("CalculatorGUI", "4", 0, QApplication::UnicodeUTF8));
        btn_6->setText(QApplication::translate("CalculatorGUI", "6", 0, QApplication::UnicodeUTF8));
        btn_1->setText(QApplication::translate("CalculatorGUI", "1", 0, QApplication::UnicodeUTF8));
        btn_0->setText(QApplication::translate("CalculatorGUI", "0", 0, QApplication::UnicodeUTF8));
        btn_result->setText(QApplication::translate("CalculatorGUI", "=", 0, QApplication::UnicodeUTF8));
        btn_8->setText(QApplication::translate("CalculatorGUI", "8", 0, QApplication::UnicodeUTF8));
        btn_5->setText(QApplication::translate("CalculatorGUI", "5", 0, QApplication::UnicodeUTF8));
        btn_2->setText(QApplication::translate("CalculatorGUI", "2", 0, QApplication::UnicodeUTF8));
        btn_3->setText(QApplication::translate("CalculatorGUI", "3", 0, QApplication::UnicodeUTF8));
        btn_dot->setText(QApplication::translate("CalculatorGUI", ",", 0, QApplication::UnicodeUTF8));
        btn_add->setText(QApplication::translate("CalculatorGUI", "+", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CalculatorGUI: public Ui_CalculatorGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATORGUI_H
