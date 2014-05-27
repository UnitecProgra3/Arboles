#include "Arbol.h"

Arbol::Arbol()
{
    raiz = 0;

    Nodo *n1 = new Nodo(1);
    Nodo *n2 = new Nodo(2);
    Nodo *n3 = new Nodo(3);
    Nodo *n4 = new Nodo(4);
    Nodo *n5 = new Nodo(5);

    n1->hijo_izq = n2;
    n1->hijo_der = n3;

    n2->hijo_izq = n4;
    n2->hijo_der = n5;

    raiz=n1;
}

Arbol::~Arbol()
{
    //dtor
}

void Arbol::imprimir(Nodo* raiz)
{
    if(raiz==0)
        return;

    cout<<raiz->num<<endl;

    imprimir(raiz->hijo_izq);
    imprimir(raiz->hijo_der);
}

bool Arbol::existe(Nodo* raiz, int num)
{
    if(raiz==NULL)
        return false;

    if(raiz->num == num)
        return true;

    return existe(raiz->hijo_izq,num) || existe(raiz->hijo_der,num);
}
