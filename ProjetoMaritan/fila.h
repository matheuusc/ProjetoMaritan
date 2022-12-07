#ifndef FILA_H
#define FILA_H

#include <QDialog>
#include "filaseq.h"

namespace Ui {
class Fila;
}

class Fila : public QDialog
{
    Q_OBJECT

public:
    explicit Fila(QWidget *parent = nullptr);
    ~Fila();

    FilaSeq fila;


private slots:
    void on_btn_add_clicked();

    void on_btn_remove_clicked();

    void on_btn_ultimo_clicked();

private:
    Ui::Fila *ui;
};

#endif // FILA_H
