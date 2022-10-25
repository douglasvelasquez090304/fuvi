/*
Nombre del archivo: ejercicio#31
Autor: Douglas Velasquez
Instrucciones: si la suma de los dos numeros es y igual 
*/
#include<iostream>
using namespace std;


int main() {
	float i;
	float x;
	cout << "Por favor ingrese un número:" << endl;
	cin >> x;
	for (i=1;i<=x;i++) {
		if (x%i==0) {
			cout << i << endl;
		}
	}
	cout << "Espero que la haya gustado nuestra aplicacion <3" << endl;
	return 0;
}

