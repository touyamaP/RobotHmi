/********************************************************************************
** Form generated from reading UI file 'cfun3.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CFUN3_H
#define UI_CFUN3_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CFun3
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QFrame *line;
    QPushButton *btnAct1;
    QSpacerItem *horizontalSpacer;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QFrame *line_2;
    QPushButton *btnAct2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *CFun3)
    {
        if (CFun3->objectName().isEmpty())
            CFun3->setObjectName(QStringLiteral("CFun3"));
        CFun3->resize(550, 67);
        gridLayout = new QGridLayout(CFun3);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(CFun3);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QStringLiteral("QWidget#widget{background-color: rgb(255, 255, 255);border:1px solid gray }"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 3, -1, 3);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QString::fromUtf8("font: 75 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(0, 85, 255);"));

        horizontalLayout->addWidget(label);

        line = new QFrame(widget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        btnAct1 = new QPushButton(widget);
        btnAct1->setObjectName(QStringLiteral("btnAct1"));
        btnAct1->setFlat(true);

        horizontalLayout->addWidget(btnAct1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        line_3 = new QFrame(widget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(0, 85, 255);"));

        horizontalLayout_2->addWidget(label_2);

        line_2 = new QFrame(widget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_2);

        btnAct2 = new QPushButton(widget);
        btnAct2->setObjectName(QStringLiteral("btnAct2"));
        btnAct2->setFlat(true);

        horizontalLayout_2->addWidget(btnAct2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(CFun3);

        QMetaObject::connectSlotsByName(CFun3);
    } // setupUi

    void retranslateUi(QWidget *CFun3)
    {
        CFun3->setWindowTitle(QApplication::translate("CFun3", "CFun3", 0));
        label->setText(QApplication::translate("CFun3", "\345\267\241\350\247\206\347\233\221\346\216\247   ", 0));
        btnAct1->setText(QApplication::translate("CFun3", "\345\267\241\350\247\206\347\233\221\346\216\247", 0));
        label_2->setText(QApplication::translate("CFun3", "\346\234\272\345\231\250\344\272\272\351\201\245\346\216\247", 0));
        btnAct2->setText(QApplication::translate("CFun3", "\346\234\272\345\231\250\344\272\272\351\201\245\346\216\247", 0));
    } // retranslateUi

};

namespace Ui {
    class CFun3: public Ui_CFun3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CFUN3_H
