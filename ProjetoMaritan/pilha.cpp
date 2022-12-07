#include "pilha.h"
#include "ui_pilha.h"
#include <QMessageBox>
#include <dos.h>
#include <QString>
#include <QThread>
#include <QTime>

void delay2()
{
    QTime dieTime= QTime::currentTime().addSecs(2);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

Pilha::Pilha(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Pilha)
{
    ui->setupUi(this);
}

Pilha::~Pilha()
{
    delete ui;
}

void Pilha::on_btn_add_clicked()
{
    int add = ui->txt_add->text().toInt();
    int tam = pilha.tamanho();

    ui->txt_add->clear();
    ui->txt_add->setFocus();

    if(pilha.tamanho() < 10){
        pilha.push(add);
    }

    switch(tam){
        case 0:
            ui->lbl_pos1->setText(QString::number(add));
            break;
        case 1:
            ui->lbl_pos2->setText(QString::number(add));
            break;
        case 2:
            ui->lbl_pos3->setText(QString::number(add));
            break;
        case 3:
            ui->lbl_pos4->setText(QString::number(add));
            break;
        case 4:
            ui->lbl_pos5->setText(QString::number(add));
            break;
        case 5:
            ui->lbl_pos6->setText(QString::number(add));
            break;
        case 6:
            ui->lbl_pos7->setText(QString::number(add));
            break;
        case 7:
            ui->lbl_pos8->setText(QString::number(add));
            break;
        case 8:
            ui->lbl_pos9->setText(QString::number(add));
            break;
        case 9:
            ui->lbl_pos10->setText(QString::number(add));
            break;
        case 10:
            ui->label_3->setText("Não é possível adicionar, pilha cheia!");
    }
}


void Pilha::on_btn_remove_clicked()
{
    int tam = pilha.tamanho();
    int pop = pilha.pop();

    if(pop != -1){
        ui->label_4->setText(QString::number(pop));
    }
    switch(tam){
        case 0:
            ui->label_3->setText("Não é possível remover de uma pilha vazia!");
            delay2();
            ui->label_3->clear();
            break;
        case 1:
            ui->lbl_pos1->clear();
            break;
        case 2:
            ui->lbl_pos2->clear();
            break;
        case 3:
            ui->lbl_pos3->clear();
            break;
        case 4:
            ui->lbl_pos4->clear();
            break;
        case 5:
            ui->lbl_pos5->clear();
            break;
        case 6:
            ui->lbl_pos6->clear();
            break;
        case 7:
            ui->lbl_pos7->clear();
            break;
        case 8:
            ui->lbl_pos8->clear();
            break;
        case 9:
            ui->lbl_pos9->clear();
            break;
        case 10:
            ui->lbl_pos10->clear();
            break;
    }
}


void Pilha::on_btn_topo_clicked()
{
    int tam = pilha.tamanho();
    switch(tam){
        case 0:
            ui->label_3->setText("A pilha está vazia!");
            delay2();
            ui->label_3->clear();
            break;
        case 1:
            ui->lbl_pos1->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
            delay2();
            ui->lbl_pos1->setStyleSheet("Qlabel { background-color : ; color : black; }");
            break;
        case 2:
            ui->lbl_pos2->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
            delay2();
            ui->lbl_pos2->setStyleSheet("Qlabel { background-color : ; color : black; }");
            break;
        case 3:
            ui->lbl_pos3->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
            delay2();
            ui->lbl_pos3->setStyleSheet("Qlabel { background-color : ; color : black; }");
            break;
        case 4:
            ui->lbl_pos4->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
            delay2();
            ui->lbl_pos4->setStyleSheet("Qlabel { background-color : ; color : black; }");
            break;
        case 5:
            ui->lbl_pos5->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
            delay2();
            ui->lbl_pos5->setStyleSheet("Qlabel { background-color : ; color : black; }");
            break;
        case 6:
            ui->lbl_pos6->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
            delay2();
            ui->lbl_pos6->setStyleSheet("Qlabel { background-color : ; color : black; }");
            break;
        case 7:
            ui->lbl_pos7->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
            delay2();
            ui->lbl_pos7->setStyleSheet("Qlabel { background-color : ; color : black; }");
            break;
        case 8:
            ui->lbl_pos8->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
            delay2();
            ui->lbl_pos8->setStyleSheet("Qlabel { background-color : ; color : black; }");
            break;
        case 9:
            ui->lbl_pos9->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
            delay2();
            ui->lbl_pos9->setStyleSheet("Qlabel { background-color : ; color : black; }");
            break;
        case 10:
            ui->lbl_pos10->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
            delay2();
            ui->lbl_pos10->setStyleSheet("Qlabel { background-color : ; color : black; }");
            break;
    }

}

