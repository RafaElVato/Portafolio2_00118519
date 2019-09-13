#include <iostream>

using namespace std;

int arreglo[] = {1, 3, 4, 5, 17, 18, 31, 33};

int recibir(int x, int low, int high){

    if(low > high){
        return(-1);}
    int mid = (low + high)/2;
    if(x == arreglo[mid]){
        return(mid);
    }
    if(x < arreglo[mid]){
        return recibir(x, low, mid-1);
    }
    else{
        return recibir(x, mid+1, high);
    }
}


int main(){
    int low = 0;
    int high = 8-1;
    int x= 0;
    cout << "Ingrese el valor a buscar: ";
    cin >> x;
   if(x>=0){
     int i = recibir(x, low, high);

    if(i == -1){
        cout << "El elemento no se a encontrado" << endl;
    }
    else{
        cout << "El elemento se encuentra en la casilla: " << i << endl;
    }
   }
    else{
        cout << "ERROR" << endl;    }
}
