/*
Nombre del archivo: ejercicio#15
Autor: Douglas Velasquez
Instrucciones: contraseña intentos 
*/

#include<iostream>
using namespace std;


int main() {
	int contador;
	string contrasena;
	
	contador = 1;
	while (contador<=3) {
		cout << "Ingresa una contraseña" << endl;
		cin >> contrasena;
		if (contrasena=="tuani") {
			cout << "La contraseña es correcta" << endl;
			contador = 4;
		} else {
			if (contador==3) {
				cout << "Has fallado los 3 intentos" << endl;
			} else {
				cout << "La contraseña es incorrecta" << endl;
			}
		}
		contador = contador+1;
	}
	cout << "Espero que la haya gustado nuestra aplicacion <3" << endl;
	return 0;
}

