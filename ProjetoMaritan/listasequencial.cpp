#include "listasequencial.h"
#include "ui_listasequencial.h"
#include <QMessageBox>
#include <dos.h>
#include <QString>
#include <QThread>
#include <QTime>

void delay()
{
    QTime dieTime= QTime::currentTime().addSecs(2);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

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
    int pos = ui->txt_p_add->text().toInt();
    ui->txt_p_add->clear();

    lista.insere(pos, add);

    if(lista.tamanho() == 10){
        ui->label_7->setText("Não é possível adicionar mais elementos, lista cheia!");
        delay();
        ui->label_7->clear();
    }
    if(pos > lista.tamanho()+1){
        ui->label_7->setText("Posição inválida!");
        delay();
        ui->label_7->clear();
    }

    if(lista.elemento(1)!= -1){
        ui->lbl_pos1->setText(QString::number(lista.elemento(1)));
    }if(lista.elemento(2)!= -1){
        ui->lbl_pos2->setText(QString::number(lista.elemento(2)));
    }if(lista.elemento(3)!= -1){
        ui->lbl_pos3->setText(QString::number(lista.elemento(3)));
    }if(lista.elemento(4)!= -1){
        ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
    }if(lista.elemento(5)!= -1){
        ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
    }if(lista.elemento(6)!= -1){
        ui->lbl_pos6->setText(QString::number(lista.elemento(6)));
    }if(lista.elemento(7)!= -1){
        ui->lbl_pos7->setText(QString::number(lista.elemento(7)));
    }if(lista.elemento(8)!= -1){
        ui->lbl_pos8->setText(QString::number(lista.elemento(8)));
    }if(lista.elemento(9)!= -1){
        ui->lbl_pos9->setText(QString::number(lista.elemento(9)));
    }if(lista.elemento(10)!= -1){
        ui->lbl_pos10->setText(QString::number(lista.elemento(10)));
    }
}


