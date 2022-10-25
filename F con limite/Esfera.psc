Algoritmo Esfera
	// datos de entreda 
	definir A como real 
	escribir " para hayar A Y Volumen ingrese el siguiente datos"
	escribir "ingrese el radio menor:"
	leer r 
	contador = 1
	Escribir "ingrese a - Intento #" contador
	Leer r
	
	Mientras (contador <= 2 y r <= 0) Hacer
		contador = contador + 1
		Escribir "ingrese a- Intento #" contador
		Leer r		
	FinMientras
	Si (r <= 0) Entonces
		Escribir "Ya agotó el total de intentos."
	Sino
		
		A=4 * PI * R^2
		Escribir "A:" A
		DEFINIR V COMO REAL
		v = 4/3* PI *R ^3
		ESCRIBIR "Volumen:" v
	finsi 
	Escribir " espero que nuestra aplicacion le haya sido de ayuda <3 "



	
FinAlgoritmo
