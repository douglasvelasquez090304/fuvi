Algoritmo ejercicio19
	repetir
		LIMPIAR PANTALLA
		MOSTRAR "CALCULAR EL PROMEDIO"
		
		Escribir " 1. DATOS DEL PRIMER ALUMNO"
		Escribir " 2. DATOS DEL SEGUNDO ALUMNO"
		Escribir " 3. DATOS DEL TERCER ALUMNO"
		
		Escribir SIN SALTAR "ELIJA UNA OPCION"
		LEER OP
		SEGUN OP HACER
			1:
				Escribir sin saltar "nombre del primer alumno"
				leer alu
				
				Escribir sin saltar "ingrese nota teorica"
				leer t
				
				Escribir sin saltar "ingrese nota practica"
				leer p
				
				Escribir sin saltar "ingrese nota problemas"
				leer npro
				Si t > 0 y t <=10 Entonces
					t = t * 10/100
					Escribir "nota teorica " , t
					resultado = t + p + npro
					Escribir "el resultado es " , resultado
				SINO
					Escribir "MENSAJE DE ERROR"
				FinSi
				
				Si p > 0 y p <=10 Entonces
					p = p * 40/100
					Escribir "nota practica " , p
					resultado = t + p + npro
					Escribir "el resultado es " , resultado
				SINO
					Escribir "MENSAJE DE ERROR"
				Fin Si
				
				Si npro > 0 y npro<=10 Entonces
					npro = npro * 50/100
					Escribir "nota de problemas " , npro
					resultado = n + p + npro
					Escribir "el resultado es " , resultado
				SINO
					Escribir "MENSAJE DE ERROR"
					
				Fin Si
				
			2:
				Escribir sin saltar "nombre del primer alumno"
				leer alu
				
				Escribir sin saltar "ingrese nota teorica"
				leer t
				
				Escribir sin saltar "ingrese nota practica"
				leer p
				
				Escribir sin saltar "ingrese nota problemas"
				leer npro
				
				Si t > 0 y t <=10 Entonces
					t = t * 10/100
					Escribir "nota teorica " , t
					resultado = t + p + npro
					Escribir "el resultado es " , resultado
				SINO
					Escribir "MENSAJE DE ERROR"
					
				Fin Si
				
				Si p > 0 y p <=10 Entonces
					p = p * 40/100
					Escribir "nota practica " , p
					resultado = t + p + npro
					Escribir "el resultado es " , resultado
				SINO
					Escribir "MENSAJE DE ERROR"
					
				Fin Si
				
				Si npro > 0 y npro<=10 Entonces
					npro = npro * 50/100
					Escribir "nota de problemas " , npro
					resultado = t + p + npro
					Escribir "el resultado es " , resultado
				SINO
					Escribir "MENSAJE DE ERROR"
					
				Fin Si
			3:
				
				Escribir sin saltar "nombre del primer alumno"
				leer alu
				
				Escribir sin saltar "ingrese nota teorica"
				leer t
				
				Escribir sin saltar "ingrese nota practica"
				leer p
				
				Escribir sin saltar "ingrese nota problemas"
				leer npro
				Si t > 0 y t <=10 Entonces
					t = t * 10/100
					Escribir "nota teorica " , t
					resultado = t + p + npro
					Escribir "el resultado es " , resultado
				SINO
					Escribir "MENSAJE DE ERROR"
					
				Fin Si
				
				Si p > 0 y p <=10 Entonces
					p = p * 40/100
					Escribir "nota practica " , p
					resultado = t + p + npro
					Escribir "el resultado es " , resultado
				SINO
					Escribir "MENSAJE DE ERROR"
					
				Fin Si
				
				Si npro > 0 y npro<=10 Entonces
					npro = npro * 50/100
					Escribir "nota de problemas " , npro
					resultado = t + p + npro
					Escribir "el resultado es " , resultado
				SINO
					Escribir "MENSAJE DE ERROR"
					
				Fin Si
				
		FinSegun
		
		Escribir "Presione enter para continuar"
		Esperar Tecla
	HASTA QUE OP = 3
	escribir "Espero que la haya gustado nuestra aplicacion <3"
FinAlgoritmo