void ListaSequencial::on_btn_remove_clicked()
{
    rem = ui->txt_remove->text().toInt();
    ui->txt_remove->clear();
    ui->txt_remove->setFocus();

    if(lista.tamanho() < rem && lista.tamanho() != 0){
        ui->label_7->setText("Não é possível remover de uma posição vazia!");
        delay();
        ui->label_7->clear();
    }

    if(!lista.vazia() && lista.tamanho() >= rem){
        lista.remove(rem);
        switch(rem){
            case 1:
                ui->lbl_pos1->clear();
                ui->lbl_pos2->clear();
                ui->lbl_pos3->clear();
                ui->lbl_pos4->clear();
                ui->lbl_pos5->clear();
                ui->lbl_pos6->clear();
                ui->lbl_pos7->clear();
                ui->lbl_pos8->clear();
                ui->lbl_pos9->clear();
                ui->lbl_pos10->clear();
                if(lista.elemento(1)!= -1){
                    ui->lbl_pos1->setText(QString::number(lista.elemento(1)));
                }if(lista.elemento(2)!= -1){
                    ui->lbl_pos2->setText(QString::number(lista.elemento(2)));
                }if(lista.elemento(3)!= -1){
                    ui->lbl_pos3->setText(QString::number(lista.elemento(3)));
                }if(lista.elemento(4)!= -1){
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
                }if(lista.elemento(5)!= -1){
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
                }if(lista.elemento(6)!= -1){
                    ui->lbl_pos6->setText(QString::number(lista.elemento(6)));
                }if(lista.elemento(7)!= -1){
                    ui->lbl_pos7->setText(QString::number(lista.elemento(7)));
                }if(lista.elemento(8)!= -1){
                    ui->lbl_pos8->setText(QString::number(lista.elemento(8)));
                }if(lista.elemento(9)!= -1){
                    ui->lbl_pos9->setText(QString::number(lista.elemento(9)));
                }if(lista.elemento(10)!= -1){
                    ui->lbl_pos10->setText(QString::number(lista.elemento(10)));
                }
                break;
            case 2:
                ui->lbl_pos1->clear();
                ui->lbl_pos2->clear();
                ui->lbl_pos3->clear();
                ui->lbl_pos4->clear();
                ui->lbl_pos5->clear();
                ui->lbl_pos6->clear();
                ui->lbl_pos7->clear();
                ui->lbl_pos8->clear();
                ui->lbl_pos9->clear();
                ui->lbl_pos10->clear();
                if(lista.elemento(1)!= -1){
                    ui->lbl_pos1->setText(QString::number(lista.elemento(1)));
                }if(lista.elemento(2)!= -1){
                    ui->lbl_pos2->setText(QString::number(lista.elemento(2)));
                }if(lista.elemento(3)!= -1){
                    ui->lbl_pos3->setText(QString::number(lista.elemento(3)));
                }if(lista.elemento(4)!= -1){
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
                }if(lista.elemento(5)!= -1){
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
                }if(lista.elemento(6)!= -1){
                    ui->lbl_pos6->setText(QString::number(lista.elemento(6)));
                }if(lista.elemento(7)!= -1){
                    ui->lbl_pos7->setText(QString::number(lista.elemento(7)));
                }if(lista.elemento(8)!= -1){
                    ui->lbl_pos8->setText(QString::number(lista.elemento(8)));
                }if(lista.elemento(9)!= -1){
                    ui->lbl_pos9->setText(QString::number(lista.elemento(9)));
                }if(lista.elemento(10)!= -1){
                    ui->lbl_pos10->setText(QString::number(lista.elemento(10)));
                }
                break;
            case 3:
                ui->lbl_pos1->clear();
                ui->lbl_pos2->clear();
                ui->lbl_pos3->clear();
                ui->lbl_pos4->clear();
                ui->lbl_pos5->clear();
                ui->lbl_pos6->clear();
                ui->lbl_pos7->clear();
                ui->lbl_pos8->clear();
                ui->lbl_pos9->clear();
                ui->lbl_pos10->clear();
                if(lista.elemento(1)!= -1){
                    ui->lbl_pos1->setText(QString::number(lista.elemento(1)));
                }if(lista.elemento(2)!= -1){
                    ui->lbl_pos2->setText(QString::number(lista.elemento(2)));
                }if(lista.elemento(3)!= -1){
                    ui->lbl_pos3->setText(QString::number(lista.elemento(3)));
                }if(lista.elemento(4)!= -1){
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
                }if(lista.elemento(5)!= -1){
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
                }if(lista.elemento(6)!= -1){
                    ui->lbl_pos6->setText(QString::number(lista.elemento(6)));
                }if(lista.elemento(7)!= -1){
                    ui->lbl_pos7->setText(QString::number(lista.elemento(7)));
                }if(lista.elemento(8)!= -1){
                    ui->lbl_pos8->setText(QString::number(lista.elemento(8)));
                }if(lista.elemento(9)!= -1){
                    ui->lbl_pos9->setText(QString::number(lista.elemento(9)));
                }if(lista.elemento(10)!= -1){
                    ui->lbl_pos10->setText(QString::number(lista.elemento(10)));
                }
                break;
            case 4:
                ui->lbl_pos1->clear();
                ui->lbl_pos2->clear();
                ui->lbl_pos3->clear();
                ui->lbl_pos4->clear();
                ui->lbl_pos5->clear();
                ui->lbl_pos6->clear();
                ui->lbl_pos7->clear();
                ui->lbl_pos8->clear();
                ui->lbl_pos9->clear();
                ui->lbl_pos10->clear();
                if(lista.elemento(1)!= -1){
                    ui->lbl_pos1->setText(QString::number(lista.elemento(1)));
                }if(lista.elemento(2)!= -1){
                    ui->lbl_pos2->setText(QString::number(lista.elemento(2)));
                }if(lista.elemento(3)!= -1){
                    ui->lbl_pos3->setText(QString::number(lista.elemento(3)));
                }if(lista.elemento(4)!= -1){
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
                }if(lista.elemento(5)!= -1){
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
                }if(lista.elemento(6)!= -1){
                    ui->lbl_pos6->setText(QString::number(lista.elemento(6)));
                }if(lista.elemento(7)!= -1){
                    ui->lbl_pos7->setText(QString::number(lista.elemento(7)));
                }if(lista.elemento(8)!= -1){
                    ui->lbl_pos8->setText(QString::number(lista.elemento(8)));
                }if(lista.elemento(9)!= -1){
                    ui->lbl_pos9->setText(QString::number(lista.elemento(9)));
                }if(lista.elemento(10)!= -1){
                    ui->lbl_pos10->setText(QString::number(lista.elemento(10)));
                }
                break;
            case 5:
                ui->lbl_pos1->clear();
                ui->lbl_pos2->clear();
                ui->lbl_pos3->clear();
                ui->lbl_pos4->clear();
                ui->lbl_pos5->clear();
                ui->lbl_pos6->clear();
                ui->lbl_pos7->clear();
                ui->lbl_pos8->clear();
                ui->lbl_pos9->clear();
                ui->lbl_pos10->clear();
                if(lista.elemento(1)!= -1){
                    ui->lbl_pos1->setText(QString::number(lista.elemento(1)));
                }if(lista.elemento(2)!= -1){
                    ui->lbl_pos2->setText(QString::number(lista.elemento(2)));
                }if(lista.elemento(3)!= -1){
                    ui->lbl_pos3->setText(QString::number(lista.elemento(3)));
                }if(lista.elemento(4)!= -1){
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
                }if(lista.elemento(5)!= -1){
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
                }if(lista.elemento(6)!= -1){
                    ui->lbl_pos6->setText(QString::number(lista.elemento(6)));
                }if(lista.elemento(7)!= -1){
                    ui->lbl_pos7->setText(QString::number(lista.elemento(7)));
                }if(lista.elemento(8)!= -1){
                    ui->lbl_pos8->setText(QString::number(lista.elemento(8)));
                }if(lista.elemento(9)!= -1){
                    ui->lbl_pos9->setText(QString::number(lista.elemento(9)));
                }if(lista.elemento(10)!= -1){
                    ui->lbl_pos10->setText(QString::number(lista.elemento(10)));
                }
                break;
            case 6:
                ui->lbl_pos1->clear();
                ui->lbl_pos2->clear();
                ui->lbl_pos3->clear();
                ui->lbl_pos4->clear();
                ui->lbl_pos5->clear();
                ui->lbl_pos6->clear();
                ui->lbl_pos7->clear();
                ui->lbl_pos8->clear();
                ui->lbl_pos9->clear();
                ui->lbl_pos10->clear();
                if(lista.elemento(1)!= -1){
                    ui->lbl_pos1->setText(QString::number(lista.elemento(1)));
                }if(lista.elemento(2)!= -1){
                    ui->lbl_pos2->setText(QString::number(lista.elemento(2)));
                }if(lista.elemento(3)!= -1){
                    ui->lbl_pos3->setText(QString::number(lista.elemento(3)));
                }if(lista.elemento(4)!= -1){
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
                }if(lista.elemento(5)!= -1){
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
                }if(lista.elemento(6)!= -1){
                    ui->lbl_pos6->setText(QString::number(lista.elemento(6)));
                }if(lista.elemento(7)!= -1){
                    ui->lbl_pos7->setText(QString::number(lista.elemento(7)));
                }if(lista.elemento(8)!= -1){
                    ui->lbl_pos8->setText(QString::number(lista.elemento(8)));
                }if(lista.elemento(9)!= -1){
                    ui->lbl_pos9->setText(QString::number(lista.elemento(9)));
                }if(lista.elemento(10)!= -1){
                    ui->lbl_pos10->setText(QString::number(lista.elemento(10)));
                }
                break;
            case 7:
                ui->lbl_pos1->clear();
                ui->lbl_pos2->clear();
                ui->lbl_pos3->clear();
                ui->lbl_pos4->clear();
                ui->lbl_pos5->clear();
                ui->lbl_pos6->clear();
                ui->lbl_pos7->clear();
                ui->lbl_pos8->clear();
                ui->lbl_pos9->clear();
                ui->lbl_pos10->clear();
                if(lista.elemento(1)!= -1){
                    ui->lbl_pos1->setText(QString::number(lista.elemento(1)));
                }if(lista.elemento(2)!= -1){
                    ui->lbl_pos2->setText(QString::number(lista.elemento(2)));
                }if(lista.elemento(3)!= -1){
                    ui->lbl_pos3->setText(QString::number(lista.elemento(3)));
                }if(lista.elemento(4)!= -1){
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
                }if(lista.elemento(5)!= -1){
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
                }if(lista.elemento(6)!= -1){
                    ui->lbl_pos6->setText(QString::number(lista.elemento(6)));
                }if(lista.elemento(7)!= -1){
                    ui->lbl_pos7->setText(QString::number(lista.elemento(7)));
                }if(lista.elemento(8)!= -1){
                    ui->lbl_pos8->setText(QString::number(lista.elemento(8)));
                }if(lista.elemento(9)!= -1){
                    ui->lbl_pos9->setText(QString::number(lista.elemento(9)));
                }if(lista.elemento(10)!= -1){
                    ui->lbl_pos10->setText(QString::number(lista.elemento(10)));
                }
                break;
            case 8:
                ui->lbl_pos1->clear();
                ui->lbl_pos2->clear();
                ui->lbl_pos3->clear();
                ui->lbl_pos4->clear();
                ui->lbl_pos5->clear();
                ui->lbl_pos6->clear();
                ui->lbl_pos7->clear();
                ui->lbl_pos8->clear();
                ui->lbl_pos9->clear();
                ui->lbl_pos10->clear();
                if(lista.elemento(1)!= -1){
                    ui->lbl_pos1->setText(QString::number(lista.elemento(1)));
                }if(lista.elemento(2)!= -1){
                    ui->lbl_pos2->setText(QString::number(lista.elemento(2)));
                }if(lista.elemento(3)!= -1){
                    ui->lbl_pos3->setText(QString::number(lista.elemento(3)));
                }if(lista.elemento(4)!= -1){
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
                }if(lista.elemento(5)!= -1){
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
                }if(lista.elemento(6)!= -1){
                    ui->lbl_pos6->setText(QString::number(lista.elemento(6)));
                }if(lista.elemento(7)!= -1){
                    ui->lbl_pos7->setText(QString::number(lista.elemento(7)));
                }if(lista.elemento(8)!= -1){
                    ui->lbl_pos8->setText(QString::number(lista.elemento(8)));
                }if(lista.elemento(9)!= -1){
                    ui->lbl_pos9->setText(QString::number(lista.elemento(9)));
                }if(lista.elemento(10)!= -1){
                    ui->lbl_pos10->setText(QString::number(lista.elemento(10)));
                }
                break;
            case 9:
                ui->lbl_pos1->clear();
                ui->lbl_pos2->clear();
                ui->lbl_pos3->clear();
                ui->lbl_pos4->clear();
                ui->lbl_pos5->clear();
                ui->lbl_pos6->clear();
                ui->lbl_pos7->clear();
                ui->lbl_pos8->clear();
                ui->lbl_pos9->clear();
                ui->lbl_pos10->clear();
                if(lista.elemento(1)!= -1){
                    ui->lbl_pos1->setText(QString::number(lista.elemento(1)));
                }if(lista.elemento(2)!= -1){
                    ui->lbl_pos2->setText(QString::number(lista.elemento(2)));
                }if(lista.elemento(3)!= -1){
                    ui->lbl_pos3->setText(QString::number(lista.elemento(3)));
                }if(lista.elemento(4)!= -1){
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
                }if(lista.elemento(5)!= -1){
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
                }if(lista.elemento(6)!= -1){
                    ui->lbl_pos6->setText(QString::number(lista.elemento(6)));
                }if(lista.elemento(7)!= -1){
                    ui->lbl_pos7->setText(QString::number(lista.elemento(7)));
                }if(lista.elemento(8)!= -1){
                    ui->lbl_pos8->setText(QString::number(lista.elemento(8)));
                }if(lista.elemento(9)!= -1){
                    ui->lbl_pos9->setText(QString::number(lista.elemento(9)));
                }if(lista.elemento(10)!= -1){
                    ui->lbl_pos10->setText(QString::number(lista.elemento(10)));
                }
                break;
            case 10:
                ui->lbl_pos1->clear();
                ui->lbl_pos2->clear();
                ui->lbl_pos3->clear();
                ui->lbl_pos4->clear();
                ui->lbl_pos5->clear();
                ui->lbl_pos6->clear();
                ui->lbl_pos7->clear();
                ui->lbl_pos8->clear();
                ui->lbl_pos9->clear();
                ui->lbl_pos10->clear();
                if(lista.elemento(1)!= -1){
                    ui->lbl_pos1->setText(QString::number(lista.elemento(1)));
                }if(lista.elemento(2)!= -1){
                    ui->lbl_pos2->setText(QString::number(lista.elemento(2)));
                }if(lista.elemento(3)!= -1){
                    ui->lbl_pos3->setText(QString::number(lista.elemento(3)));
                }if(lista.elemento(4)!= -1){
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
                }if(lista.elemento(5)!= -1){
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
                }if(lista.elemento(6)!= -1){
                    ui->lbl_pos6->setText(QString::number(lista.elemento(6)));
                }if(lista.elemento(7)!= -1){
                    ui->lbl_pos7->setText(QString::number(lista.elemento(7)));
                }if(lista.elemento(8)!= -1){
                    ui->lbl_pos8->setText(QString::number(lista.elemento(8)));
                }if(lista.elemento(9)!= -1){
                    ui->lbl_pos9->setText(QString::number(lista.elemento(9)));
                }if(lista.elemento(10)!= -1){
                    ui->lbl_pos10->setText(QString::number(lista.elemento(10)));
                }
                break;
        }

    }else if(lista.tamanho() == 0){
        ui->label_7->setText("Não é possível remover de uma lista vazia!");
        delay();
        ui->label_7->clear();
    }
}

