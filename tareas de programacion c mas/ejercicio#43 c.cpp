/*
Nombre del archivo: ejercicio#43
Autor: Douglas Velasquez
Instrucciones: datos de personas  
*/
#include<iostream>
#include<cmath>
using namespace std;


int main() {
	float f;
	float h;
	float n;
	int op;
	float p;
	float t;
	float w;
	do {
		cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
		cout << "Datos de personas" << endl;
		cout << " 1. DATO de persona #1" << endl;
		cout << " 2. DATO de persona #2" << endl;
		cout << " 3. DATO de persona #3" << endl;
		cout << " 4. DATO de persona #4" << endl;
		cout << " 5. DATO de persona #5" << endl;
		cout << " 6. DATO de persona #6" << endl;
		cout << "ELIJA UNA OPCION";
		cin >> op;
		switch (op) {
		case 1:
			cout << "Maria antonia ";
			cout << "" << endl;
			cout << "altura: 1.50m";
			cout << "" << endl;
			cout << "peso: 60Kg";
			cout << "" << endl;
			cout << "Numero de telefono: 4632-56778" << endl;
			cout << "" << endl;
			f = 60/pow(1.50,2);
			cout << "persona con sobre peso: " << f << endl;
			break;
		case 2:
			cout << "Roberto mendez ";
			cout << "" << endl;
			cout << "altura: 1.80m";
			cout << "" << endl;
			cout << "peso: 86Kg";
			cout << "" << endl;
			cout << "Numero de telefono: 5890-1202";
			cout << "" << endl;
			n = 86/pow(1.80,2);
			cout << "Esta persona es obesa " << n << endl;
			break;
		case 3:
			cout << "" << endl;
			cout << "Manuela ramos ";
			cout << "" << endl;
			cout << "altura: 1.70m";
			cout << "" << endl;
			cout << "peso: 90Kg";
			cout << "" << endl;
			cout << "Numero de telefono: 7090-3254";
			cout << "" << endl;
			h = 90/pow(1.70,2);
			break;
		case 4:
			cout << "Esta persona tiene sobre peso " << h << endl;
			cout << "Ana maria ";
			cout << "" << endl;
			cout << "altura: 1.50m";
			cout << "" << endl;
			cout << "peso: 50Kg";
			cout << "" << endl;
			cout << "Numero de telefono: 4638-56708" << endl;
			cout << "" << endl;
			t = 50/pow(1.50,2);
			cout << "persona con un peso no recomendado: " << t << endl;
			break;
		case 5:
			cout << "Pedro Marmol  ";
			cout << "" << endl;
			cout << "altura: 2m";
			cout << "" << endl;
			cout << "peso: 90Kg";
			cout << "" << endl;
			cout << "Numero de telefono: 4432-50778" << endl;
			cout << "" << endl;
			p = 90/pow(2,2);
			cout << "persona con peso normal: " << p << endl;
			break;
		case 6:
			cout << "Naruto perez ";
			cout << "" << endl;
			cout << "altura: 1.90m";
			cout << "" << endl;
			cout << "peso: 90Kg";
			cout << "" << endl;
			cout << "Numero de telefono: 5532-50778" << endl;
			cout << "" << endl;
			w = 90/pow(1.90,2);
			cout << "persona con sobrepeso: " << w << endl;
			break;
		}
		cout << "Presione enter para continuar" << endl;
		cin.get(); // a diferencia del pseudocódigo, espera un Enter, no cualquier tecla
	} while (op!=6);
	cout << "Espero que la haya gustado nuestra aplicacion <3" << endl;
	return 0;
}

