#include "listaencadeada.h"
#include "ui_listaencadeada.h"
#include <QMessageBox>
#include <QMessageBox>
#include <dos.h>
#include <QString>
#include <QThread>
#include <QTime>

void delay4()
{
    QTime dieTime= QTime::currentTime().addSecs(2);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

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

void ListaEncadeada::on_btn_adicionar_clicked()
{

    int add = ui->txt_add->text().toInt();
    int pos = ui->txt_p_add->text().toInt();
    int tam = lista.tamanho();
    ui->txt_add->clear();
    ui->txt_p_add->clear();
    ui->txt_add->setFocus();

    if(pos <= 10 && tam < 10){

        if(!lista.insere(pos, add)){
            ui->label_7->setText("Não foi possível adicionar o valor nessa posição!");
            delay4();
            ui->label_7->clear();
        }else{
            switch(tam){
                case 0:
                    ui->lbl_pos1->setText(QString::number(lista.elemento(1)));
                    ui->line->setLineWidth(1);
                    ui->line_2->setLineWidth(1);
                    ui->line_3->setLineWidth(1);
                    ui->line_4->setLineWidth(1);
                    ui->line_6->setLineWidth(1);
                    break;
                case 1:
                    if(lista.elemento(1) != -1){
                        ui->lbl_pos1->setText(QString::number(lista.elemento(1)));
                    }
                    if(lista.elemento(2) != -1){
                        ui->lbl_pos2->setText(QString::number(lista.elemento(2)));
                    }
                    ui->line_5->setLineWidth(1);
                    ui->line_8->setLineWidth(1);
                    ui->line_9->setLineWidth(1);
                    ui->line_10->setLineWidth(1);
                    ui->line_11->setLineWidth(1);
                    ui->line_12->setLineWidth(1);
                    break;
                case 2:
                    if(lista.elemento(1) != -1){
                        ui->lbl_pos1->setText(QString::number(lista.elemento(1)));
                    }
                    if(lista.elemento(2) != -1){
                        ui->lbl_pos2->setText(QString::number(lista.elemento(2)));
                    }
                    ui->lbl_pos3->setText(QString::number(lista.elemento(3)));

                    ui->line_7->setLineWidth(1);
                    ui->line_14->setLineWidth(1);
                    ui->line_15->setLineWidth(1);
                    ui->line_16->setLineWidth(1);
                    ui->line_17->setLineWidth(1);
                    ui->line_18->setLineWidth(1);
                    break;
                case 3:
                    if(lista.elemento(1) != -1){
                        ui->lbl_pos1->setText(QString::number(lista.elemento(1)));
                    }
                    if(lista.elemento(2) != -1){
                        ui->lbl_pos2->setText(QString::number(lista.elemento(2)));
                    }
                    ui->lbl_pos3->setText(QString::number(lista.elemento(3)));
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));

                    ui->line_13->setLineWidth(1);
                    ui->line_20->setLineWidth(1);
                    ui->line_21->setLineWidth(1);
                    ui->line_22->setLineWidth(1);
                    ui->line_23->setLineWidth(1);
                    ui->line_24->setLineWidth(1);
                    break;
                case 4:
                    if(lista.elemento(1) != -1){
                        ui->lbl_pos1->setText(QString::number(lista.elemento(1)));
                    }
                    if(lista.elemento(2) != -1){
                        ui->lbl_pos2->setText(QString::number(lista.elemento(2)));
                    }
                    ui->lbl_pos3->setText(QString::number(lista.elemento(3)));
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));

                    ui->line_19->setLineWidth(1);
                    ui->line_26->setLineWidth(1);
                    ui->line_27->setLineWidth(1);
                    ui->line_28->setLineWidth(1);
                    ui->line_29->setLineWidth(1);
                    ui->line_30->setLineWidth(1);
                        break;
                case 5:
                    if(lista.elemento(1) != -1){
                        ui->lbl_pos1->setText(QString::number(lista.elemento(1)));
                    }
                    if(lista.elemento(2) != -1){
                        ui->lbl_pos2->setText(QString::number(lista.elemento(2)));
                    }
                    ui->lbl_pos3->setText(QString::number(lista.elemento(3)));
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
                    ui->lbl_pos6->setText(QString::number(lista.elemento(6)));

                    ui->line_25->setLineWidth(1);
                    ui->line_32->setLineWidth(1);
                    ui->line_33->setLineWidth(1);
                    ui->line_34->setLineWidth(1);
                    ui->line_35->setLineWidth(1);
                    ui->line_36->setLineWidth(1);
                    break;
                case 6:
                    if(lista.elemento(1) != -1){
                        ui->lbl_pos1->setText(QString::number(lista.elemento(1)));
                    }
                    if(lista.elemento(2) != -1){
                        ui->lbl_pos2->setText(QString::number(lista.elemento(2)));
                    }
                    ui->lbl_pos3->setText(QString::number(lista.elemento(3)));
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
                    ui->lbl_pos6->setText(QString::number(lista.elemento(6)));
                    ui->lbl_pos7->setText(QString::number(lista.elemento(7)));

                    ui->line_31->setLineWidth(1);
                    ui->line_38->setLineWidth(1);
                    ui->line_39->setLineWidth(1);
                    ui->line_40->setLineWidth(1);
                    ui->line_41->setLineWidth(1);
                    ui->line_42->setLineWidth(1);
                    break;
                case 7:
                    if(lista.elemento(1) != -1){
                        ui->lbl_pos1->setText(QString::number(lista.elemento(1)));
                    }
                    if(lista.elemento(2) != -1){
                        ui->lbl_pos2->setText(QString::number(lista.elemento(2)));
                    }
                    ui->lbl_pos3->setText(QString::number(lista.elemento(3)));
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
                    ui->lbl_pos6->setText(QString::number(lista.elemento(6)));
                    ui->lbl_pos7->setText(QString::number(lista.elemento(7)));
                    ui->lbl_pos8->setText(QString::number(lista.elemento(8)));

                    ui->line_37->setLineWidth(1);
                    ui->line_44->setLineWidth(1);
                    ui->line_45->setLineWidth(1);
                    ui->line_46->setLineWidth(1);
                    ui->line_47->setLineWidth(1);
                    ui->line_48->setLineWidth(1);
                    break;
                case 8:
                    if(lista.elemento(1) != -1){
                        ui->lbl_pos1->setText(QString::number(lista.elemento(1)));
                    }
                    if(lista.elemento(2) != -1){
                        ui->lbl_pos2->setText(QString::number(lista.elemento(2)));
                    }
                    ui->lbl_pos3->setText(QString::number(lista.elemento(3)));
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
                    ui->lbl_pos6->setText(QString::number(lista.elemento(6)));
                    ui->lbl_pos7->setText(QString::number(lista.elemento(7)));
                    ui->lbl_pos8->setText(QString::number(lista.elemento(8)));
                    ui->lbl_pos9->setText(QString::number(lista.elemento(9)));

                    ui->line_43->setLineWidth(1);
                    ui->line_50->setLineWidth(1);
                    ui->line_51->setLineWidth(1);
                    ui->line_52->setLineWidth(1);
                    ui->line_53->setLineWidth(1);
                    ui->line_54->setLineWidth(1);
                    break;
                case 9:
                    if(lista.elemento(1) != -1){
                        ui->lbl_pos1->setText(QString::number(lista.elemento(1)));
                    }
                    if(lista.elemento(2) != -1){
                        ui->lbl_pos2->setText(QString::number(lista.elemento(2)));
                    }
                    ui->lbl_pos3->setText(QString::number(lista.elemento(3)));
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
                    ui->lbl_pos6->setText(QString::number(lista.elemento(6)));
                    ui->lbl_pos7->setText(QString::number(lista.elemento(7)));
                    ui->lbl_pos8->setText(QString::number(lista.elemento(8)));
                    ui->lbl_pos9->setText(QString::number(lista.elemento(9)));
                    ui->lbl_pos10->setText(QString::number(lista.elemento(10)));

                    ui->line_49->setLineWidth(1);
                    ui->line_56->setLineWidth(1);
                    ui->line_57->setLineWidth(1);
                    ui->line_58->setLineWidth(1);
                    ui->line_59->setLineWidth(1);
                    ui->line_60->setLineWidth(1);
                    break;
                case 10:
                    ui->label_7->setText("Não é possível adicionar mais elementos!");
                    delay4();
                    ui->label_7->clear();
            }

    }
    }else if(tam == 10){
        ui->label_7->setText("Lista cheia!");
        delay4();
        ui->label_7->clear();
    }
}


