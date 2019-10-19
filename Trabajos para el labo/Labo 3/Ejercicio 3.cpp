#include <iostream>
#include <string>
#include <stack>
using namespace std;

struct LibrosCa{
    string librito;
    int numPaginas;
};

void buscarLibrito(stack<LibrosCa> librito, string titulo){
	if (librito.empty()){
		cout << "El libro NO se encontro" << endl;
	}
	else{
        if(librito.top().libro == titulo){
    	    cout << "Numero de paginas que tiene el libro que buscar: " << librito.top().numPaginas << endl;
        }else{
            librito.pop();
            buscarLibrito(librito, titulo);
        }
	}
}

int main(){
	stack<LibrosCa> libros;

    cout << "Libros disponibles en forma de pila" << endl;
    getline(cin, librito)

    book1.libritos = "libro1";
    book1.numPaginas = 5;

    book2.libritos = "libro2";
    book2.numPaginas = 10;

    book3.libritos = "libro3";
    book3.numPaginas = 15;

    book4.libritos = "libro4";
    bool4.numPaginas = 20;

    book5.libritos = "libro5";
    book5.numPaginas = 25;

	libros.push(book1);
	libros.push(book2);
	libros.push(book3);
	libros.push(book4);
	libros.push(book5);

    string librito;
    cout << "Digita el libro que buscas: " << endl;
    cin >> librito;

    BuscarLibro(libros, librito);

    return 0;
}
