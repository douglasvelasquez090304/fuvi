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

	srand (time(nullptr)) ; // send random,  semilla de inicio 
int valorMin  = 1 , valorMax = 6 ;

// Formula para generar numeros dentro de un rango 
 short dado1 = (rand () % (valorMax - valorMin + 1 ))+ valorMin ;
  short dado2 = (rand () % (valorMax - valorMin + 1 ))+ valorMin ;
  
  cout << dado1 << " , " << dado2; 
  return 0; 
}