/*
Nombre del archivo: manipulacion 
Autor: Douglas Velasquez
Lugar: ITV
Instrucciones: Ejemplos de manipulacion de E/S
*/
#include<iostream>
#include<iomanip>
using namespace std;
 int main (){
 		cout << left;
        cout << setw(20) <<"Asignatura" << setw(10) << "Estudiantes " << endl; 
 	    cout  << setw(20) <<"Programacion" << setw(10) << right << 12 << endl;
 	    cout  << setw(20) << "Redes"  << setw(10) << right << 9 ;
 	         
 	         
	  return 0;
 }