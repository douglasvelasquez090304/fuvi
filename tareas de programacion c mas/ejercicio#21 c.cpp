/*
Nombre del archivo: ejercicio#21
Autor: Douglas Velasquez
Instrucciones: gradas con datos de usuario 
*/

#include<iostream>
using namespace std;


int main() {
	int a;
	int b;
	int n;
	cout << "Ingresa un numero" << endl;
	cin >> n;
	for (a=1;a<=n;a++) {
		for (b=1;b<=a;b++) {
			cout << "*" << "";
		}
		cout << "" << endl;
	}
	cout << "Espero que la haya gustado nuestra aplicacion <3" << endl;
	return 0;
}

