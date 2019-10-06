#include <iostream>

using namespace std;

void arregloCircular(){
int ultimosCincoNum[5] = {0};
int empiezaAqui = 0;

    for(int i = 1; i <= 7; i++){
        ultimosCincoNum[empiezaAqui] = i;
        empiezaAqui++;
        if(empiezaAqui == 5){
            empiezaAqui = 0;
        }
    }

    for(int i = 0; i < 5; i++){
        cout << ultimosCincoNum[i] << endl;
    }

}

int main(){

arregloCircular();

return 0;
}

