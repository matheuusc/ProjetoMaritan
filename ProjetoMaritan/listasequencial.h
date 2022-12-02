#ifndef LISTASEQUENCIAL_H
#define LISTASEQUENCIAL_H

#include <QDialog>

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

    int getAdd();
    int getRem();

private slots:
    void on_btn_adicionar_clicked();

    void on_btn_remove_clicked();

private:
    Ui::ListaSequencial *ui;
};

#endif // LISTASEQUENCIAL_H
