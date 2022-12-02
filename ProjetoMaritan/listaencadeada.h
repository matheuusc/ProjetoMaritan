#ifndef LISTAENCADEADA_H
#define LISTAENCADEADA_H

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

private:
    Ui::ListaEncadeada *ui;
};

#endif // LISTAENCADEADA_H
