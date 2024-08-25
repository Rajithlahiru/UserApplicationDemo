#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFile"
#include "QStandardPaths"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Set the initial index to 0
    ui->stackedWidget->setCurrentIndex(0);

    // save file
    QFile file(QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)+"\\user.txt");

    if(!file.open(QIODevice::ReadWrite)){
        QMessageBox::information(0,"error",file.errorString());
    }

    QTextStream in(&file);

    while(!in.atEnd()){
        QListWidgetItem *item = new QListWidgetItem(in.readLine(),ui->UserList);
        ui->UserList->addItem(item);
        item->setFlags(item->flags() | Qt::ItemIsEditable);
    }
    file.close();
}

MainWindow::~MainWindow()
{
    delete ui;

    QFile file(QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)+"\\user.txt");

    if(!file.open(QIODevice::ReadWrite)){
        QMessageBox::information(0,"error",file.errorString());
    }

    QTextStream out(&file);

    for(int i= 0; i < ui->UserList->count(); ++i){
        out<<ui->UserList->item(i)->text()<<"\n";
    }
    file.close();

}

void MainWindow::on_AddUserBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_ViewUserBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_BackBtn3_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_BackBtn2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_2_clicked()
{
    // Get the values from the QLineEdit widgets
    QString userName = ui->UserNameLine->text();
    QString email = ui->EmailLine->text();

    // Combine the values as needed (e.g., "userName - email")
    QString userInfo = userName + " - " + email;

    // Create a new QListWidgetItem with the combined string
    QListWidgetItem *item = new QListWidgetItem(userInfo);

    // Make the item editable
    item->setFlags(item->flags() | Qt::ItemIsEditable);

    // Add the item to the QListWidget
    ui->UserList->addItem(item);

    // Optionally, clear the input fields
    ui->UserNameLine->clear();
    ui->EmailLine->clear();

    // Optionally, switch to the page showing the list
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_RemoveBtn_clicked()
{
    QListWidgetItem *item = ui->UserList->takeItem(ui->UserList->currentRow());
    delete item;
}


void MainWindow::on_RemoveAllBtn_clicked()
{
    ui->UserList->clear();
}


void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

