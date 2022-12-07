#include "ABP.h"

No_ABP::No_ABP(){

    this->esq = nullptr;
    this->dir = nullptr;
}
No_ABP::No_ABP(int conteudo){
    this->conteudo = conteudo;
    this->esq = nullptr;
    this->dir = nullptr;
}
No_ABP::~No_ABP(){}

int No_ABP::getConteudo(){
    return this->conteudo;
}
int No_ABP::getIndex(){
    return this->index;
}
No_ABP *No_ABP::getEsq(){
    return this->esq;
}
No_ABP *No_ABP::getDir(){
    return this->dir;
}

void No_ABP::setConteudo(int conteudo){
    this->conteudo = conteudo;
}
void No_ABP::setIndex(int index){
    this->index = index;
}
void No_ABP::setEsq(No_ABP *esq){
    this->esq = esq;
}
void No_ABP::setDir(No_ABP *dir){
    this->dir = dir;
}

/*--------------------------------------------------------*/

ABP::ABP(){ this->raiz = nullptr;
    this->tam = 0;
}

ABP::~ABP(){}

/* Verifica se a árvore está vazia */
bool ABP::vazia(){ return (raiz == nullptr); }

/**Buscar recursivamente a partir da raiz.
    Retorna o endereço se o elemento for
    encontrado, caso contrário retorna NULL*/
No_ABP *ABP::busca(No_ABP *T, int valor){
    if(T == nullptr){
        return nullptr;
    }
    if(T->getConteudo() == valor){
        return T;
    }
    if(valor < T->getConteudo()){
        return busca(T->getEsq(), valor);
    }else{
        return busca(T->getDir(), valor);
    }
}

No_ABP *ABP::buscaIndex(No_ABP *T, int index){
    if(T == nullptr){
        return nullptr;
    }
    if(T->getIndex() == index){
        return T;
    }
    No_ABP *aux = buscaIndex(T->getEsq(), index);
    if(aux == nullptr){
        return buscaIndex(T->getDir(), index);
    }
}

/**Buscar um elemento na ABP
    Retorna o endereço se o elemento for
    encontrado, caso contrário retorna NULL*/
No_ABP *ABP::busca(int valor){
    return busca(raiz, valor);
}

No_ABP *ABP::buscaIndex(int index){
    return buscaIndex(raiz, index);
}

/**Insere um nó em uma árvore ABP
    Retorna 1 se a inserção for com sucesso.
    Caso contrário retorna 0*/
bool ABP::insere(int valor){
    No_ABP *novoNo = new No_ABP();
    int index;

    novoNo->setConteudo(valor);
    novoNo->setEsq(nullptr);
    novoNo->setEsq(nullptr);

    // Quando a arvore estiver vazia, o novo Nó será a raiz da arv
    if(raiz == nullptr){
        raiz = novoNo;
        raiz->setIndex(1);
        tam++;
        return true;
    }

    // Procura a posicao correta pra inserir o novo no
    No_ABP *aux = raiz;
    No_ABP *p = nullptr;
    while(aux != nullptr){
        p = aux;
        if(valor < aux->getConteudo()){
            aux = aux->getEsq();
        }else{
            aux = aux->getDir();
        }
    }

    // Encontrou um nó folha para inserir
    if(valor < p->getConteudo()){
        index = (p->getIndex())*2;
        if(index > 15){ return false; }
        p->setEsq(novoNo);
        p->getEsq()->setIndex(index);
    }else{
        index = ((p->getIndex())*2)+1;
        if(index > 15){ return false; }
        p->setDir(novoNo);
        p->getDir()->setIndex(index);
    }
    tam++;
    return true;
}

bool ABP::remove(int valor){
    int indice = busca(valor)->getIndex();

    if(indice == 1){
        No_ABP *raiz = buscaIndex(indice);
        raiz->setConteudo(0);
    }else if( (indice % 2) == 0 ){
        indice = indice / 2;
        No_ABP *raiz = buscaIndex(indice);
        raiz->setEsq(nullptr);
    }else{
        indice = (indice - 1) / 2;
        No_ABP *raiz = buscaIndex(indice);
        raiz->setDir(nullptr);
    }
    tam--;
    return true;
}

int ABP::tamanho(){
    return tam;
}
