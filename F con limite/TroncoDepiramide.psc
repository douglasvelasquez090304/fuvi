Algoritmo TroncoDepiramide
	definir AL,PB,DF  como real
	//Datos de entrada 
	escribir "Para encontrar el area lateral ingrese los sigiuentes datos "
	Escribir " ingrese PB :" 
	Leer B 
	escribir " ingrese Cd	:" 
	leer C
	Escribir " ingrese DF:" 
	LEER D
	//Ecuacion 
	Mientras (B <= 0 y C <= 0 ) Hacer
		
		Escribir " ingrese PB :" 
		Leer B 
		escribir " ingrese Cd	:" 
		leer C
		Mientras (D <= 0 ) Hacer
			Escribir " ingrese DF:" 
			LEER D
		FinMientras
	FinMientras
	AL=((B+C)/2) * D
	
	Escribir " Area Lateral:" AL
	definir AT COMO REAL
	Escribir "Ingrese AB:"
	leer f
	ESCRIBIR "Ingrese Ab:"
	LEER  N
	Mientras (f <= 0 y n <= 0 ) Hacer
		
		Escribir "Ingrese AB:"
		leer f
		ESCRIBIR "Ingrese Ab:"
		LEER  N
		fin mientras
	AT= AL+f+N
	Escribir "Area Total:" AT
	
	DEFINIR V Como Real
	escribir "Ingrese la altura:"
	leer H 
	
	Mientras (h <= 0 ) Hacer
		escribir "Ingrese la altura:"
		leer H 
	FinMientras
	v=1/3* h*( f  +n *rc(f*N))
	ESCRIBIR "Volumen:" V
	Escribir " espero que nuestra aplicacion le haya sido de ayuda <3 "
FinAlgoritmo
