/*
Nombre del archivo: ejercicio#23
Autor: Douglas Velasquez
Instrucciones: contraseña intentos 
*/

#include<iostream>
using namespace std;


int main() {
	float bocadillo;
	float cant_cerveza;
	float cant_refresco;
	float cant_v;
	float cerveza;
	float refresco;
	float total;
	bocadillo = 1.5;
	refresco = 1.05;
	cerveza = 0.75;
	total = 0;
	cout << "Introduce la cantidad de bocadillos de jamon" << endl;
	cin >> cant_v;
	cout << "Introduce la cantidad de refresco" << endl;
	cin >> cant_refresco;
	cout << "Introduce la cantidad de cerveza" << endl;
	cin >> cant_cerveza;
	// NOTA: los dos siguientes van en una linea
	total = ((cant_v*bocadillo)+(cant_refresco*refresco)+(cant_cerveza*cerveza));
	cout << "C$"<< total  << endl;
	return 0;
}

