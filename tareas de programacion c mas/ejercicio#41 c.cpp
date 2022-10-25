/*
Nombre del archivo: ejercicio#41
Autor: Douglas Velasquez
Instrucciones: Precio de gasolina por litro
*/

#include<iostream>
using namespace std;

int main() {
	float f;
	float h;
	float l;
	float n;
	int op;
	do {
		cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
		cout << "Eliga una opción" << endl;
		cout << " 1. Gasolina Regular: C$32.85" << endl;
		cout << " 2. Gasolina Súper: C$33.48" << endl;
		cout << " 3. Gasolina Diesel: C$28.45" << endl;
		cout << "ELIJA UNA OPCION: ";
		cin >> op;
		switch (op) {
		case 1:
			cout << "Cuantos litros desea: ";
			cin >> l;
			cout << "" << endl;
			f = l*32.85;
			cout << "Su costo sera: " << f << endl;
			break;
		case 2:
			cout << "Cuantos litros desea: ";
			cin >> l;
			cout << "" << endl;
			n = l*33.48;
			cout << "Su costo sera: " << n << endl;
			break;
		case 3:
			cout << "Cuantos litros desea: ";
			cin >> l;
			cout << "" << endl;
			h = l*28.45;
			cout << "Su costo sera: " << h << endl;
			break;
		}
	} while (op!=3);
	cout << "Espero que la haya gustado nuestra aplicacion <3" << endl;
	return 0;
}

