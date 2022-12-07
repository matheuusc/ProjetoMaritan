#ifndef PILHA_H
#define PILHA_H

#include <QDialog>
#include "pilhaseq.h"

namespace Ui {
class Pilha;
}

class Pilha : public QDialog
{
    Q_OBJECT

public:
    explicit Pilha(QWidget *parent = nullptr);
    ~Pilha();

    PilhaSeq pilha;

private slots:
    void on_btn_add_clicked();

    void on_btn_remove_clicked();

    void on_btn_topo_clicked();

private:
    Ui::Pilha *ui;
};

#endif // PILHA_H
