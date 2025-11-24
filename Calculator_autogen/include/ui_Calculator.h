/********************************************************************************
** Form generated from reading UI file 'Calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btnPlus;
    QPushButton *btnClear;
    QPushButton *btnDivision;
    QPushButton *btnModulodivision;
    QPushButton *btn7;
    QPushButton *btn8;
    QPushButton *btnMultiply;
    QPushButton *btn9;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *btnMinus;
    QPushButton *btn6;
    QPushButton *btn0;
    QPushButton *btnEqual;
    QPushButton *btnPoint;
    QPushButton *btnBackscape;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName("Calculator");
        Calculator->setWindowModality(Qt::WindowModality::WindowModal);
        Calculator->resize(361, 462);
        Calculator->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  qproperty-alignment:  'AlignVCenter | AlignRight' ;\n"
"  border: 1px solid gray;\n"
"}\n"
"background-color: white;"));
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 271, 61));
        label->setMinimumSize(QSize(241, 61));
        btn1 = new QPushButton(centralwidget);
        btn1->setObjectName("btn1");
        btn1->setGeometry(QRect(0, 340, 90, 61));
        btn1->setMinimumSize(QSize(61, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("SimSun")});
        font.setPointSize(11);
        font.setWeight(QFont::ExtraLight);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        btn1->setFont(font);
        btn1->setMouseTracking(false);
        btn1->setStyleSheet(QString::fromUtf8(""));
        btn2 = new QPushButton(centralwidget);
        btn2->setObjectName("btn2");
        btn2->setGeometry(QRect(90, 340, 90, 61));
        btn2->setMinimumSize(QSize(61, 61));
        btn2->setFont(font);
        btn2->setMouseTracking(false);
        btn2->setStyleSheet(QString::fromUtf8(""));
        btn3 = new QPushButton(centralwidget);
        btn3->setObjectName("btn3");
        btn3->setGeometry(QRect(180, 340, 90, 61));
        btn3->setMinimumSize(QSize(61, 61));
        btn3->setFont(font);
        btn3->setMouseTracking(false);
        btn3->setStyleSheet(QString::fromUtf8(""));
        btnPlus = new QPushButton(centralwidget);
        btnPlus->setObjectName("btnPlus");
        btnPlus->setGeometry(QRect(270, 340, 90, 61));
        btnPlus->setMinimumSize(QSize(61, 61));
        btnPlus->setFont(font);
        btnPlus->setMouseTracking(false);
        btnClear = new QPushButton(centralwidget);
        btnClear->setObjectName("btnClear");
        btnClear->setGeometry(QRect(0, 160, 90, 61));
        btnClear->setMinimumSize(QSize(61, 61));
        btnClear->setFont(font);
        btnClear->setMouseTracking(false);
        btnDivision = new QPushButton(centralwidget);
        btnDivision->setObjectName("btnDivision");
        btnDivision->setGeometry(QRect(180, 160, 90, 61));
        btnDivision->setMinimumSize(QSize(61, 61));
        btnDivision->setFont(font);
        btnDivision->setMouseTracking(false);
        btnModulodivision = new QPushButton(centralwidget);
        btnModulodivision->setObjectName("btnModulodivision");
        btnModulodivision->setGeometry(QRect(90, 160, 90, 61));
        btnModulodivision->setMinimumSize(QSize(61, 61));
        btnModulodivision->setFont(font);
        btnModulodivision->setMouseTracking(false);
        btn7 = new QPushButton(centralwidget);
        btn7->setObjectName("btn7");
        btn7->setGeometry(QRect(0, 220, 90, 61));
        btn7->setMinimumSize(QSize(61, 61));
        btn7->setFont(font);
        btn7->setMouseTracking(false);
        btn7->setStyleSheet(QString::fromUtf8(""));
        btn8 = new QPushButton(centralwidget);
        btn8->setObjectName("btn8");
        btn8->setGeometry(QRect(90, 220, 90, 61));
        btn8->setMinimumSize(QSize(61, 61));
        btn8->setFont(font);
        btn8->setMouseTracking(false);
        btn8->setStyleSheet(QString::fromUtf8(""));
        btnMultiply = new QPushButton(centralwidget);
        btnMultiply->setObjectName("btnMultiply");
        btnMultiply->setGeometry(QRect(270, 220, 90, 61));
        btnMultiply->setMinimumSize(QSize(61, 61));
        btnMultiply->setFont(font);
        btnMultiply->setMouseTracking(false);
        btn9 = new QPushButton(centralwidget);
        btn9->setObjectName("btn9");
        btn9->setGeometry(QRect(180, 220, 90, 61));
        btn9->setMinimumSize(QSize(61, 61));
        btn9->setFont(font);
        btn9->setMouseTracking(false);
        btn9->setStyleSheet(QString::fromUtf8(""));
        btn4 = new QPushButton(centralwidget);
        btn4->setObjectName("btn4");
        btn4->setGeometry(QRect(0, 280, 90, 61));
        btn4->setMinimumSize(QSize(61, 61));
        btn4->setFont(font);
        btn4->setMouseTracking(false);
        btn4->setStyleSheet(QString::fromUtf8(""));
        btn5 = new QPushButton(centralwidget);
        btn5->setObjectName("btn5");
        btn5->setGeometry(QRect(90, 280, 90, 61));
        btn5->setMinimumSize(QSize(61, 61));
        btn5->setFont(font);
        btn5->setMouseTracking(false);
        btn5->setStyleSheet(QString::fromUtf8(""));
        btnMinus = new QPushButton(centralwidget);
        btnMinus->setObjectName("btnMinus");
        btnMinus->setGeometry(QRect(270, 280, 90, 61));
        btnMinus->setMinimumSize(QSize(61, 61));
        btnMinus->setFont(font);
        btnMinus->setMouseTracking(false);
        btnMinus->setIconSize(QSize(40, 40));
        btn6 = new QPushButton(centralwidget);
        btn6->setObjectName("btn6");
        btn6->setGeometry(QRect(180, 280, 90, 61));
        btn6->setMinimumSize(QSize(61, 61));
        btn6->setFont(font);
        btn6->setMouseTracking(false);
        btn6->setStyleSheet(QString::fromUtf8(""));
        btn0 = new QPushButton(centralwidget);
        btn0->setObjectName("btn0");
        btn0->setGeometry(QRect(0, 400, 181, 61));
        btn0->setMinimumSize(QSize(61, 61));
        btn0->setFont(font);
        btn0->setMouseTracking(false);
        btnEqual = new QPushButton(centralwidget);
        btnEqual->setObjectName("btnEqual");
        btnEqual->setGeometry(QRect(270, 400, 90, 61));
        btnEqual->setMinimumSize(QSize(61, 61));
        btnEqual->setFont(font);
        btnEqual->setMouseTracking(false);
        btnPoint = new QPushButton(centralwidget);
        btnPoint->setObjectName("btnPoint");
        btnPoint->setGeometry(QRect(180, 400, 90, 61));
        btnPoint->setMinimumSize(QSize(61, 61));
        btnPoint->setFont(font);
        btnPoint->setMouseTracking(false);
        btnBackscape = new QPushButton(centralwidget);
        btnBackscape->setObjectName("btnBackscape");
        btnBackscape->setGeometry(QRect(270, 160, 90, 61));
        btnBackscape->setFont(font);
        btnBackscape->setMouseTracking(false);
        Calculator->setCentralWidget(centralwidget);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        label->setText(QString());
        btn1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        btn2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        btn3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        btnPlus->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        btnClear->setText(QCoreApplication::translate("Calculator", "C", nullptr));
        btnDivision->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        btnModulodivision->setText(QCoreApplication::translate("Calculator", "%", nullptr));
        btn7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        btn8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        btnMultiply->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        btn9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        btn4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        btn5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        btnMinus->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        btn6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        btn0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        btnEqual->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        btnPoint->setText(QCoreApplication::translate("Calculator", ".", nullptr));
        btnBackscape->setText(QCoreApplication::translate("Calculator", "BackSpace", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
