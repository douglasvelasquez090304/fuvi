/*
Nombre del archivo: ejercicio#33
Autor: Douglas Velasquez
Instrucciones:descuento por cantidad de hijos 
*/
#include<iostream>
using namespace std;


int main() {
	int op;
	cout << "Seleccione la siguiente obcion de cantidad de hijos que tiene ";
	cin >> op;
	switch (op) {
	case 1:
		cout << "Usted no cuenta con un descuento" << endl;
		cout << "Espero que la haya gustado nuestra aplicacion <3" << endl;
		break;
	case 2:
		cout << "Usted cuenta con un descuento de 10%" << endl;
		cout << "Espero que la haya gustado nuestra aplicacion <3" << endl;
		break;
	case 3:
		cout << "Usted cuenta con un descuento de 15%" << endl;
		cout << "Espero que la haya gustado nuestra aplicacion <3" << endl;
		break;
	case 4:
		cout << "Usted cuenta con un descuento de 20%" << endl;
		cout << "Espero que la haya gustado nuestra aplicacion <3" << endl;
		break;
	case 5:
		cout << "Usted cuenta con un descuento de 20%" << endl;
		cout << "Espero que la haya gustado nuestra aplicacion <3" << endl;
		break;
	case 6:
		cout << "Usted cuenta con un descuento de 20%" << endl;
		cout << "Espero que la haya gustado nuestra aplicacion <3" << endl;
		break;
	}
	return 0;
}

