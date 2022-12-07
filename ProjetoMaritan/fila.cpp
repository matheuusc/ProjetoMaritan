#include "fila.h"
#include "ui_fila.h"
#include <QMessageBox>
#include <dos.h>
#include <QString>
#include <QThread>
#include <QTime>

void delay3()
{
    QTime dieTime= QTime::currentTime().addSecs(2);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

Fila::Fila(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Fila)
{
    ui->setupUi(this);
}

Fila::~Fila()
{
    delete ui;
}

void Fila::on_btn_add_clicked()
{
    int tam = fila.tamanho();
    int add = ui->txt_add->text().toInt();
    fila.insere(add);


    ui->txt_add->clear();
    ui->txt_add->setFocus();


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
            ui->label_12->setText("Não é possível adicionar, fila cheia!");
            delay3();
            ui->label_12->clear();
            break;
    }

}


void Fila::on_btn_remove_clicked()
{
    int tam = fila.tamanho();
    int rem = fila.remove();

    if(rem != -1){
        ui->label_14->setText(QString::number(rem));
    }
    switch(tam){
        case 0:
            ui->label_12->setText("Não é possível remover de uma fila vazia!");
            delay3();
            ui->label_12->clear();
            break;
        case 1:
            ui->lbl_pos1->clear();
            break;
        case 2:
            ui->lbl_pos1->clear();
            ui->lbl_pos1->setText(ui->lbl_pos2->text());
            ui->lbl_pos2->clear();
            break;
        case 3:
            ui->lbl_pos1->clear();
            ui->lbl_pos1->setText(ui->lbl_pos2->text());
            ui->lbl_pos2->setText(ui->lbl_pos3->text());
            ui->lbl_pos3->clear();
            break;
        case 4:
            ui->lbl_pos1->clear();
            ui->lbl_pos1->setText(ui->lbl_pos2->text());
            ui->lbl_pos2->setText(ui->lbl_pos3->text());
            ui->lbl_pos3->setText(ui->lbl_pos4->text());
            ui->lbl_pos4->clear();
            break;
        case 5:
            ui->lbl_pos1->clear();
            ui->lbl_pos1->setText(ui->lbl_pos2->text());
            ui->lbl_pos2->setText(ui->lbl_pos3->text());
            ui->lbl_pos3->setText(ui->lbl_pos4->text());
            ui->lbl_pos4->setText(ui->lbl_pos5->text());
            ui->lbl_pos5->clear();
            break;
        case 6:
            ui->lbl_pos1->clear();
            ui->lbl_pos1->setText(ui->lbl_pos2->text());
            ui->lbl_pos2->setText(ui->lbl_pos3->text());
            ui->lbl_pos3->setText(ui->lbl_pos4->text());
            ui->lbl_pos4->setText(ui->lbl_pos5->text());
            ui->lbl_pos5->setText(ui->lbl_pos6->text());
            ui->lbl_pos6->clear();
            break;
        case 7:
            ui->lbl_pos1->clear();
            ui->lbl_pos1->setText(ui->lbl_pos2->text());
            ui->lbl_pos2->setText(ui->lbl_pos3->text());
            ui->lbl_pos3->setText(ui->lbl_pos4->text());
            ui->lbl_pos4->setText(ui->lbl_pos5->text());
            ui->lbl_pos5->setText(ui->lbl_pos6->text());
            ui->lbl_pos6->setText(ui->lbl_pos7->text());
            ui->lbl_pos7->clear();
            break;
        case 8:
            ui->lbl_pos1->clear();
            ui->lbl_pos1->setText(ui->lbl_pos2->text());
            ui->lbl_pos2->setText(ui->lbl_pos3->text());
            ui->lbl_pos3->setText(ui->lbl_pos4->text());
            ui->lbl_pos4->setText(ui->lbl_pos5->text());
            ui->lbl_pos5->setText(ui->lbl_pos6->text());
            ui->lbl_pos6->setText(ui->lbl_pos7->text());
            ui->lbl_pos7->setText(ui->lbl_pos8->text());
            ui->lbl_pos8->clear();
            break;
        case 9:
            ui->lbl_pos1->clear();
            ui->lbl_pos1->setText(ui->lbl_pos2->text());
            ui->lbl_pos2->setText(ui->lbl_pos3->text());
            ui->lbl_pos3->setText(ui->lbl_pos4->text());
            ui->lbl_pos4->setText(ui->lbl_pos5->text());
            ui->lbl_pos5->setText(ui->lbl_pos6->text());
            ui->lbl_pos6->setText(ui->lbl_pos7->text());
            ui->lbl_pos7->setText(ui->lbl_pos8->text());
            ui->lbl_pos8->setText(ui->lbl_pos9->text());
            ui->lbl_pos9->clear();
            break;
        case 10:
            ui->lbl_pos1->clear();
            ui->lbl_pos1->setText(ui->lbl_pos2->text());
            ui->lbl_pos2->setText(ui->lbl_pos3->text());
            ui->lbl_pos3->setText(ui->lbl_pos4->text());
            ui->lbl_pos4->setText(ui->lbl_pos5->text());
            ui->lbl_pos5->setText(ui->lbl_pos6->text());
            ui->lbl_pos6->setText(ui->lbl_pos7->text());
            ui->lbl_pos7->setText(ui->lbl_pos8->text());
            ui->lbl_pos8->setText(ui->lbl_pos9->text());
            ui->lbl_pos9->setText(ui->lbl_pos10->text());
            ui->lbl_pos10->clear();
            break;
    }


}


void Fila::on_btn_ultimo_clicked()
{
    if(fila.vazia()){
        ui->label_12->setText("A fila está vazia!");
        delay3();
        ui->label_12->clear();
    }else{
        ui->lbl_pos1->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
        delay3();
        ui->lbl_pos1->setStyleSheet("Qlabel { background-color : ; color : black; }");
    }

}

