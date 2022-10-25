/*
Nombre del archivo: Cono
Autor: Douglas Velasquez
Instrucciones: hacer ecuaciones matematicas 
*/
#include<iostream>
#include<math.h>
using namespace std;


int main() {
	float al;
	float at;
	float g;
	float h;
	float pi;
	float r;
	float v;
	cout << " Ingrese los datos para encontrar el Area Lateral " << endl;
	cout << " Ingrese el Radio " << endl;
	cin >> r;
	cout << " Ingrese el generatriz " << endl;
	cin >> g;
	cout << " Ingrese la altura " << endl;
	cin >> h;
	while ((r<=0 && g<=0)) {
		cout << " Ingrese el Radio " << endl;
		cin >> r;
		cout << " Ingrese el generatriz " << endl;
		cin >> g;
		while ((h<=0)) {
			cout << " Ingrese la altura " << endl;
			cin >> h;
		}
	}
	al = M_PI*r*g;
	cout << " Area Lateral =" << al << endl;
	at = M_PI*r*g+r;
	cout << " Area Total =" << at << endl;
	v = M_PI*pow(r,2)*h/3;
	cout << " Volumen = " << v << endl;
	cout << " espero que nuestra aplicacion le haya sido de ayuda <3 " << endl;
	return 0;
}

