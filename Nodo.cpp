#include "Nodo.h"

Nodo::Nodo(int num)
{
    this->num=num;
    this->hijo_der=0;
    this->hijo_izq=0;
}

Nodo::~Nodo()
{
    //dtor
}
