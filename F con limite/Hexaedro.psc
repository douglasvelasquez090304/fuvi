Algoritmo Hexaedro
	definir AL como real
	// DATOS DE ENTRADA 
	Escribir " ingrese el siguiente dato "
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
		AL = 6 * b^2
		escribir " Area lateral :" AL 
		//volumen 
		DEFINIR V como real 
		V = b^3
		escribir " volumen: " V 
		// D 
		DEFINIR D COMO REAL 
		D = b * RC( 3)
		Escribir " D :" D
	fin si
	Escribir " espero que nuestra aplicacion le haya sido de ayuda <3 "

	
FinAlgoritmo
