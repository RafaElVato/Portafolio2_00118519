#include <iostream>
#include <vector>
using namespace std;

struct TOrden{
    int revueltas;
    int frijoConQueso;
    int queso;
    bool arroz;
};
typedef struct TOrden Orden;

Orden solicitarOrden(){
    Orden p;

    cout << "¿Cuantas revueltas?: "; cin >> p.revueltas;
    cout << "¿Cuantas de frijol con queso?: "; cin >> p.frijoConQueso;
    cout << "¿Cuantas de queso?: "; cin >> p.queso;
    return p;
}

void mostrarOrden(Orden p){
    cout << "Cantidad de revueltas: " << p.revueltas << endl;
    cout << "Cantidad de frijol con queso: " << p.frijoConQueso << endl;
    cout << "Cantidad de queso: " << p.queso << endl;
    cout << "De arroz las pupusas" << endl;
    cout << endl;
}

vector<Orden> lista;

void agregarOrden(){
    Orden p = solicitarOrden();
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
            << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: lista.insert(lista.begin(), p);
                continuar = false;
            break;
            case 2: lista.push_back(p);
                continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
}

void mostrarLista() {
    for (int i = 0; i < lista.size(); i++)
        mostrarOrden(lista[i]);
}

int main(){
    cout << "Inicializando..." << endl;

    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar Orden\n\t2) Ver Ordenes"
            << "\n\t3) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: cout << "Agregando..." << endl;
                agregarOrden();
            break;
            case 2: cout << "Listando..." << endl;
                mostrarLista();
            break;
            case 3: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);

    return 0;
}
