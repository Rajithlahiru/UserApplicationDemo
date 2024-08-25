/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QPushButton *AddUserBtn;
    QPushButton *ViewUserBtn;
    QWidget *page_3;
    QLabel *Title3;
    QListWidget *UserList;
    QPushButton *RemoveBtn;
    QPushButton *RemoveAllBtn;
    QPushButton *BackBtn3;
    QPushButton *pushButton;
    QWidget *page_2;
    QLabel *Title2;
    QLabel *UserNameLabel;
    QLineEdit *UserNameLine;
    QLabel *EmailLabel;
    QLineEdit *EmailLine;
    QPushButton *BackBtn2;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(806, 606);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 811, 581));
        page = new QWidget();
        page->setObjectName("page");
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 30, 331, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("Stencil")});
        font.setPointSize(26);
        label->setFont(font);
        AddUserBtn = new QPushButton(page);
        AddUserBtn->setObjectName("AddUserBtn");
        AddUserBtn->setGeometry(QRect(300, 190, 181, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Stencil")});
        font1.setPointSize(16);
        AddUserBtn->setFont(font1);
        ViewUserBtn = new QPushButton(page);
        ViewUserBtn->setObjectName("ViewUserBtn");
        ViewUserBtn->setGeometry(QRect(300, 330, 181, 61));
        ViewUserBtn->setFont(font1);
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        Title3 = new QLabel(page_3);
        Title3->setObjectName("Title3");
        Title3->setGeometry(QRect(230, 30, 331, 71));
        Title3->setFont(font);
        UserList = new QListWidget(page_3);
        UserList->setObjectName("UserList");
        UserList->setGeometry(QRect(90, 100, 541, 381));
        RemoveBtn = new QPushButton(page_3);
        RemoveBtn->setObjectName("RemoveBtn");
        RemoveBtn->setGeometry(QRect(660, 100, 91, 31));
        RemoveAllBtn = new QPushButton(page_3);
        RemoveAllBtn->setObjectName("RemoveAllBtn");
        RemoveAllBtn->setGeometry(QRect(660, 150, 91, 31));
        BackBtn3 = new QPushButton(page_3);
        BackBtn3->setObjectName("BackBtn3");
        BackBtn3->setGeometry(QRect(90, 500, 131, 41));
        pushButton = new QPushButton(page_3);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(509, 500, 121, 41));
        stackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        Title2 = new QLabel(page_2);
        Title2->setObjectName("Title2");
        Title2->setGeometry(QRect(230, 30, 331, 71));
        Title2->setFont(font);
        UserNameLabel = new QLabel(page_2);
        UserNameLabel->setObjectName("UserNameLabel");
        UserNameLabel->setGeometry(QRect(140, 130, 151, 31));
        QFont font2;
        font2.setPointSize(16);
        UserNameLabel->setFont(font2);
        UserNameLine = new QLineEdit(page_2);
        UserNameLine->setObjectName("UserNameLine");
        UserNameLine->setGeometry(QRect(140, 180, 491, 31));
        EmailLabel = new QLabel(page_2);
        EmailLabel->setObjectName("EmailLabel");
        EmailLabel->setGeometry(QRect(140, 230, 121, 31));
        EmailLabel->setFont(font2);
        EmailLine = new QLineEdit(page_2);
        EmailLine->setObjectName("EmailLine");
        EmailLine->setGeometry(QRect(140, 270, 491, 31));
        BackBtn2 = new QPushButton(page_2);
        BackBtn2->setObjectName("BackBtn2");
        BackBtn2->setGeometry(QRect(140, 360, 141, 41));
        pushButton_2 = new QPushButton(page_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(490, 360, 141, 41));
        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 806, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "User Application", nullptr));
        AddUserBtn->setText(QCoreApplication::translate("MainWindow", "Add User", nullptr));
        ViewUserBtn->setText(QCoreApplication::translate("MainWindow", "View User", nullptr));
        Title3->setText(QCoreApplication::translate("MainWindow", "User Application", nullptr));
        RemoveBtn->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
        RemoveAllBtn->setText(QCoreApplication::translate("MainWindow", "Remove All", nullptr));
        BackBtn3->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Add User", nullptr));
        Title2->setText(QCoreApplication::translate("MainWindow", "User Application", nullptr));
        UserNameLabel->setText(QCoreApplication::translate("MainWindow", "User Name", nullptr));
        EmailLabel->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        BackBtn2->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
