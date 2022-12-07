#ifndef ABP_H
#define ABP_H

class No_ABP{
    private:
        int conteudo;
        int index;
        No_ABP *esq;
        No_ABP *dir;

    public:
        No_ABP();
        No_ABP(int conteudo);
        ~No_ABP();

        int getConteudo();
        int getIndex();
        No_ABP *getEsq();
        No_ABP *getDir();

        void setConteudo(int conteudo);
        void setIndex(int index);
        void setEsq(No_ABP *esq);
        void setDir(No_ABP *dir);
};

class ABP{
    private:
        No_ABP *raiz;
        int tam;

        No_ABP *busca(No_ABP *T, int valor);
        No_ABP *buscaIndex(No_ABP *T, int index);
        No_ABP *buscaPai(No_ABP *T, int valor);

    public:
        ABP();
        ~ABP();

        bool vazia();
        No_ABP *busca(int valor);
        No_ABP *buscaIndex(int index);
        No_ABP *buscaPai(int valor);
        bool insere(int valor);
        bool remove(int valor);
        int tamanho();
};

#endif // ABP_H
