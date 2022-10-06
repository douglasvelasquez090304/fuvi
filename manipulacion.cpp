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
         cout << setw(10) <<"artista" << setw(10) << "album " << endl 
 	     << setw(20) << "Michael Jaskon" << setw(10) << "Trilller"; 
 	
 	cout << fixed << setprecision(5) << 12.34467;
 	
	  return 0;
 }
