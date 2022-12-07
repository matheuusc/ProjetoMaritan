#ifndef ARVORE_H
#define ARVORE_H

#include <QDialog>
#include "listaseq.h"

namespace Ui {
class Arvore;
}

class Arvore : public QDialog
{
    Q_OBJECT

public:
    explicit Arvore(QWidget *parent = nullptr);
    ~Arvore();
    ListaSeq arvore;

private slots:
    void on_btn_add_clicked();

    void on_btn_consult_clicked();

private:
    Ui::Arvore *ui;
};

#endif // ARVORE_H
