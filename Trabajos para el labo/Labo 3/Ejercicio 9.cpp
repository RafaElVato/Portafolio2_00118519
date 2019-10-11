#include <iostream>
#include <string>
using namespace std;


struct TRegistro{
    int carnet;
    string nombre;
    string apellido;
    int edad;
    int numeroTelef;
    string correoElec;

};
typedef struct TRegistro Registros;

Registros solicitarRegistro(){
    Registros p;

    cout << "Carnet: ";
    cin >> p.carnet;
    cin.ignore();
    cout << "Nombre: ";
    getline(cin, p.nombre);
    cout << "Apellido: ";
    getline(cin, p.apellido);
    cout << "Edad: ";
    cin >> p.edad;
    cout << "Numero de telefono: ";
    cin >> p.numeroTelef;
    cin.ignore();
    cout << "Correo electronico: ";
    getline(cin, p.correoElec);

    return p;
}

void mostrarRegistro(Registros p){
    cout << "Carnet: " << p.carnet << endl;
    cout << "Nombre: " << p.nombre << endl;
    cout << "Apellido: " << p.apellido << endl;
    cout << "Edad: " << p.edad << endl;
    cout << "Numero de telefono: " << p.numeroTelef << endl;
    cout << "Correo electronico: " << p.correoElec << endl;
}

struct TNodo{
    Registros dato;
    struct TNodo *sig;
};
typedef struct TNodo Nodo;
Nodo *pInicio;

void insertarInicio(Registros p) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = pInicio;

    pInicio = nuevo;
}

void insertarFinal(Registros p) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = NULL;

    if (pInicio == NULL) {
        pInicio = nuevo;
    } else {
        Nodo *p = pInicio;
        Nodo *q = NULL;
        while (p != NULL) {
            q = p;
            p = p->sig;
        }
        q->sig = nuevo;
    }
}

void insertarDespuesDe(Registros p) {
    int unCarnet = 0;
    cout << "Numero de carnet: ";
    cin >> unCarnet;

    Nodo *s = pInicio;

    while(s != NULL && (s->dato).carnet != unCarnet)
        s = s->sig;
    if(s == NULL){
        cout << "El numero de carnet NO existe" << endl;
        return;
    }

    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = s->sig;

    s->sig = nuevo;
    cout << "Carnet ingresado" << endl;
}

void insertarAntesDe(Registros p) {
    int unCarnet = 0;
    cout << "Numero de carnet de referencia: ";
    cin >> unCarnet;

    Nodo *s = pInicio, *q = NULL;

    while(s != NULL && (s->dato).carnet != unCarnet){
        q = s;
        s = s->sig;
    }
    if(s == NULL){
        cout << "El numero de carnet NO existe" << endl;
        return;
    }

    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = s;

    if(q == NULL)
        pInicio = nuevo;
    else
        q->sig = nuevo;
    cout << "Carnet ingresado" << endl;
}

void agregarRegistro(){
    Registros p = solicitarRegistro();
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
            << "\n\t3) Despues de\n\t4) Antes de"
            << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: insertarInicio(p);  continuar = false;
            break;
            case 2: insertarFinal(p);   continuar = false;
            break;
            case 3: insertarDespuesDe(p);   continuar = false;
            break;
            case 4: insertarAntesDe(p);   continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
}

void mostrarLista() {
    Nodo *s = pInicio;

    while (s != NULL) {
        mostrarRegistro(s->dato);
        s = s->sig;
    }
}

void eliminarRegistro(){
    int unCarnet = 0;
    cout << "Registro a eliminar: ";
    cin >> unCarnet;

    Nodo *p = pInicio, *q = NULL;

    while(p != NULL && (p->dato).carnet != unCarnet){
        q = p;
        p = p->sig;
    }
    if(p == NULL){
        cout << "Libro a borrar NO existe" << endl;
        return;
    }
    if(q == NULL)
        pInicio = p->sig;
    else
        q->sig = p->sig;
    delete(p);
    cout << "Se ha borrado el registro" << endl;
}

bool buscarRegistro() {
    int unCarnet = 0;
    cout << "Registro a buscar: ";
    cin >> unCarnet;

    Nodo *s = pInicio;

    while(s != NULL && (s->dato).carnet != unCarnet)
        s = s->sig;

    return (s != NULL);
}

int main(){
    cout << "Inicializando..." << endl;
    pInicio = NULL;

    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar registro\n\t2) Ver registro"
            << "\n\t3) Eliminar registro\n\t4) Buscar registro"
            << "\n\t5) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: cout << "Agregando..." << endl;
                agregarRegistro();
            break;
            case 2: cout << "Listando..." << endl;
                mostrarLista();
            break;
            case 3: cout << "Eliminando..." << endl;
                eliminarRegistro();
            break;
            case 4: cout << "Buscando..." << endl;
                if(buscarRegistro())
                    cout << "El registro SI se encuentra" << endl;
                else
                    cout << "El registro NO se encuentra" << endl;
            break;
            case 5: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);

    return 0;
}
