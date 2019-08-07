/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label_8;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_path;
    QPushButton *path_btn;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLabel *label_path;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *rate_label;
    QLabel *label_5;
    QLabel *time_label;
    QLabel *label_6;
    QLabel *width_label;
    QLabel *label_7;
    QLabel *height_label;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *label_layout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QLineEdit *lineEdit_start_x;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QLineEdit *lineEdit_start_y;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_12;
    QLineEdit *lineEdit_size_w;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_13;
    QLineEdit *lineEdit_size_h;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *ok_btn;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *cancel_btn;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(734, 636);
        Widget->setMinimumSize(QSize(734, 636));
        Widget->setMaximumSize(QSize(734, 636));
        label_8 = new QLabel(Widget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(50, 200, 54, 18));
        widget = new QWidget(Widget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 20, 710, 599));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit_path = new QLineEdit(widget);
        lineEdit_path->setObjectName(QStringLiteral("lineEdit_path"));

        horizontalLayout->addWidget(lineEdit_path);

        path_btn = new QPushButton(widget);
        path_btn->setObjectName(QStringLiteral("path_btn"));

        horizontalLayout->addWidget(path_btn);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        label_path = new QLabel(widget);
        label_path->setObjectName(QStringLiteral("label_path"));
        label_path->setMinimumSize(QSize(335, 26));
        label_path->setMaximumSize(QSize(335, 26));
        label_path->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(label_path);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(83, 26));
        label_4->setMaximumSize(QSize(83, 26));

        horizontalLayout_2->addWidget(label_4);

        rate_label = new QLabel(widget);
        rate_label->setObjectName(QStringLiteral("rate_label"));
        rate_label->setMinimumSize(QSize(83, 26));
        rate_label->setMaximumSize(QSize(83, 26));

        horizontalLayout_2->addWidget(rate_label);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(83, 26));
        label_5->setMaximumSize(QSize(83, 26));

        horizontalLayout_2->addWidget(label_5);

        time_label = new QLabel(widget);
        time_label->setObjectName(QStringLiteral("time_label"));
        time_label->setMinimumSize(QSize(83, 26));
        time_label->setMaximumSize(QSize(83, 26));

        horizontalLayout_2->addWidget(time_label);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(83, 26));
        label_6->setMaximumSize(QSize(83, 26));

        horizontalLayout_2->addWidget(label_6);

        width_label = new QLabel(widget);
        width_label->setObjectName(QStringLiteral("width_label"));
        width_label->setMinimumSize(QSize(83, 26));
        width_label->setMaximumSize(QSize(83, 26));

        horizontalLayout_2->addWidget(width_label);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(83, 26));
        label_7->setMaximumSize(QSize(83, 26));

        horizontalLayout_2->addWidget(label_7);

        height_label = new QLabel(widget);
        height_label->setObjectName(QStringLiteral("height_label"));
        height_label->setMinimumSize(QSize(83, 26));
        height_label->setMaximumSize(QSize(83, 26));

        horizontalLayout_2->addWidget(height_label);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label_layout = new QGridLayout();
        label_layout->setSpacing(6);
        label_layout->setObjectName(QStringLiteral("label_layout"));

        verticalLayout->addLayout(label_layout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_4->addWidget(label_10);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_8->addWidget(label_3);

        lineEdit_start_x = new QLineEdit(widget);
        lineEdit_start_x->setObjectName(QStringLiteral("lineEdit_start_x"));

        horizontalLayout_8->addWidget(lineEdit_start_x);


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_9->addWidget(label_9);

        lineEdit_start_y = new QLineEdit(widget);
        lineEdit_start_y->setObjectName(QStringLiteral("lineEdit_start_y"));

        horizontalLayout_9->addWidget(lineEdit_start_y);


        verticalLayout_3->addLayout(horizontalLayout_9);


        horizontalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_11 = new QLabel(widget);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_5->addWidget(label_11);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_12 = new QLabel(widget);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_11->addWidget(label_12);

        lineEdit_size_w = new QLineEdit(widget);
        lineEdit_size_w->setObjectName(QStringLiteral("lineEdit_size_w"));

        horizontalLayout_11->addWidget(lineEdit_size_w);


        verticalLayout_4->addLayout(horizontalLayout_11);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_13 = new QLabel(widget);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_10->addWidget(label_13);

        lineEdit_size_h = new QLineEdit(widget);
        lineEdit_size_h->setObjectName(QStringLiteral("lineEdit_size_h"));

        horizontalLayout_10->addWidget(lineEdit_size_h);


        verticalLayout_4->addLayout(horizontalLayout_10);


        horizontalLayout_5->addLayout(verticalLayout_4);


        verticalLayout_2->addLayout(horizontalLayout_5);


        horizontalLayout_7->addLayout(verticalLayout_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        ok_btn = new QPushButton(widget);
        ok_btn->setObjectName(QStringLiteral("ok_btn"));

        horizontalLayout_6->addWidget(ok_btn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        cancel_btn = new QPushButton(widget);
        cancel_btn->setObjectName(QStringLiteral("cancel_btn"));

        horizontalLayout_6->addWidget(cancel_btn);


        horizontalLayout_7->addLayout(horizontalLayout_6);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_7);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        label_8->setText(QString());
        label->setText(QApplication::translate("Widget", "\351\200\211\346\213\251\350\247\206\351\242\221:", Q_NULLPTR));
        path_btn->setText(QApplication::translate("Widget", "\346\265\217\350\247\210", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "\350\247\206\351\242\221\344\275\215\347\275\256:", Q_NULLPTR));
        label_path->setText(QString());
        label_4->setText(QApplication::translate("Widget", "\350\247\206\351\242\221\345\270\247\347\216\207:", Q_NULLPTR));
        rate_label->setText(QApplication::translate("Widget", "2", Q_NULLPTR));
        label_5->setText(QApplication::translate("Widget", "\346\227\266\351\227\264:", Q_NULLPTR));
        time_label->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        label_6->setText(QApplication::translate("Widget", "\345\271\205\345\256\275:", Q_NULLPTR));
        width_label->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        label_7->setText(QApplication::translate("Widget", "\345\271\205\351\253\230:", Q_NULLPTR));
        height_label->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        label_10->setText(QApplication::translate("Widget", "\350\265\267\347\202\271:", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "x:", Q_NULLPTR));
        lineEdit_start_x->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        label_9->setText(QApplication::translate("Widget", "y:", Q_NULLPTR));
        lineEdit_start_y->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        label_11->setText(QApplication::translate("Widget", "\345\244\247\345\260\217:", Q_NULLPTR));
        label_12->setText(QApplication::translate("Widget", "\345\256\275:", Q_NULLPTR));
        lineEdit_size_w->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        label_13->setText(QApplication::translate("Widget", "\351\253\230:", Q_NULLPTR));
        lineEdit_size_h->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        ok_btn->setText(QApplication::translate("Widget", "\347\241\256\345\256\232", Q_NULLPTR));
        cancel_btn->setText(QApplication::translate("Widget", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
