#include "arvore.h"
#include "ui_arvore.h"
#include <QMessageBox>
#include <dos.h>
#include <QString>
#include <QThread>
#include <QTime>

void delay5()
{
    QTime dieTime= QTime::currentTime().addSecs(2);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}
void delay6()
{
    QTime dieTime= QTime::currentTime().addSecs(1);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

Arvore::Arvore(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Arvore)
{
    ui->setupUi(this);
}

Arvore::~Arvore()
{
    delete ui;
}

void Arvore::on_btn_add_clicked()
{
    int add = ui->txt_add->text().toInt();
    int tam = arvore.tamanho();


    ui->txt_add->clear();
    ui->txt_add->setFocus();

    if(add <= 0){
        ui->label_9->setText("Não é possível adicionar esse valor");
        delay5();
        ui->label_9->clear();
    }

    if(tam == 0 && add > 0){
        arvore.insere(1, add);
        ui->lbl_pos1->setText(QString::number(add));
        ui->line->setLineWidth(1);
        ui->line_2->setLineWidth(1);
        ui->line_3->setLineWidth(1);
        ui->line_4->setLineWidth(1);
    }

    if(add > ui->lbl_pos1->text().toInt() && ui->lbl_pos3->text().toInt() == 0){
        ui->lbl_pos3->setText(QString::number(add));
        ui->line_10->setLineWidth(1);
        ui->line_11->setLineWidth(1);
        ui->line_12->setLineWidth(1);
        ui->line_13->setLineWidth(1);
        ui->line_14->setLineWidth(1);
        ui->line_16->setLineWidth(1);
    }else if(add > ui->lbl_pos1->text().toInt() && ui->lbl_pos3->text().toInt() > 0){
        if(add > ui->lbl_pos3->text().toInt() && ui->lbl_pos7->text().toInt() == 0){
            ui->lbl_pos7->setText(QString::number(add));
            ui->line_21->setLineWidth(1);
            ui->line_20->setLineWidth(1);
            ui->line_19->setLineWidth(1);
            ui->line_17->setLineWidth(1);
            ui->line_27->setLineWidth(1);
            ui->line_23->setLineWidth(1);
        }else if(add > ui->lbl_pos3->text().toInt() && ui->lbl_pos7->text().toInt() > 0){
            ui->label_9->setText("Não há espaço para a inserção deste elemento!");
            delay5();
            ui->label_9->clear();
        }else if(add < ui->lbl_pos3->text().toInt() && ui->lbl_pos6->text().toInt() == 0){
            ui->lbl_pos6->setText(QString::number(add));
            ui->line_18->setLineWidth(1);
            ui->line_22->setLineWidth(1);
            ui->line_24->setLineWidth(1);
            ui->line_25->setLineWidth(1);
            ui->line_26->setLineWidth(1);
            ui->line_28->setLineWidth(1);
        }else if(add < ui->lbl_pos3->text().toInt() && ui->lbl_pos6->text().toInt() > 0){
            ui->label_9->setText("Não há espaço para a inserção deste elemento!");
            delay5();
            ui->label_9->clear();
        }
    }else if(add < ui->lbl_pos1->text().toInt() && ui->lbl_pos2->text().toInt() == 0 && add > 0){
        ui->lbl_pos2->setText(QString::number(add));
        ui->line_5->setLineWidth(1);
        ui->line_6->setLineWidth(1);
        ui->line_7->setLineWidth(1);
        ui->line_8->setLineWidth(1);
        ui->line_15->setLineWidth(1);
        ui->line_29->setLineWidth(1);
    }else if(add < ui->lbl_pos1->text().toInt() && ui->lbl_pos2->text().toInt() > 0 && add > 0){
        if(add > ui->lbl_pos2->text().toInt() && ui->lbl_pos5->text().toInt() == 0){
            ui->lbl_pos5->setText(QString::number(add));
            ui->line_31->setLineWidth(1);
            ui->line_30->setLineWidth(1);
            ui->line_36->setLineWidth(1);
            ui->line_38->setLineWidth(1);
            ui->line_40->setLineWidth(1);
            ui->line_41->setLineWidth(1);
        }else if(add > ui->lbl_pos2->text().toInt() && ui->lbl_pos5->text().toInt() > 0){
            ui->label_9->setText("Não há espaço para a inserção deste elemento!");
            delay5();
            ui->label_9->clear();
        }else if(add < ui->lbl_pos2->text().toInt() && ui->lbl_pos4->text().toInt() == 0){
            ui->lbl_pos4->setText(QString::number(add));
            ui->line_32->setLineWidth(1);
            ui->line_33->setLineWidth(1);
            ui->line_34->setLineWidth(1);
            ui->line_35->setLineWidth(1);
            ui->line_37->setLineWidth(1);
            ui->line_39->setLineWidth(1);
        }else if(add < ui->lbl_pos2->text().toInt() && ui->lbl_pos4->text().toInt() > 0){
            ui->label_9->setText("Não há espaço para a inserção deste elemento!");
            delay5();
            ui->label_9->clear();
        }
    }


}


void Arvore::on_btn_consult_clicked()
{
    int valor = ui->txt_consult->text().toInt();
    int tam = arvore.tamanho();

    if(tam == 0){
        ui->label_9->setText("Árvore vazia!");
        delay5();
        ui->label_9->clear();
    }

    ui->txt_consult->clear();
    ui->txt_consult->setFocus();


        if(valor == ui->lbl_pos1->text().toInt()){
            ui->lbl_pos1->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
            delay6();
            ui->lbl_pos1->setStyleSheet("QLabel { background-color :  ; color : ; }");

        }else if(valor > ui->lbl_pos1->text().toInt() && valor == ui->lbl_pos3->text().toInt() ){
            ui->lbl_pos1->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
            delay6();
            ui->lbl_pos1->setStyleSheet("QLabel { background-color :  ; color : ; }");
            ui->lbl_pos3->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
            delay6();
            ui->lbl_pos3->setStyleSheet("QLabel { background-color :  ; color : ; }");

        }else if(valor > ui->lbl_pos1->text().toInt() && valor > ui->lbl_pos3->text().toInt() && valor == ui->lbl_pos7->text().toInt()){
            ui->lbl_pos1->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
            delay6();
            ui->lbl_pos1->setStyleSheet("QLabel { background-color :  ; color : ; }");
            ui->lbl_pos3->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
            delay6();
            ui->lbl_pos3->setStyleSheet("QLabel { background-color :  ; color : ; }");
            ui->lbl_pos7->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
            delay6();
            ui->lbl_pos7->setStyleSheet("QLabel { background-color :  ; color : ; }");

        }else if(valor > ui->lbl_pos1->text().toInt() && valor > ui->lbl_pos3->text().toInt() && valor != ui->lbl_pos7->text().toInt()){
            ui->label_9->setText("Valor não encontrado!");
            delay5();
            ui->label_9->clear();

        }else if(valor > ui->lbl_pos1->text().toInt() && valor < ui->lbl_pos3->text().toInt() && valor == ui->lbl_pos6->text().toInt()){
            ui->lbl_pos1->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
            delay6();
            ui->lbl_pos1->setStyleSheet("QLabel { background-color :  ; color : ; }");
            ui->lbl_pos3->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
            delay6();
            ui->lbl_pos3->setStyleSheet("QLabel { background-color :  ; color : ; }");
            ui->lbl_pos6->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
            delay6();
            ui->lbl_pos6->setStyleSheet("QLabel { background-color :  ; color : ; }");

        }else if(valor > ui->lbl_pos1->text().toInt() && valor < ui->lbl_pos3->text().toInt() && valor != ui->lbl_pos6->text().toInt()){
            ui->label_9->setText("Valor não encontrado!");
            delay5();
            ui->label_9->clear();

        }else if(valor < ui->lbl_pos1->text().toInt() && valor == ui->lbl_pos2->text().toInt()){
            ui->lbl_pos1->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
            delay6();
            ui->lbl_pos1->setStyleSheet("QLabel { background-color :  ; color : ; }");
            ui->lbl_pos2->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
            delay6();
            ui->lbl_pos2->setStyleSheet("QLabel { background-color :  ; color : ; }");

        }else if(valor < ui->lbl_pos1->text().toInt() && valor < ui->lbl_pos2->text().toInt() && valor == ui->lbl_pos4->text().toInt()){
            ui->lbl_pos1->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
            delay6();
            ui->lbl_pos1->setStyleSheet("QLabel { background-color :  ; color : ; }");
            ui->lbl_pos2->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
            delay6();
            ui->lbl_pos2->setStyleSheet("QLabel { background-color :  ; color : ; }");
            ui->lbl_pos4->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
            delay6();
            ui->lbl_pos4->setStyleSheet("QLabel { background-color :  ; color : ; }");

        }else if(valor < ui->lbl_pos1->text().toInt() && valor < ui->lbl_pos2->text().toInt() && valor != ui->lbl_pos4->text().toInt()){
            ui->label_9->setText("Valor não encontrado!");
            delay5();
            ui->label_9->clear();

        }else if(valor < ui->lbl_pos1->text().toInt() && valor > ui->lbl_pos2->text().toInt() && valor == ui->lbl_pos5->text().toInt()){
            ui->lbl_pos1->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
            delay6();
            ui->lbl_pos1->setStyleSheet("QLabel { background-color :  ; color : ; }");
            ui->lbl_pos2->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
            delay6();
            ui->lbl_pos2->setStyleSheet("QLabel { background-color :  ; color : ; }");
            ui->lbl_pos5->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
            delay6();
            ui->lbl_pos5->setStyleSheet("QLabel { background-color :  ; color : ; }");

        }else if(valor < ui->lbl_pos1->text().toInt() && valor > ui->lbl_pos2->text().toInt() && valor != ui->lbl_pos5->text().toInt()){
            ui->label_9->setText("Valor não encontrado!");
            delay5();
            ui->label_9->clear();

        }



}


void Arvore::on_pushButton_clicked()
{
    arvore.setTamanho(0);
    ui->lbl_pos1->clear();
    ui->lbl_pos2->clear();
    ui->lbl_pos3->clear();
    ui->lbl_pos4->clear();
    ui->lbl_pos5->clear();
    ui->lbl_pos6->clear();
    ui->lbl_pos7->clear();

    ui->line->setLineWidth(0);
    ui->line_2->setLineWidth(0);
    ui->line_3->setLineWidth(0);
    ui->line_4->setLineWidth(0);
    ui->line_5->setLineWidth(0);
    ui->line_6->setLineWidth(0);
    ui->line_7->setLineWidth(0);
    ui->line_8->setLineWidth(0);
    ui->line_11->setLineWidth(0);
    ui->line_10->setLineWidth(0);
    ui->line_12->setLineWidth(0);
    ui->line_13->setLineWidth(0);
    ui->line_14->setLineWidth(0);
    ui->line_15->setLineWidth(0);
    ui->line_16->setLineWidth(0);
    ui->line_17->setLineWidth(0);
    ui->line_18->setLineWidth(0);
    ui->line_19->setLineWidth(0);
    ui->line_20->setLineWidth(0);
    ui->line_21->setLineWidth(0);
    ui->line_22->setLineWidth(0);
    ui->line_23->setLineWidth(0);
    ui->line_24->setLineWidth(0);
    ui->line_25->setLineWidth(0);
    ui->line_26->setLineWidth(0);
    ui->line_27->setLineWidth(0);
    ui->line_28->setLineWidth(0);
    ui->line_29->setLineWidth(0);
    ui->line_30->setLineWidth(0);
    ui->line_32->setLineWidth(0);
    ui->line_33->setLineWidth(0);
    ui->line_34->setLineWidth(0);
    ui->line_35->setLineWidth(0);
    ui->line_36->setLineWidth(0);
    ui->line_37->setLineWidth(0);
    ui->line_38->setLineWidth(0);
    ui->line_39->setLineWidth(0);
    ui->line_40->setLineWidth(0);
    ui->line_41->setLineWidth(0);
    ui->line_31->setLineWidth(0);



}

