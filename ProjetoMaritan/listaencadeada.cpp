#include "listaencadeada.h"
#include "ui_listaencadeada.h"

ListaEncadeada::ListaEncadeada(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ListaEncadeada)
{
    ui->setupUi(this);
}

ListaEncadeada::~ListaEncadeada()
{
    delete ui;
}
