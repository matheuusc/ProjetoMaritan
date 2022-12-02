#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "listasequencial.h"
#include "listaencadeada.h"
#include "pilha.h"
#include "fila.h"
#include "arvore.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    ListaSequencial lista;
    lista.exec();
}


void MainWindow::on_pushButton_3_clicked()
{
    ListaEncadeada lista;
    lista.exec();
}


void MainWindow::on_pushButton_4_clicked()
{
    Pilha pilha;
    pilha.exec();
}


void MainWindow::on_pushButton_clicked()
{
    Fila fila;
    fila.exec();
}


void MainWindow::on_pushButton_5_clicked()
{
    Arvore arvore;
    arvore.exec();
}

