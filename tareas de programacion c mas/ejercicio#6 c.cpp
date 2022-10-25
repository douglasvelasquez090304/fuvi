/*
Nombre del archivo: ejercicio#6
Autor: Douglas Velasquez
Instrucciones: porcentaje de valores de genero
*/

#include<iostream>
using namespace std;



int main() {
	float hombres;
	float mujeres;
	float total;
	cout << "Ingrese la cantidad de Mujeres:" << endl;
	cin >> mujeres;
	cout << "Ingrese la cantidad de Hombres" << endl;
	cin >> hombres;
	total = mujeres+hombres;
	cout << "El porcentaje de mujeres es: " << (mujeres/total)*100 << "%" << endl;
	cout << "El porcentaje de hombres es: " << (hombres/total)*100 << "%" << endl;
	cout << "Gracias por elegir nuestra aplicacion <3" << endl;
	return 0;
}

