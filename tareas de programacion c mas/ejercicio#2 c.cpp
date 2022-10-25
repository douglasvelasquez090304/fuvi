/*
Nombre del archivo: ejercicio#3
Autor: Douglas Velasquez
Instrucciones: identificar el mayor  
*/
#include<iostream>
using namespace std;

int main() {
	int a;
	int b;
	cout << "Ingrese un numero:" << endl;
	cin >> a;
	cout << "Ingrese un numero:" << endl;
	cin >> b;
	if (a>b) {
		cout << "Este numero es mayor:" << a << endl;
	} else {
		cout << "Este numero es mayor:" << b << endl;
	}
	cout << "Gracia por usar nuestra aplicacion <3" << endl;
	return 0;
}

