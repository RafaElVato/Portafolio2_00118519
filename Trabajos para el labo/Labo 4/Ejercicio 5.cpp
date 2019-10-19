#include <iostream>
using namespace std;

struct nodo{
    int dato;
    nodo *sig;
};

class list{
private:
    nodo *pInicio;

public:
    list(void);
    void agregar(int);
    void mostrarLista(void);
    void inversa(void);
    void mostrarAlreves(nodo *);

};

list::list(void) {
    pInicio = NULL;
}

void list::agregar(int dato) {
    nodo *p, *q;

    nodo *nuevo = new nodo;
    nuevo->dato = dato;
    nuevo->sig = NULL;
    if (pInicio == NULL) {
        pInicio = nuevo;
    } else {
        p = pInicio;
        q = NULL;
        while (p != NULL) {
            q = p;
            p = p->sig;
        }
        q->sig = nuevo;
    }
}

void list::mostrarLista(void) {
    nodo *s = pInicio;
    while (s != NULL) {
        cout << s->dato << ",";
        s = s->sig;
    }
}

void list::inversa(void) {
    mostrarAlreves(pInicio);
}

void list::mostrarAlreves(nodo *s) {
    if (s != NULL) {
        mostrarAlreves(s->sig);
        cout << s->dato << ",";
    }
}


int main(void)
{
    list lista;
    lista.agregar(1);
    lista.agregar(2);
    lista.agregar(3);
    lista.agregar(4);
    lista.agregar(5);

    cout << "Items de la lista:" << endl;
    lista.mostrarLista();
    cout << endl << "Items de la lista en orden inverso:" << endl;
    lista.inversa();

    return 0;
}
