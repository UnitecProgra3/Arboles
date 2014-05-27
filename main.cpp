#include <iostream>
#include "Arbol.h"

using namespace std;

int main()
{
    Arbol arbol;

    arbol.imprimir(arbol.raiz);

    cout<<arbol.existe(arbol.raiz,8);
    cout<<arbol.existe(arbol.raiz,3);

    return 0;
}
