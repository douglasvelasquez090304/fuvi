/*
Nombre del archivo: estructura.cpp
Autor: Douglas Velasquez 
Lugar: ITV
Instrucciones: Ejemplos  de  if/if..else/if...else...if (FORMATO SI)
*/
#include<iostream>

using namespace std;

int main(){
	
	//Estructura condicional o selectiva if
	
	bool estaAprobado = false, esDesersion = true;	
	//Operador || es el operador logico o
	//Operador && es el operador logico y
	
	if(estaAprobado){
		cout << "Ud ha aprobado la asignatura." << endl;
	} else {
		cout << "Ud NO ha aprobado la asignatura." << endl;
	}
	
	return 0;
}