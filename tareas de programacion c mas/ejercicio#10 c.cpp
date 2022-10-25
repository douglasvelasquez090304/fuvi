/*
Nombre del archivo: ejercicio#10
Autor: Douglas Velasquez
Instrucciones: si es bachiller 
*/

#include<iostream>
using namespace std;


int main() {
	string bachiller;
	string prueba_acceso;
	cout << "¿Tienes el titulo de bachiller?" << endl;
	cin >> bachiller;
	if ((bachiller=="si")) {
		cout << "Puedes acceder al grado superior" << endl;
	} else {
		cout << "¿Tienes la prueba de acceso superada?" << endl;
		cin >> prueba_acceso;
		if ((prueba_acceso=="si")) {
			cout << "Puedes acceder al grado superior" << endl;
		} else {
			cout << "No puedes acceder a un grado superior" << endl;
		}
	}
	cout << "¿Tienes el titulo de bachiller?" << endl;
	cin >> bachiller;
	if ((bachiller=="si")) {
		cout << "Puedes acceder al grado superior" << endl;
	} else {
		cout << "¿Tienes la prueba de acceso superada?" << endl;
		cin >> prueba_acceso;
		if ((prueba_acceso=="si")) {
			cout << "Puedes acceder al grado superior" << endl;
		} else {
			cout << "No puedes acceder a un grado superior" << endl;
		}
	}
	cout << "Espero que la haya gustado nuestra aplicacion <3" << endl;
	return 0;
}

