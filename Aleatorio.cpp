/*
Nombre del archivo: constante.cpp
Autor: Douglas Velasquez
Lugar ITV
Instrucciones: uso de las constante 
*/
# include <iostream>
#include  <cstdlib> // c standard library
# include<ctime> 
using namespace std;

int main (){
	long timepoTranscurrido = time(nullptr);// del el primero de enero de 1970 hasta la actualidad 
	srand (time(nullptr)) ; // send random,  semilla de inicio 
int aleatorio = rand () % 10 ;
int num ;
cout << "Adivine un numero entre 0 y 10 ";
cin >> num ;
if (num == aleatorio){
cout <<"Felicidades, acertaste";


}else{

cout <<"Lo siento, no acertaste!";

} 





return 0 ;
}