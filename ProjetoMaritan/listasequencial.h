#ifndef LISTASEQUENCIAL_H
#define LISTASEQUENCIAL_H

#include <QDialog>
#include "listaseq.h"

namespace Ui {
class ListaSequencial;
}

class ListaSequencial : public QDialog
{
    Q_OBJECT

public:
    explicit ListaSequencial(QWidget *parent = nullptr);
    ~ListaSequencial();
    int add;
    int rem;

    ListaSeq lista;

private slots:
    void on_btn_adicionar_clicked();

    void on_btn_remove_clicked();

    void on_btn_consult_clicked();

private:
    Ui::ListaSequencial *ui;
};

#endif // LISTASEQUENCIAL_H
