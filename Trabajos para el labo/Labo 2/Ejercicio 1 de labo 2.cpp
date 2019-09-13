#include <iostream>

using namespace std;

void mcd(int x, int y){

    if(x%y == 0){
        cout << "El mcd es: " << y << endl;
    }
    else{
        int valor = y;
        int residuo = x%y;
        mcd(valor, residuo);
    }

}

int main(){
    int mayor;
    int menor;

    cout << "Ingresar valor mayor: ";
    cin >> mayor;
    cout << "Ingresar valor menor: ";
    cin >> menor;

    mcd(mayor, menor);

}
