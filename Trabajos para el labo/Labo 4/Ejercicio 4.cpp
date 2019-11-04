#include <iostream>
#include <string>

using namespace std;

struct Tlista{
    int num;
    int pares;
    int impares;
};

typedef struct Tlista Lista;

Lista agregarNum(){
    Lista p;
    cout << "Numero a ingresar: ";
    cin >> p.num;
    if(p.num%2 == 0){
        cin >> p.pares;
    }
    else{
        cin >> p.impares;
    }

return p;
}

struct TNodo{
    Lista dato;
    struct TNodo *sig;

};

typedef struct TNodo Nodo;

Nodo *pInicio;

Nodo paresPosi

void sumarPares(Lista &p){
    Lista m =

}

int main(){
    int opc = 0;
    bool continuar = true;

    cout << "1)Agregar numero\n";
    cout << "2)Sumar valor pares\n";
    cout << "3)Sumar valor impares\n";
    cout << "4)Salir" << endl;
    cin >> opc;

    switch(opc){

    case 1: cout << "Agregando..." << endl; agregarNum(); break;

    case 2: cout << "Sumando numeros pares..." << endl; sumadosP(); break;

    case 3: cout << "Sumando numeros impares..." << endl; sumadosI(); break;

    case 4: continuar = true; break;

    default: cout << "ERROR" << endl; break;

    }while(continuar);



return 0;
}
