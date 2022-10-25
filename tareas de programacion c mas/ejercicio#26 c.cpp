/*
Nombre del archivo: ejercicio#26
Autor: Douglas Velasquez
Instrucciones: numeros de productos 
*/
#include<iostream>
using namespace std;

int main() {
	int f;
	int n;
	int pro;
	pro = 1;
	cout << "MUESTRA EL PRODUCTO DE N NÚMEROS" << endl;
	cout << "CANTIDAD DE NÚMEROS : ";
	cin >> n;
	for (f=1;f<=n;f++) {
		cout << f << "  ";
		pro = pro*f;
	}
	cout << "" << endl;
	cout << "PRODUCTO DE " << n << " ES : " << pro << endl;
	return 0;
}

