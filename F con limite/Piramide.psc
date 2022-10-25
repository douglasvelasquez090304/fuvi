Algoritmo Piramide 
	Definir AL, P,H  Como Real
	// Datos de ingreso 
	Escribir " Para calcular el area lateral de una piramide ingrese los siguientes datos" 
	Escribir " Ingrese el valor del perimetro de la base "
	Leer P
	Escribir " Ingrese el valor del altura  "
	Leer H
	Mientras (P <= 0 y H <= 0 ) Hacer
		
		Escribir "Ingrese el perimetro  base :" 
		Leer P
		escribir " Ingrese la altura :"
		leer H
	FinMientras
	// Fórmula del area lateral de una piramide
	AL = (P*H)/2
	ESCRIBIR "AL = (P*H)/2"
	Escribir " Area Lateral = " AL " "
	// Area total 
	definir AT, Ab como real 
	escribir " Ingrese el Ab para encontrar el Area Total "
	leer Ab 
	Mientras (Ab <= 0 ) Hacer
		
		Escribir " Ingrese el Ab para encontrar el Area Total "
		Leer Ab
		
	FinMientras
	// ecuacion de area total
	AT = AL + Ab
	escribir " Area Total =" AT 
	DEFINIR V Como Real
	Escribir " Encontrando volumen de la piramide "
	V = Ab * H / 3
	ESCRIBIR " Volumen =" V
	Escribir " espero que nuestra aplicacion le haya sido de ayuda <3 "

	
FinAlgoritmo
