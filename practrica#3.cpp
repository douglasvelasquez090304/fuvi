/*
Nombre del archivo: manipulacion 
Autor: Douglas Velasquez
Lugar: ITV
Instrucciones: Ejemplos de manipulacion de E/S
*/
#include<iostream>

using namespace std;
 // variable globales
 const double TASA_ANTIGUEDAD = 15;
 const double  TASA_SINDICATO = 1;
 const double TASA_INSS = 7;
 const double TASA_IR = 15.6;
 const double TASA_INSS_PATRONAL = 22.5;
 
 int main (){ 
 // Documento de variable= local
 double salarioBasico, ingresoNeto, ingresoTotal, deduccionesTotales;
 double ingresoAntiguedad, montoSindicado , montoINSS, montoIR, montoINSSpatronal ;
 string nombre;
 // pedir datos al usuario 
 cout <<"Ingrese su salario basico: C$ ";
 cin >> salarioBasico;
 // calcular los ingresos 
    montoSindicato = salarioBasico * (TASA_ANTIGUEDAD/100);
 ingresoTotal = salarioBasico + montoAntiguedad;
  // calcular las deducciones 
  montoSindical = salarioBasico * (TASA_SINDICAL/100);
  montoINSS = ingresoTotal * (TASA_INSS/100);
  montoIR = ingresoTotal * (TASA_IR /100);
  deduccionesTotales = montoSindicato + montoINSS+ montoIR; 
  //CALCULO DE DEDUCCION AL EMPLEADO 
  montoINSSpatronal = ingresoTotal * (TASA_INSS_PATRONAL / 100);
  // MOSTRAR EL RESULTADO 
  cout << " Salario bruto o basico =C$" << salarioBasico << endl;
  cout << "*******Ingreso total ********" << endl ;
  cout << "Monto por antiguedad = C$ " montoAntiguedad << endl;
  cout << "Monto de ingreso total = C$" ingresoTotal << endl;
  cout << "******Deducciones totales*******" << endl ; 
  cout << "Monto por sindicato = C$" << montoSindicato << endl;
  cout << "Monto de INSS = C$" montoINSS << endl;
  cout << "Monto por IR = C$" montoIR <<endl;
  cout << "Monto deducciones totales = C$ "<< deduccionTotales << endl;
  cout << "*******Ingreso total*******" <<endl;
  cout << "Ingreso o salario neto = C$" << ingreso  
 
 
 
}
 