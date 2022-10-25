Algoritmo Ocataedro 
	//Area
	definir A COMO REAL 
	Escribir " Ingrese el siguiente dato"
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
		A= 2* b^2 * rc (3)
		//volumen 
		escribir " Area :" A
		definir V como real 
		V= RC (2)/3*b^3
		Escribir " Volumen:" V
		
	finsi
	Escribir " espero que nuestra aplicacion le haya sido de ayuda <3 "

	
FinAlgoritmo
