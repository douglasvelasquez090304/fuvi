Algoritmo Todas_las_figuras_geometricas
	repetir 
	//Todas las figuras geometricas 
	Escribir "******Figuras geometricas******"
	Escribir "1. Cilindro"
	Escribir "2. Cono"
	Escribir "3. Dodecaedro"
	Escribir "4. Esfera"
	Escribir "5. Hexaedro"
	Escribir "6. Icosaedro"
	Escribir "7. Ocataedro"
	Escribir "8. Piramide"
	Escribir "9. Prisma"
	Escribir "10. Tetraedo"
	Escribir "11. Tronco de cono"
	Escribir "12. Tronco de piramide"
	Escribir "13. Salir"
	Escribir Sin Saltar "Eliga una opción "
	leer F 
	Limpiar Pantalla
	Segun F Hacer
		1:
			//Area lateral 
			Definir  AL,R,H Como Real
			//Datos de entrada 
			escribir " para encontrar el area lateral , area total y el volumen ingrese los siguentes datos "
			escribir " Ingrese los datos de radio "
			leer R 
			escribir " Ingrese la altura "
			LEER H
			Mientras (R <= 0 y H <= 0 ) Hacer
				escribir " Ingrese los datos de radio "
				leer R 
				escribir " Ingrese la altura :"
				leer H
			FinMientras
			// Ecuacion para hayar Area lagteral 
			AL = 2 *PI * R * H 
			ESCRIBIR "Area Lateral =" AL " "
			Definir At  Como Real 
			// Fórmula del área total del prisma
			At = 2* PI * R * H + R 
			Escribir "Area total = " At "  "
			definir V como real 
			//Ecuacion  para hayar volumen 
			escribir " Calculando el volumen del cilindro  "
			V = PI* R^2 * H 
			Escribir " Volumen = " v  " " 
			escribir " espero que nuestra aplicacion le haya sido de ayuda <3 "

		2:
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
		3:
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
		4:	
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
		5:
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
		6:
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
		7: 
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
		8:
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
		9:
			//AREA LATERAL
			definir al como real 
			escribir "para encontrar el Area lateral ingrese los siguientes datos "
			escribir " Ingrese el perimetro  base :"
			leer P
			escribir " Ingrese la altura :"
			leer H
			
			Mientras (P <= 0 y H <= 0 ) Hacer
				
				Escribir "Ingrese el perimetro  base :" 
				Leer P
				escribir " Ingrese la altura :"
				leer H
			FinMientras
			
			
			AL= P* H
			ESCRIBIR " Area lateral :" AL
			// AREA TOTAL
			DEFINIR AT COMO REAL
			Escribir "Ingrese A"
			LEER B
			Mientras (B <= 0 ) Hacer
				
				Escribir "Ingrese A"
				Leer 	B
			fin mientras
			AT = AL + 2*B 
			ESCRIBIR "Area total:" AT
			definir V Como Real
			V = B * H
			ESCRIBIR "Volumen:" V
			Escribir " espero que nuestra aplicacion le haya sido de ayuda <3 "
		10:
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
		11:
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
		12:
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
	13: escribir "Que tenga un buen dia "
	Fin Segun
	Esperar Tecla
	Hasta Que F=13
FinAlgoritmo
