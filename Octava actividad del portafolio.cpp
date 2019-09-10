#include <iostream>
#include <string>

using namespace std;

//ejercicio 1
/*
struct Tpila{
    float elements[100];
    int top;
};
typedef struct Tpila Pila;

void initialize(Pila *s){
    s->top = -1;
}

bool empty(Pila *s){
    return s->top < 0;
}

float ultimoElto(Pila *s){
    if(s->top >= 0){
        *e = s->elements[s->top];
        (s->top)--;
    }

}

int main() {
    Pila unaPila;
    initialize(&unaPila);
    float x = 5.6;
    push(&unaPila, x);

    float y = 8.9;
    push(&unaPila, y);

    float z = 24.3;
    push(&unaPila, z);

    ultimoElto(&unaPila z);
    ultimoElto(&unaPila y);

    cout << x << endl;

    ultimoElto(&unaPila x);

    if(empty(&unaPila))
        cout << "Esta vacia" << endl;

}
*/

double arreglo[3];

struct Tpila{
    float elements[100];
    int top;
};
typedef struct Tpila Pila;

void initialize(Pila *s){
    s->top = -1;
}

void recursion(double x){
    if(x == 24.3){
        arreglo[3] = 24.3;
    }
    if(x == 8.9){
        arreglo[3] = 8.9;
    }
    else{
        cout << "Valor del fondo de la pila: " << x << endl;
    }

}

bool empty(Pila *s){
    return s->top < 0;
}

void push(Pila *s, double e){
    if(s->top < 99){
        (s->top)++;
        s->elements[s->top] = e;
    }
}

void pop(Pila *s, double *e){
    if(s->top >= 0){
        *e = s->elements[s->top];
        (s->top)--;
    }
}

void ultiElem(Pila *s, double *e){
    if(*e = 24.3){
     if(s->top >= 0){
        *e = s->elements[s->top];
        (s->top)--;
    }
    }
    if(*e = 8.9){
     if(s->top >= 0){
        *e = s->elements[s->top];
        (s->top)--;
    }
    }
    recursion(*e);


}

int main() {
    Pila unaPila;
    initialize(&unaPila);

    double y = 5.3;
    push(&unaPila, y);

    double x = 8.9;
    push(&unaPila, x);

    double z = 24.3;
    push(&unaPila, z);

    if(empty(&unaPila)){
        cout << "Esta vacia" << endl;
    }
    else{
        cout << "Tiene elementos dentro" << endl;
    }

    ultiElem(&unaPila, &z);
    ultiElem(&unaPila, &y);
    ultiElem(&unaPila, &x);

    push(&unaPila, arreglo[1]);
    push(&unaPila, arreglo[2]);


    if(empty(&unaPila)){
        cout << "Esta vacia" << endl;
    }
    else{
        cout << "Tiene elementos dentro" << endl;

    }
 }

