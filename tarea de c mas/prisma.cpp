/*
Nombre del archivo: prisma
Autor: Douglas Velasquez
Instrucciones: hacer ecuaciones matematicas 
*/

#include<iostream>
using namespace std;


int main() {
	float al;
	float at;
	float b;
	float h;
	float p;
	float v;
	// AREA LATERAL
	cout << "para encontrar el Area lateral ingrese los siguientes datos " << endl;
	cout << " Ingrese el perimetro  base :" << endl;
	cin >> p;
	cout << " Ingrese la altura :" << endl;
	cin >> h;
	while ((p<=0 && h<=0)) {
		cout << "Ingrese el perimetro  base :" << endl;
		cin >> p;
		cout << " Ingrese la altura :" << endl;
		cin >> h;
	}
	al = p*h;
	cout << " Area lateral :" << al << endl;
	// AREA TOTAL
	cout << "Ingrese A" << endl;
	cin >> b;
	while ((b<=0)) {
		cout << "Ingrese A" << endl;
		cin >> b;
	}
	at = al+2*b;
	cout << "Area total:" << at << endl;
	v = b*h;
	cout << "Volumen:" << v << endl;
	cout << " espero que nuestra aplicacion le haya sido de ayuda <3 " << endl;
	return 0;
}

