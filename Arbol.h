#ifndef ARBOL_H
#define ARBOL_H

#include <iostream>
#include "Nodo.h"
using namespace std;

class Arbol
{
    public:
        Nodo*raiz;
        Arbol();
        void imprimir(Nodo*raiz);
        bool existe(Nodo*raiz,int num);
        virtual ~Arbol();
    protected:
    private:
};

#endif // ARBOL_H
