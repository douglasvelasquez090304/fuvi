Algoritmo troncoCono
	//area lateral
	definir AL Como Real
	escribir " ingrese los siguientes datos para calcular el Area Lateral"
	escribir " ingrese generatriz"
	leer G 
	escribir " ingrese el Radio Mayor "
	leer R 
	ESCRIBIR " Ingrese el Radio Menor "
	leer T
	Mientras (G <= 0 y R <= 0 ) Hacer
		
		escribir " ingrese generatriz"
		leer G 
		escribir " ingrese el Radio Mayor "
		leer R
		Mientras (T <= 0 ) Hacer
			ESCRIBIR " Ingrese el Radio Menor "
			leer T
		FinMientras
	FinMientras
	AL= ((PI * G)* R + T) 
	escribir " Area Lateral = " AL
	//area total
	definir AT Como Real
	escribir " para encontrar el Area Total "
	escribir " Ingrese AB"
	LEER AB
	Escribir " ingrese Ab "
	leer C
	Mientras (Ab <= 0 y C <= 0 ) Hacer
		
		escribir " Ingrese AB"
		LEER AB
		Escribir " ingrese Ab "
		leer C
		FIN MIENTRAS
	AT =AL+AB+C
	escribir " Area total =" AT 
	definir v como real 
	escribir " para encontrar el volumen ingrese el siguiente dato" 
	escribir " ingrese la Altura "
	leer H
	Mientras (H <= 0 ) Hacer
		
		escribir " ingrese la Altura "
		leer H
	FIN MIENTRAS
	v= 1/3*PI*H * R^2+ T ^2 + R *T
	escribir "volumen = " v
	Escribir " espero que nuestra aplicacion le haya sido de ayuda <3 "
	
FinAlgoritmo
