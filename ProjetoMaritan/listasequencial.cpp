#include "listasequencial.h"
#include "ui_listasequencial.h"
#include <QMessageBox>

ListaSequencial::ListaSequencial(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ListaSequencial)
{
    ui->setupUi(this);
}

ListaSequencial::~ListaSequencial()
{
    delete ui;
}

void ListaSequencial::on_btn_adicionar_clicked()
{
    add = ui->txt_add->text().toInt();
    ui->txt_add->clear();
    ui->txt_add->setFocus();
}


void ListaSequencial::on_btn_remove_clicked()
{
    rem = ui->txt_remove->text().toInt();
    ui->txt_remove->clear();
    ui->txt_remove->setFocus();
}

int ListaSequencial::getAdd(){
    return add;
}

int ListaSequencial::getRem(){
    return rem;
}
