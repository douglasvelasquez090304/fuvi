Algoritmo Tetraedo
	definir A COMO REal
	Escribir " Para encontrar el Area ingrese el siguiente dato "
	Escribir " Ingrese a :"
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
		A = b^2 * RC(3)
		ESCRIBIR " Area :" A
		definir v  como real 
		v= (RC(2)/ 12 )* b^3
		Escribir " volumen :" v
		DEFINIR H como real 
		H = (b* (rc (6)/ 3))
		Escribir " Altura :" H 
		
	fin si
	Escribir " espero que nuestra aplicacion le haya sido de ayuda <3 "


	
FinAlgoritmo
