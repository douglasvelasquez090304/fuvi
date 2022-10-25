Algoritmo Icosaedro
	//AREA
	//DATO DE ENTRADA
	definir A como real 
	escribir " ingrese el siguiente dato "
	Escribir " ingrese a:"
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
		A= 5* b^2 * rc (3)
		Escribir " Area:" A 
		//VOLUMEN
		Definir V como real 
		V = (5 /12) * (3 + RC(5))* b ^ 3
		escribir " volumen:" V
	fin si 
	Escribir " espero que nuestra aplicacion le haya sido de ayuda <3 "


	
FinAlgoritmo
