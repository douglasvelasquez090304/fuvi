/*
Nombre del archivo: ejercicio#27
Autor: Douglas Velasquez
Instrucciones: consto de viaje 
*/
#include<iostream>
using namespace std;


int main() {
	float descuento;
	int dias;
	float distancia;
	float preciodeida;
	float precioderegreso;
	float preciototal;
	float precio_total;
	cout << "Ingrese los dias de estancia" << endl;
	cin >> dias;
	cout << "Ingrese la distancia del viaje" << endl;
	cin >> distancia;
	preciototal = dias*89.50;
	if ((dias)>(7) && (distancia)>(1000)) {
		descuento = (preciototal*0.3);
		precio_total = precio_total-descuento;
	}
	preciodeida = preciototal/2;
	precioderegreso = preciototal/2;
	cout << "Precio de Ida: " << preciodeida << endl;
	cout << "Precio de regreso: " << precioderegreso << endl;
	cout << "Descuento: " << descuento << endl;
	cout << "Espero que nuestra aplicacion le haya ayudado <3" << endl;
	return 0;
}