void ListaEncadeada::on_btn_remove_clicked()
{
    int tam = lista.tamanho();
    int pos = ui->txt_remove->text().toInt();

    ui->txt_remove->clear();
    ui->txt_remove->setFocus();

    if(tam == 0){
        ui->label_7->setText("Não é possível remover de uma lista vazia!");
        delay4();
        ui->label_7->clear();
    }

    switch(tam){
            case 1:
            if(pos == 1){
                ui->line->setLineWidth(0);
                ui->line_2->setLineWidth(0);
                ui->line_3->setLineWidth(0);
                ui->line_4->setLineWidth(0);
                ui->line_6->setLineWidth(0);
                lista.remove(pos);
                ui->lbl_pos1->clear();
            }else{
                ui->label_7->setText("Não é possivel remover, pois a posição está vazia!");
                delay4();
                ui->label_7->clear();
            }
            break;
        case 2:
            if(pos <= 2){
                ui->line_5->setLineWidth(0);
                ui->line_8->setLineWidth(0);
                ui->line_9->setLineWidth(0);
                ui->line_10->setLineWidth(0);
                ui->line_11->setLineWidth(0);
                ui->line_12->setLineWidth(0);
            }
            switch(pos){
                case 1:
                    lista.remove(pos);
                    ui->lbl_pos1->setText(QString::number(lista.elemento(1)));
                    ui->lbl_pos2->clear();
                    break;
                case 2:
                    lista.remove(pos);
                    ui->lbl_pos2->clear();
                    break;
                default:
                    ui->label_7->setText("Não é possivel remover, pois a posição está vazia!");
                    delay4();
                    ui->label_7->clear();
                    break;
            }
            break;
        case 3:
             if(pos <= 3){
                ui->line_7->setLineWidth(0);
                ui->line_14->setLineWidth(0);
                ui->line_15->setLineWidth(0);
                ui->line_16->setLineWidth(0);
                ui->line_17->setLineWidth(0);
                ui->line_18->setLineWidth(0);
             }
            switch(pos){
                case 1:
                    lista.remove(pos);
                    ui->lbl_pos1->setText(QString::number(lista.elemento(1)));
                    ui->lbl_pos2->setText(QString::number(lista.elemento(2)));
                    ui->lbl_pos3->clear();
                    break;
                case 2:
                    lista.remove(pos);
                    ui->lbl_pos2->setText(QString::number(lista.elemento(2)));
                    ui->lbl_pos3->clear();
                    break;
                case 3:
                    lista.remove(pos);
                    ui->lbl_pos3->clear();
                    break;

                default:
                    ui->label_7->setText("Não é possivel remover, pois a posição está vazia!");
                    delay4();
                    ui->label_7->clear();
                    break;
            }
            break;
        case 4:
            if(pos <= 4){
                ui->line_13->setLineWidth(0);
                ui->line_20->setLineWidth(0);
                ui->line_21->setLineWidth(0);
                ui->line_22->setLineWidth(0);
                ui->line_23->setLineWidth(0);
                ui->line_24->setLineWidth(0);
            }
            switch(pos){
                case 1:
                    lista.remove(pos);
                    ui->lbl_pos1->setText(QString::number(lista.elemento(1)));
                    ui->lbl_pos2->setText(QString::number(lista.elemento(2)));
                    ui->lbl_pos3->setText(QString::number(lista.elemento(3)));
                    ui->lbl_pos4->clear();
                    break;
                case 2:
                    lista.remove(pos);
                    ui->lbl_pos2->setText(QString::number(lista.elemento(2)));
                    ui->lbl_pos3->setText(QString::number(lista.elemento(3)));
                    ui->lbl_pos4->clear();
                    break;
                case 3:
                    lista.remove(pos);
                    ui->lbl_pos3->setText(QString::number(lista.elemento(3)));
                    ui->lbl_pos4->clear();
                    break;
                case 4:
                    lista.remove(pos);
                    ui->lbl_pos4->clear();
                    break;
                default:
                    ui->label_7->setText("Não é possivel remover, pois a posição está vazia!");
                    delay4();
                    ui->label_7->clear();
                    break;
            }
            break;
        case 5:
            if(pos <= 5){
                ui->line_19->setLineWidth(0);
                ui->line_26->setLineWidth(0);
                ui->line_27->setLineWidth(0);
                ui->line_28->setLineWidth(0);
                ui->line_29->setLineWidth(0);
                ui->line_30->setLineWidth(0);
            }
            switch(pos){
                case 1:
                    lista.remove(pos);
                    ui->lbl_pos1->setText(QString::number(lista.elemento(1)));
                    ui->lbl_pos2->setText(QString::number(lista.elemento(2)));
                    ui->lbl_pos3->setText(QString::number(lista.elemento(3)));
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
                    ui->lbl_pos5->clear();
                    break;
                case 2:
                    lista.remove(pos);
                    ui->lbl_pos2->setText(QString::number(lista.elemento(2)));
                    ui->lbl_pos3->setText(QString::number(lista.elemento(3)));
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
                    ui->lbl_pos5->clear();
                    break;
                case 3:
                    lista.remove(pos);
                    ui->lbl_pos3->setText(QString::number(lista.elemento(3)));
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
                    ui->lbl_pos5->clear();
                    break;
                case 4:
                    lista.remove(pos);
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
                    ui->lbl_pos5->clear();
                    break;
                case 5:
                    lista.remove(pos);
                    ui->lbl_pos5->clear();
                    break;
                default:
                    ui->label_7->setText("Não é possivel remover, pois a posição está vazia!");
                    delay4();
                    ui->label_7->clear();
                    break;
            }
            break;
        case 6:
            if(pos <= 6){
                ui->line_25->setLineWidth(0);
                ui->line_32->setLineWidth(0);
                ui->line_33->setLineWidth(0);
                ui->line_34->setLineWidth(0);
                ui->line_35->setLineWidth(0);
                ui->line_36->setLineWidth(0);
            }
            switch(pos){
                case 1:
                    lista.remove(pos);
                    ui->lbl_pos1->setText(QString::number(lista.elemento(1)));
                    ui->lbl_pos2->setText(QString::number(lista.elemento(2)));
                    ui->lbl_pos3->setText(QString::number(lista.elemento(3)));
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
                    ui->lbl_pos6->clear();
                    break;
                case 2:
                    lista.remove(pos);
                    ui->lbl_pos2->setText(QString::number(lista.elemento(2)));
                    ui->lbl_pos3->setText(QString::number(lista.elemento(3)));
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
                    ui->lbl_pos6->clear();
                    break;
                case 3:
                    lista.remove(pos);
                    ui->lbl_pos3->setText(QString::number(lista.elemento(3)));
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
                    ui->lbl_pos6->clear();
                    break;
                case 4:
                    lista.remove(pos);
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
                    ui->lbl_pos6->clear();
                    break;
                case 5:
                    lista.remove(pos);
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
                    ui->lbl_pos6->clear();
                    break;
                case 6:
                    lista.remove(pos);
                    ui->lbl_pos6->clear();
                    break;
                default:
                    ui->label_7->setText("Não é possivel remover, pois a posição está vazia!");
                    delay4();
                    ui->label_7->clear();
                    break;
            }
            break;
        case 7:
            if(pos <= 7){
                ui->line_31->setLineWidth(0);
                ui->line_38->setLineWidth(0);
                ui->line_39->setLineWidth(0);
                ui->line_40->setLineWidth(0);
                ui->line_41->setLineWidth(0);
                ui->line_42->setLineWidth(0);
            }
            switch(pos){
                case 1:
                    lista.remove(pos);
                    ui->lbl_pos1->setText(QString::number(lista.elemento(1)));
                    ui->lbl_pos2->setText(QString::number(lista.elemento(2)));
                    ui->lbl_pos3->setText(QString::number(lista.elemento(3)));
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
                    ui->lbl_pos6->setText(QString::number(lista.elemento(6)));
                    ui->lbl_pos7->clear();
                    break;
                case 2:
                    lista.remove(pos);
                    ui->lbl_pos2->setText(QString::number(lista.elemento(2)));
                    ui->lbl_pos3->setText(QString::number(lista.elemento(3)));
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
                    ui->lbl_pos6->setText(QString::number(lista.elemento(6)));
                    ui->lbl_pos7->clear();
                    break;
                case 3:
                    lista.remove(pos);
                    ui->lbl_pos3->setText(QString::number(lista.elemento(3)));
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
                    ui->lbl_pos6->setText(QString::number(lista.elemento(6)));
                    ui->lbl_pos7->clear();
                    break;
                case 4:
                    lista.remove(pos);
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
                    ui->lbl_pos6->setText(QString::number(lista.elemento(6)));
                    ui->lbl_pos7->clear();
                    break;
                case 5:
                    lista.remove(pos);
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
                    ui->lbl_pos6->setText(QString::number(lista.elemento(6)));
                    ui->lbl_pos7->clear();
                    break;
                case 6:
                    lista.remove(pos);
                    ui->lbl_pos6->setText(QString::number(lista.elemento(6)));
                    ui->lbl_pos7->clear();
                    break;
                case 7:
                    lista.remove(pos);
                    ui->lbl_pos7->clear();
                    break;
                default:
                    ui->label_7->setText("Não é possivel remover, pois a posição está vazia!");
                    delay4();
                    ui->label_7->clear();
                    break;
            }
            break;
        case 8:
             if(pos <= 8){
                ui->line_37->setLineWidth(0);
                ui->line_44->setLineWidth(0);
                ui->line_45->setLineWidth(0);
                ui->line_46->setLineWidth(0);
                ui->line_47->setLineWidth(0);
                ui->line_48->setLineWidth(0);
             }
            switch(pos){
                case 1:
                    lista.remove(pos);
                    ui->lbl_pos1->setText(QString::number(lista.elemento(1)));
                    ui->lbl_pos2->setText(QString::number(lista.elemento(2)));
                    ui->lbl_pos3->setText(QString::number(lista.elemento(3)));
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
                    ui->lbl_pos6->setText(QString::number(lista.elemento(6)));
                    ui->lbl_pos7->setText(QString::number(lista.elemento(7)));
                    ui->lbl_pos8->clear();
                    break;
                case 2:
                    lista.remove(pos);
                    ui->lbl_pos2->setText(QString::number(lista.elemento(2)));
                    ui->lbl_pos3->setText(QString::number(lista.elemento(3)));
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
                    ui->lbl_pos6->setText(QString::number(lista.elemento(6)));
                    ui->lbl_pos8->clear();
                    break;
                case 3:
                    lista.remove(pos);
                    ui->lbl_pos3->setText(QString::number(lista.elemento(3)));
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
                    ui->lbl_pos6->setText(QString::number(lista.elemento(6)));
                    ui->lbl_pos7->setText(QString::number(lista.elemento(7)));
                    ui->lbl_pos8->clear();
                    break;
                case 4:
                    lista.remove(pos);
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
                    ui->lbl_pos6->setText(QString::number(lista.elemento(6)));
                    ui->lbl_pos7->setText(QString::number(lista.elemento(7)));
                    ui->lbl_pos8->clear();
                    break;
                case 5:
                    lista.remove(pos);
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
                    ui->lbl_pos6->setText(QString::number(lista.elemento(6)));
                    ui->lbl_pos7->setText(QString::number(lista.elemento(7)));
                    ui->lbl_pos8->clear();
                    break;
                case 6:
                    lista.remove(pos);
                    ui->lbl_pos6->setText(QString::number(lista.elemento(6)));
                    ui->lbl_pos7->setText(QString::number(lista.elemento(7)));
                    ui->lbl_pos8->clear();
                    break;
                case 7:
                    lista.remove(pos);
                    ui->lbl_pos7->setText(QString::number(lista.elemento(7)));
                    ui->lbl_pos8->clear();
                    break;
                case 8:
                    lista.remove(pos);
                    ui->lbl_pos8->clear();
                    break;
                default:
                    ui->label_7->setText("Não é possivel remover, pois a posição está vazia!");
                    delay4();
                    ui->label_7->clear();
                    break;
            }
            break;
        case 9:
            if(pos <= 9){
                ui->line_43->setLineWidth(0);
                ui->line_50->setLineWidth(0);
                ui->line_51->setLineWidth(0);
                ui->line_52->setLineWidth(0);
                ui->line_53->setLineWidth(0);
                ui->line_54->setLineWidth(0);
            }
            switch(pos){
                case 1:
                    lista.remove(pos);
                    ui->lbl_pos1->setText(QString::number(lista.elemento(1)));
                    ui->lbl_pos2->setText(QString::number(lista.elemento(2)));
                    ui->lbl_pos3->setText(QString::number(lista.elemento(3)));
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
                    ui->lbl_pos6->setText(QString::number(lista.elemento(6)));
                    ui->lbl_pos7->setText(QString::number(lista.elemento(7)));
                    ui->lbl_pos8->setText(QString::number(lista.elemento(8)));
                    ui->lbl_pos9->clear();
                    break;
                case 2:
                    lista.remove(pos);
                    ui->lbl_pos2->setText(QString::number(lista.elemento(2)));
                    ui->lbl_pos3->setText(QString::number(lista.elemento(3)));
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
                    ui->lbl_pos6->setText(QString::number(lista.elemento(6)));
                    ui->lbl_pos8->setText(QString::number(lista.elemento(8)));
                    ui->lbl_pos9->clear();
                    break;
                case 3:
                    lista.remove(pos);
                    ui->lbl_pos3->setText(QString::number(lista.elemento(3)));
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
                    ui->lbl_pos6->setText(QString::number(lista.elemento(6)));
                    ui->lbl_pos7->setText(QString::number(lista.elemento(7)));
                    ui->lbl_pos8->setText(QString::number(lista.elemento(8)));
                    ui->lbl_pos9->clear();
                    break;
                case 4:
                    lista.remove(pos);
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
                    ui->lbl_pos6->setText(QString::number(lista.elemento(6)));
                    ui->lbl_pos7->setText(QString::number(lista.elemento(7)));
                    ui->lbl_pos8->setText(QString::number(lista.elemento(8)));
                    ui->lbl_pos9->clear();
                    break;
                case 5:
                    lista.remove(pos);
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
                    ui->lbl_pos6->setText(QString::number(lista.elemento(6)));
                    ui->lbl_pos7->setText(QString::number(lista.elemento(7)));
                    ui->lbl_pos8->setText(QString::number(lista.elemento(8)));
                    ui->lbl_pos9->clear();
                    break;
                case 6:
                    lista.remove(pos);
                    ui->lbl_pos6->setText(QString::number(lista.elemento(6)));
                    ui->lbl_pos7->setText(QString::number(lista.elemento(7)));
                    ui->lbl_pos8->setText(QString::number(lista.elemento(8)));
                    ui->lbl_pos9->clear();
                    break;
                case 7:
                    lista.remove(pos);
                    ui->lbl_pos7->setText(QString::number(lista.elemento(7)));
                    ui->lbl_pos8->setText(QString::number(lista.elemento(8)));
                    ui->lbl_pos9->clear();
                    break;
                case 8:
                    lista.remove(pos);
                    ui->lbl_pos8->setText(QString::number(lista.elemento(8)));
                    ui->lbl_pos9->clear();
                    break;
                case 9:
                    lista.remove(pos);
                    ui->lbl_pos9->clear();
                    break;
                default:
                    ui->label_7->setText("Não é possivel remover, pois a posição está vazia!");
                    delay4();
                    ui->label_7->clear();
                    break;
            }
            break;
        case 10:
            if(pos <= 10){
                ui->line_49->setLineWidth(0);
                ui->line_56->setLineWidth(0);
                ui->line_57->setLineWidth(0);
                ui->line_58->setLineWidth(0);
                ui->line_59->setLineWidth(0);
                ui->line_60->setLineWidth(0);
            }
            switch(pos){
                case 1:
                    lista.remove(pos);
                    ui->lbl_pos1->setText(QString::number(lista.elemento(1)));
                    ui->lbl_pos2->setText(QString::number(lista.elemento(2)));
                    ui->lbl_pos3->setText(QString::number(lista.elemento(3)));
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
                    ui->lbl_pos6->setText(QString::number(lista.elemento(6)));
                    ui->lbl_pos7->setText(QString::number(lista.elemento(7)));
                    ui->lbl_pos8->setText(QString::number(lista.elemento(8)));
                    ui->lbl_pos9->setText(QString::number(lista.elemento(9)));
                    ui->lbl_pos10->clear();
                    break;
                case 2:
                    lista.remove(pos);
                    ui->lbl_pos2->setText(QString::number(lista.elemento(2)));
                    ui->lbl_pos3->setText(QString::number(lista.elemento(3)));
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
                    ui->lbl_pos6->setText(QString::number(lista.elemento(6)));
                    ui->lbl_pos8->setText(QString::number(lista.elemento(8)));
                    ui->lbl_pos9->setText(QString::number(lista.elemento(9)));
                    ui->lbl_pos10->clear();
                    break;
                case 3:
                    lista.remove(pos);
                    ui->lbl_pos3->setText(QString::number(lista.elemento(3)));
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
                    ui->lbl_pos6->setText(QString::number(lista.elemento(6)));
                    ui->lbl_pos7->setText(QString::number(lista.elemento(7)));
                    ui->lbl_pos8->setText(QString::number(lista.elemento(8)));
                    ui->lbl_pos9->setText(QString::number(lista.elemento(9)));
                    ui->lbl_pos10->clear();
                    break;
                case 4:
                    lista.remove(pos);
                    ui->lbl_pos4->setText(QString::number(lista.elemento(4)));
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
                    ui->lbl_pos6->setText(QString::number(lista.elemento(6)));
                    ui->lbl_pos7->setText(QString::number(lista.elemento(7)));
                    ui->lbl_pos8->setText(QString::number(lista.elemento(8)));
                    ui->lbl_pos9->setText(QString::number(lista.elemento(9)));
                    ui->lbl_pos10->clear();
                    break;
                case 5:
                    lista.remove(pos);
                    ui->lbl_pos5->setText(QString::number(lista.elemento(5)));
                    ui->lbl_pos6->setText(QString::number(lista.elemento(6)));
                    ui->lbl_pos7->setText(QString::number(lista.elemento(7)));
                    ui->lbl_pos8->setText(QString::number(lista.elemento(8)));
                    ui->lbl_pos9->setText(QString::number(lista.elemento(9)));
                    ui->lbl_pos10->clear();
                    break;
                case 6:
                    lista.remove(pos);
                    ui->lbl_pos6->setText(QString::number(lista.elemento(6)));
                    ui->lbl_pos7->setText(QString::number(lista.elemento(7)));
                    ui->lbl_pos8->setText(QString::number(lista.elemento(8)));
                    ui->lbl_pos9->setText(QString::number(lista.elemento(9)));
                    ui->lbl_pos10->clear();
                    break;
                case 7:
                    lista.remove(pos);
                    ui->lbl_pos7->setText(QString::number(lista.elemento(7)));
                    ui->lbl_pos8->setText(QString::number(lista.elemento(8)));
                    ui->lbl_pos9->setText(QString::number(lista.elemento(9)));
                    ui->lbl_pos10->clear();
                    break;
                case 8:
                    lista.remove(pos);
                    ui->lbl_pos8->setText(QString::number(lista.elemento(8)));
                    ui->lbl_pos9->setText(QString::number(lista.elemento(9)));
                    ui->lbl_pos10->clear();
                    break;
                case 9:
                    lista.remove(pos);
                    ui->lbl_pos9->setText(QString::number(lista.elemento(9)));
                    ui->lbl_pos10->clear();
                    break;
                case 10:
                    lista.remove(pos);
                    ui->lbl_pos10->clear();
                    break;
                default:
                    ui->label_7->setText("Não é possivel remover, pois a posição está vazia!");
                    delay4();
                    ui->label_7->clear();
                    break;
            }
        break;

    }
}


