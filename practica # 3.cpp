/*
Nombre del archivo: semaforo.cpp
Autor: Douglas Velasquez
Lugar: ITV
Instrucciones: Ejemplos de manipulacion de E/S
*/
#include<iostream>

using namespace std;
int main (){
	int edad ;
	char color ;
	int r,a,v ;
cout <<"Ingrese su edad ";
cin >> edad ;

if (edad < 17 ){
	cout <<"Usted no tiene la edad suficiente para conducir un vehiculo " << endl;
}
else{
cout << "Color del semaforo: r = rojo, a = amarillo, v = verde " ;
cin >> color ;
if (color == r){
	cout << "Baje la velocidad hasta deternerse suavemente " <<endl;
	}else if (color== a){
		cout <<"Tenga precaucion. No puede avanzar." <<endl;	
	} else if (color == v){
		cout << "Siga  adelante " << endl;
	}else {
		cout <<"Condusca con cuidado" << endl;
	}
   }
return 0;
}