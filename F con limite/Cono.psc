Algoritmo Cono 
	definir AL, R, G, H Como Real
	escribir " Ingrese los datos para encontrar el Area Lateral "
	escribir " Ingrese el Radio "
	leer R 
	escribir " Ingrese el generatriz "
	leer G
	ESCRIBIR " Ingrese la altura "
	leer H
	Mientras (R <= 0 y G <= 0 ) Hacer
		
		escribir " Ingrese el Radio "
		leer R 
		escribir " Ingrese el generatriz "
		leer G
		Mientras (H <= 0 ) Hacer
			ESCRIBIR " Ingrese la altura "
			leer H
		FinMientras
	FinMientras
	AL = PI * R * G 
	Escribir " Area Lateral =" AL
	definir AT COMO REAL 
	AT = PI* R* G+R
	ESCRIBIR " Area Total =" AT 
	DEFINIR V COMO REAL 
	V= PI * R^2 * H / 3
	ESCRIBIR " Volumen = " V
	escribir " espero que nuestra aplicacion le haya sido de ayuda <3 "
FinAlgoritmo

	

