#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Начальное состояние
    bookID=0;
    bShelfID=0;
    shelfID=0;
    ui->groupBox_Book->setEnabled(false);
    ui->groupBox_Shelf->setEnabled(false);
    ui->pushButton_BShelf_Del->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_BShelf_Add_clicked()
{
    //Создать шкаф
    Book_shelf bs;
    //Добавить шкаф в список
    bookShelfs.push_back (bs);
    ui->listWidget_BShelfs->addItem(QString::number (bookShelfs.size()));
}

void MainWindow::on_listWidget_BShelfs_itemClicked(QListWidgetItem *item)
{
    //Получить ID шкафа
    bShelfID = item->text().toInt();
    //активировать элементы интерфейса
    ui->pushButton_BShelf_Del->setEnabled(true);
    ui->groupBox_Shelf->setEnabled(true);
    ui->pushButton_Shelf_Del->setEnabled(false);
    //Получить кол-во полок
    int shelfN = bookShelfs[bShelfID-1].getShelfNumber();
    //Очистить список полок
    ui->listWidget_SHelf->clear();
    ui->listWidget_Book->clear();
    //Наполнить список полок
    if(shelfN>0){
        for(int i=1;i<=shelfN;i++){
            ui->listWidget_SHelf->addItem(QString::number(i));
        }

}

}

void MainWindow::on_pushButton_Shelf_Add_clicked()
{
    //Создать полку
    shelf shelf;
    //Добавить полку в шкаф
    bookShelfs[bShelfID-1].addshelf();
    //Обновить список
    int shelfN = bookShelfs[bShelfID-1].getShelfNumber();
    ui->listWidget_SHelf->addItems(QString::number(shelfN));
}