void ListaSequencial::on_btn_consult_clicked()
{      
    int consult;
    if(ui->txt_consult_p->text().toInt() != 0 && ui->txt_consult_v->text().toInt() == 0){
        consult = ui->txt_consult_p->text().toInt();
        ui->txt_consult_p->clear();
        ui->txt_consult_v->clear();
        ui->txt_consult_v->setFocus();
        switch(consult){
            case 1:
                if(lista.tamanho() >= 1){
                    ui->lbl_pos1->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
                    delay();
                    ui->lbl_pos1->setStyleSheet("Qlabel { background-color : ; color : black; }");
                }else{
                    ui->label_7->setText("Não é possível consultar esta posição, pois ela está vazia!");
                    delay();
                    ui->label_7->clear();
                }
                break;
            case 2:
                if(lista.tamanho() >= 2){
                    ui->lbl_pos2->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
                    delay();
                    ui->lbl_pos2->setStyleSheet("Qlabel { background-color : ; color : black; }");
                }else{
                    ui->label_7->setText("Não é possível consultar esta posição, pois ela está vazia!");
                    delay();
                    ui->label_7->clear();
                }
                break;
            case 3:
                if(lista.tamanho() >= 3){
                    ui->lbl_pos3->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
                    delay();
                    ui->lbl_pos3->setStyleSheet("Qlabel { background-color : ; color : black; }");
                }else{
                    ui->label_7->setText("Não é possível consultar esta posição, pois ela está vazia!");
                    delay();
                    ui->label_7->clear();
                }
                break;
            case 4:
                if(lista.tamanho() >= 4){
                    ui->lbl_pos4->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
                    delay();
                    ui->lbl_pos4->setStyleSheet("Qlabel { background-color : ; color : black; }");
                }else{
                    ui->label_7->setText("Não é possível consultar esta posição, pois ela está vazia!");
                    delay();
                    ui->label_7->clear();
                }
                break;
            case 5:
                if(lista.tamanho() >= 5){
                    ui->lbl_pos5->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
                    delay();
                    ui->lbl_pos5->setStyleSheet("Qlabel { background-color : ; color : black; }");
                }else{
                    ui->label_7->setText("Não é possível consultar esta posição, pois ela está vazia!");
                    delay();
                    ui->label_7->clear();
                }
                break;
            case 6:
                if(lista.tamanho() >= 6){
                    ui->lbl_pos6->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
                    delay();
                    ui->lbl_pos6->setStyleSheet("Qlabel { background-color : ; color : black; }");
                }else{
                    ui->label_7->setText("Não é possível consultar esta posição, pois ela está vazia!");
                    delay();
                    ui->label_7->clear();
                }
                break;
            case 7:
                if(lista.tamanho() >= 7){
                    ui->lbl_pos7->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
                    delay();
                    ui->lbl_pos7->setStyleSheet("Qlabel { background-color : ; color : black; }");
                }else{
                    ui->label_7->setText("Não é possível consultar esta posição, pois ela está vazia!");
                    delay();
                    ui->label_7->clear();
                }
                break;
            case 8:
                if(lista.tamanho() >= 8){
                    ui->lbl_pos8->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
                    delay();
                    ui->lbl_pos8->setStyleSheet("Qlabel { background-color : ; color : black; }");
                }else{
                    ui->label_7->setText("Não é possível consultar esta posição, pois ela está vazia!");
                    delay();
                    ui->label_7->clear();
                }
                break;
            case 9:
                if(lista.tamanho() >= 9){
                    ui->lbl_pos9->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
                    delay();
                    ui->lbl_pos9->setStyleSheet("Qlabel { background-color : ; color : black; }");
                }else{
                    ui->label_7->setText("Não é possível consultar esta posição, pois ela está vazia!");
                    delay();
                    ui->label_7->clear();
                }
                break;
            case 10:
                if(lista.tamanho() == 10){
                    ui->lbl_pos10->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
                    delay();
                    ui->lbl_pos10->setStyleSheet("Qlabel { background-color : ; color : black; }");
                }else{
                    ui->label_7->setText("Não é possível consultar esta posição, pois ela está vazia!");
                    delay();
                    ui->label_7->clear();
                }
                break;
        }

    }else if(ui->txt_consult_p->text().toInt() == 0){
        consult = ui->txt_consult_v->text().toInt();
        ui->txt_consult_p->clear();
        ui->txt_consult_v->clear();
        ui->txt_consult_v->setFocus();
        int pos = 0;
        int i = 0;
        while(pos != -1){
            pos = lista.posicao(consult, pos);
            if(pos == -1 && i == 0){
                ui->label_7->setText("Valor pesquisado não encontrado");
                delay();
                ui->label_7->clear();
            }
            switch(pos){
                case 1:
                    ui->lbl_pos1->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
                    delay();
                    ui->lbl_pos1->setStyleSheet("Qlabel { background-color : ; color : black; }");
                    break;
                case 2:
                    ui->lbl_pos2->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
                    delay();
                    ui->lbl_pos2->setStyleSheet("Qlabel { background-color : ; color : black; }");
                    break;
                case 3:
                    ui->lbl_pos3->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
                    delay();
                    ui->lbl_pos3->setStyleSheet("Qlabel { background-color : ; color : black; }");
                    break;
                case 4:
                    ui->lbl_pos4->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
                    delay();
                    ui->lbl_pos4->setStyleSheet("Qlabel { background-color : ; color : black; }");
                    break;
                case 5:
                    ui->lbl_pos5->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
                    delay();
                    ui->lbl_pos5->setStyleSheet("Qlabel { background-color : ; color : black; }");
                    break;
                case 6:
                    ui->lbl_pos6->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
                    delay();
                    ui->lbl_pos6->setStyleSheet("Qlabel { background-color : ; color : black; }");
                    break;
                case 7:
                    ui->lbl_pos7->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
                    delay();
                    ui->lbl_pos7->setStyleSheet("Qlabel { background-color : ; color : black; }");
                    break;
                case 8:
                    ui->lbl_pos8->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
                    delay();
                    ui->lbl_pos8->setStyleSheet("Qlabel { background-color : ; color : black; }");
                    break;
                case 9:
                    ui->lbl_pos9->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
                    delay();
                    ui->lbl_pos9->setStyleSheet("Qlabel { background-color : ; color : black; }");
                    break;
                case 10:
                    ui->lbl_pos10->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
                    delay();
                    ui->lbl_pos10->setStyleSheet("Qlabel { background-color : ; color : black; }");
                    break;
            }
            i++;
        }

    }else if(ui->txt_consult_p->text().toInt() != 0 && ui->txt_consult_v->text().toInt() != 0){
        ui->label_7->setText("Consulte usando apenas um dos parâmetros!");
        delay();
        ui->label_7->clear();
    }

    ui->txt_consult_p->clear();
    ui->txt_consult_v->clear();
    ui->txt_consult_v->setFocus();
}
