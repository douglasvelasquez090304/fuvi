/*
Nombre del archivo: piramide
Autor: Douglas Velasquez
Instrucciones: hacer ecuaciones matematicas 
*/
#include<iostream>
using namespace std;

int main() {
	float ab;
	float al;
	float at;
	float h;
	float p;
	float v;
	// Datos de ingreso 
	cout << " Para calcular el area lateral de una piramide ingrese los siguientes datos" << endl;
	cout << " Ingrese el valor del perimetro de la base " << endl;
	cin >> p;
	cout << " Ingrese el valor del altura  " << endl;
	cin >> h;
	while ((p<=0 && h<=0)) {
		cout << "Ingrese el perimetro  base :" << endl;
		cin >> p;
		cout << " Ingrese la altura :" << endl;
		cin >> h;
	}
	// Fórmula del area lateral de una piramide
	al = (p*h)/2;
	cout << "AL = (P*H)/2" << endl;
	cout << " Area Lateral = " << al << " " << endl;
	// Area total 
	cout << " Ingrese el Ab para encontrar el Area Total " << endl;
	cin >> ab;
	while ((ab<=0)) {
		cout << " Ingrese el Ab para encontrar el Area Total " << endl;
		cin >> ab;
	}
	// ecuacion de area total
	at = al+ab;
	cout << " Area Total =" << at << endl;
	cout << " Encontrando volumen de la piramide " << endl;
	v = ab*h/3;
	cout << " Volumen =" << v << endl;
	cout << " espero que nuestra aplicacion le haya sido de ayuda <3 " << endl;
	return 0;
}

