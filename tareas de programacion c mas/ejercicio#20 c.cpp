/*
Nombre del archivo: ejercicio#20
Autor: Douglas Velasquez
Instrucciones: cuadro con datos del usuario
*/

#include<iostream>
using namespace std;


int main() {
	int a;
	int b;
	int n;
	// datos de entrada 
	cout << "Escribe un numero" << endl;
	cin >> n;
	for (a=1;a<=n;a++) {
		for (b=1;b<=n;b++) {
			if (a>1 && a<n && b>1 && b<n) {
				cout << "  ";
			} else {
				cout << "* ";
			}
		}
		cout << "" << endl;
	}
	cout << "Espero que la haya gustado nuestra aplicacion <3" << endl;
	return 0;
}

