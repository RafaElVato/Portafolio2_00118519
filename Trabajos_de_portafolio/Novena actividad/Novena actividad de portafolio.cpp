//Actividad basada en el portafolio numero 8
#include <iostream>
#include <stack>

using namespace std;
//ejercicio 1 donde se muestra la pila completamente vacia
/*
int main(){
    stack<int> s;
    bool empty();

    s.push(85);
    s.push(22);
    s.push(45);
    s.pop();
    s.pop();
    s.pop();

    if(s.empty() == true){
    cout << "Esta vacio" << endl;
    }
    else{
    cout << "Tiene valores dentro" << endl;
    }


return 0;
}
*/
//ejercicio 2 para imprimir el ultimo valor que esta ingresado en la pila
int main(){
    stack<int> s;
    bool empty();

    s.push(24);
    s.push(2);
    s.push(34);
    s.push(78);

    if(s.empty() == true){
        cout << "Esta vacia" << endl;
    }
    else{
        cout << "Tiene valores dentro" << endl;
    }

    s.pop();
    s.pop();
    s.pop();

    cout << s.top() << endl;
    s.push(2);
    s.push(34);
    s.push(78);



return 0;

}
