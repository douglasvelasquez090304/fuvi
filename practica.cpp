/*
Nombre del archivo: manipuladores.cpp
Autor: Douglas Velasquez
Lugar: ITV
Instrucciones: practica
*/
#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	cout << left;
	cout << setw(20) << "Asignatura" << setw(10) <<"Estudiantes" << endl
		 << setw(20) << "Programacion" << setw(10) << right << 12 << endl
		 << left << setw(20) << "Redes" << setw(10) << right << 9 << left << endl;
		 return 0;
}