void ListaEncadeada::on_btn_consult_clicked()
{
    int val = ui->txt_consult_v->text().toInt();
    int pos = ui->txt_consult_p->text().toInt();
    int tam = lista.tamanho();

    ui->txt_consult_p->clear();
    ui->txt_consult_v->clear();
    ui->txt_consult_v->setFocus();

    if(pos != 0 && val != 0){
        ui->label_7->setText("Pesquise usando apenas um dos parâmetros");
        delay4();
        ui->label_7->clear();
    }

    if(pos != 0 && val == 0){
        switch(pos){
            case 1:
                if(tam >= 1){
                    ui->lbl_pos1->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
                    delay4();
                    ui->lbl_pos1->setStyleSheet("QLabel { background-color :  ; color : ; }");
                }else{
                    ui->label_7->setText("Posição inexistente!");
                    delay4();
                    ui->label_7->clear();
                }
            break;
            case 2:
                if(tam >= 2){
                    ui->lbl_pos2->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
                    delay4();
                    ui->lbl_pos2->setStyleSheet("QLabel { background-color :  ; color : ; }");
                }else{
                    ui->label_7->setText("Posição inexistente!");
                    delay4();
                    ui->label_7->clear();
                }
            break;
            case 3:
                if(tam >= 3){
                    ui->lbl_pos3->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
                    delay4();
                    ui->lbl_pos3->setStyleSheet("QLabel { background-color :  ; color : ; }");
                }else{
                    ui->label_7->setText("Posição inexistente!");
                    delay4();
                    ui->label_7->clear();
                }
            break;
            case 4:
                if(tam >= 4){
                    ui->lbl_pos4->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
                    delay4();
                    ui->lbl_pos4->setStyleSheet("QLabel { background-color :  ; color : ; }");
                }else{
                    ui->label_7->setText("Posição inexistente!");
                    delay4();
                    ui->label_7->clear();
                }
            break;
            case 5:
                if(tam >= 5){
                    ui->lbl_pos5->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
                    delay4();
                    ui->lbl_pos5->setStyleSheet("QLabel { background-color :  ; color : ; }");
                }else{
                    ui->label_7->setText("Posição inexistente!");
                    delay4();
                    ui->label_7->clear();
                }
            break;
            case 6:
                if(tam >= 6){
                    ui->lbl_pos6->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
                    delay4();
                    ui->lbl_pos6->setStyleSheet("QLabel { background-color :  ; color : ; }");
                }else{
                    ui->label_7->setText("Posição inexistente!");
                    delay4();
                    ui->label_7->clear();
                }
            break;
            case 7:
                if(tam >= 7){
                    ui->lbl_pos7->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
                    delay4();
                    ui->lbl_pos7->setStyleSheet("QLabel { background-color :  ; color : ; }");
                }else{
                    ui->label_7->setText("Posição inexistente!");
                    delay4();
                    ui->label_7->clear();
                }
            break;
            case 8:
                if(tam >= 8){
                    ui->lbl_pos8->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
                    delay4();
                    ui->lbl_pos8->setStyleSheet("QLabel { background-color :  ; color : ; }");
                }else{
                    ui->label_7->setText("Posição inexistente!");
                    delay4();
                    ui->label_7->clear();
                }
            break;
            case 9:
                if(tam >= 9){
                    ui->lbl_pos9->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
                    delay4();
                    ui->lbl_pos9->setStyleSheet("QLabel { background-color :  ; color : ; }");
                }else{
                    ui->label_7->setText("Posição inexistente!");
                    delay4();
                    ui->label_7->clear();
                }
            break;
            case 10:
                if(tam >= 10){
                    ui->lbl_pos10->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
                    delay4();
                    ui->lbl_pos10->setStyleSheet("QLabel { background-color :  ; color : ; }");
                }else{
                    ui->label_7->setText("Posição inexistente!");
                    delay4();
                    ui->label_7->clear();
                }
            break;

        }
    }

    if(pos == 0 && val != 0){
            pos = lista.posicao(val);
            if(pos == -1){
                ui->label_7->setText("Valor pesquisado não encontrado!");
                delay4();
                ui->label_7->clear();
            }
            switch(pos){
                case 1:
                    if(tam >= 1){
                        ui->lbl_pos1->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
                        delay4();
                        ui->lbl_pos1->setStyleSheet("QLabel { background-color :  ; color : ; }");
                    }
                break;
                case 2:
                    if(tam >= 2){
                        ui->lbl_pos2->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
                        delay4();
                        ui->lbl_pos2->setStyleSheet("QLabel { background-color :  ; color : ; }");
                    }
                break;
                case 3:
                    if(tam >= 3){
                        ui->lbl_pos3->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
                        delay4();
                        ui->lbl_pos3->setStyleSheet("QLabel { background-color :  ; color : ; }");
                    }
                break;
                case 4:
                    if(tam >= 4){
                        ui->lbl_pos4->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
                        delay4();
                        ui->lbl_pos4->setStyleSheet("QLabel { background-color :  ; color : ; }");
                    }
                break;
                case 5:
                    if(tam >= 5){
                        ui->lbl_pos5->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
                        delay4();
                        ui->lbl_pos5->setStyleSheet("QLabel { background-color :  ; color : ; }");
                    }
                break;
                case 6:
                    if(tam >= 6){
                        ui->lbl_pos6->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
                        delay4();
                        ui->lbl_pos6->setStyleSheet("QLabel { background-color :  ; color : ; }");
                    }
                break;
                case 7:
                    if(tam >= 7){
                        ui->lbl_pos7->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
                        delay4();
                        ui->lbl_pos7->setStyleSheet("QLabel { background-color :  ; color : ; }");
                    }
                break;
                case 8:
                    if(tam >= 8){
                        ui->lbl_pos8->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
                        delay4();
                        ui->lbl_pos8->setStyleSheet("QLabel { background-color :  ; color : ; }");
                    }
                break;
                case 9:
                    if(tam >= 9){
                        ui->lbl_pos9->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
                        delay4();
                        ui->lbl_pos9->setStyleSheet("QLabel { background-color :  ; color : ; }");
                    }
                break;
                case 10:
                    if(tam >= 10){
                        ui->lbl_pos10->setStyleSheet("QLabel { background-color : green ; color : yellow; }");
                        delay4();
                        ui->lbl_pos10->setStyleSheet("QLabel { background-color :  ; color : ; }");
                    }
                break;
            }

    }

}

