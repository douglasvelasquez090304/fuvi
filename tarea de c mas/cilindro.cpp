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
	float h;
	float pi;
	float r;
	float v;
	// Area lateral 
	// Datos de entrada 
	cout << " para encontrar el area lateral , area total y el volumen ingrese los siguentes datos " << endl;
	cout << " Ingrese los datos de radio " << endl;
	cin >> r;
	cout << " Ingrese la altura " << endl;
	cin >> h;
	while ((r<=0 && h<=0)) {
		cout << " Ingrese los datos de radio " << endl;
		cin >> r;
		cout << " Ingrese la altura :" << endl;
		cin >> h;
	}
	// Ecuacion para hayar Area lagteral 
	al = 2*M_PI*r*h;
	cout << "Area Lateral =" << al << " " << endl;
	// Fórmula del área total del prisma
	at = 2*M_PI*r*h+r;
	cout << "Area total = " << at << "  " << endl;
	// Ecuacion  para hayar volumen 
	cout << " Calculando el volumen del cilindro  " << endl;
	v = M_PI*pow(r,2)*h;
	cout << " Volumen = " << v << " " << endl;
	cout << " espero que nuestra aplicacion le haya sido de ayuda <3 " << endl;
	return 0;
}

