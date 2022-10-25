Algoritmo Dodecaedro
	//AREA
	//Dato de entrada 
	definir A	Como Real
	escribir " Ingrese el siguiente dato "
	escribir " ingrese a :"
	leer b 
	contador = 1
	Escribir "ingrese a - Intento #" contador
	Leer b
	
	Mientras (contador <= 2 y b <= 0) Hacer
		contador = contador + 1
		Escribir "ingrese a- Intento #" contador
		Leer b		
	FinMientras
	Si (b <= 0) Entonces
		Escribir "Ya agotó el total de intentos."
	Sino
		A = 3* b^ 3 * rc(25 + 10 *rc ( 5))
		escribir " Area:" A
		// Volumen 
		definir V como real 
		V = 1/4 *(15+ 7 * RC (5 ))* b^3
		escribir " Volumen:" V 
fin si
Escribir " espero que nuestra aplicacion le haya sido de ayuda <3 "
	
FinAlgoritmo
