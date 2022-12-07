#ifndef LISTAENCADEADA_H
#define LISTAENCADEADA_H
#include "lse.h"

#include <QDialog>

namespace Ui {
class ListaEncadeada;
}

class ListaEncadeada : public QDialog
{
    Q_OBJECT

public:
    explicit ListaEncadeada(QWidget *parent = nullptr);
    ~ListaEncadeada();

    LSE lista;

private slots:
    void on_btn_adicionar_clicked();

    void on_btn_remove_clicked();

    void on_btn_consult_clicked();

private:
    Ui::ListaEncadeada *ui;
};

#endif // LISTAENCADEADA_H
