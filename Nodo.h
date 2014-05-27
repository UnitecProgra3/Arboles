#ifndef NODO_H
#define NODO_H


class Nodo
{
    public:
        int num;
        Nodo *hijo_der, *hijo_izq;
        Nodo(int num);
        virtual ~Nodo();
    protected:
    private:
};

#endif // NODO_H
