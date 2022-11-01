Algoritmo aplicación
	//ELECCION DE DATOS 
	repetir 
		
	
	Escribir "QUE DESEA CALCULAR: "
	Escribir "1. El total de las resistencias en serie"
	Escribir "2. El total de las resistencias en paralelo"
	Escribir "3. El voltaje "
	Escribir "4. La corriente"
	Escribir "5. La resistencia "
	Escribir "6. El total de los condensadores en serie"
	Escribir "7. El total de los condensadores en paralelo"
	Escribir "8. El total de los inductores en serie"
	Escribir "9. El total de los condensadores en paralelo"
	Escribir "10. Salir"
	Escribir sin saltar "Eliga una opcion "
	leer D
	Limpiar Pantalla
	Segun D Hacer
			
		
		1:
			Escribir "Ingrese la cantidad de resistencias"
			leer R
			
			
			Si R <=0 Entonces
				Escribir "Valor equivocado"
			SiNo
			
				Segun R Hacer
					1: escribir "Valor equivocado"
					2:
						Escribir "Ingrese los valores"
						leer q,w 
						i = q+w
						escribir "Valor total de las resistencias: " i " Ohs"
					3:
						Escribir "Ingrese los valores"
						leer q,w,e
						i = q+w+e
						escribir "Valor total de las resistencias: " i  " Ohs"
						
					4:Escribir "Ingrese los valores"
						leer q,w,e,r 
						i = q+w+e+r
						escribir "Valor total de las resistencias: " i  " Ohs"
					5:	Escribir "Ingrese los valores"
						leer q,w,e,r,t
						i = q+w+e+r+t
						escribir "Valor total de las resistencias: " i  " Ohs"
					6:	Escribir "Ingrese los valores"
							leer q,w,e,r,t,u
							i = q+w+e+r+t+u
							escribir "Valor total de las resistencias: " i  " Ohs"
					7:	Escribir "Ingrese los valores"
							leer q,w,e,r,t,u,p
							i = q+w+e+r+t+u+p
							escribir "Valor total de las resistencias: " i	 " Ohs"	
					8:	Escribir "Ingrese los valores"
							leer q,w,e,r,t,u,p,z
							i = q+w+e+r+t+u+p+z
							escribir "Valor total de las resistencias: " i	 " Ohs"	
					9:	Escribir "Ingrese los valores"
							leer q,w,e,r,t,u,p,z,g
							i = q+w+e+r+t+u+p+z+g
							escribir "Valor total de las resistencias: " i	 " Ohs"
					10:	Escribir "Ingrese los valores"
							leer q,w,e,r,t,u,p,z,g,l
							i = q+w+e+r+t+u+p+z+g+l
							escribir "Valor total de las resistencias: " i	 " Ohs"	
							
				Fin Segun
				escribir "Espero que la haya gustado nuestra aplicacion <3"
			Fin Si
			
		2: escribir "Ingrese la cantidad de resistencias:"
			leer R 
			
			Si R <=0 Entonces
				Escribir "Valor equivocado"
			SiNo
				Segun R Hacer
					1: escribir "Valor equivocado"
					2:
						Escribir "Ingrese los valores"
						leer q,w 
						i = q*w/q+w
						escribir "Valor total de las resistencias: " i  " Ohs"
					3:
						Escribir "Ingrese los valores"
						leer q,w,e
						i = 1/1/q+1/w+1/e
						escribir "Valor total de las resistencias: " i  " Ohs"
						
					4:Escribir "Ingrese los valores"
						leer q,w,e,r 
						i = 1/1/q+1/w+1/e+1/r
						escribir "Valor total de las resistencias: " i  " Ohs"
					5:	Escribir "Ingrese los valores"
						leer q,w,e,r,t
						i = 1/1/q+1/w+1/e+1/r+1/t
						escribir "Valor total de las resistencias: " i  " Ohs"
					6:	Escribir "Ingrese los valores"
						leer q,w,e,r,t,u
						i = 1/1/q+1/w+1/e+1/r+1/t+1/u
						escribir "Valor total de las resistencias: " i  " Ohs"
					7:	Escribir "Ingrese los valores"
						leer q,w,e,r,t,u,p
						i = 1/1/q+1/w+1/e+1/r+1/t+1/u+1/p
						escribir "Valor total de las resistencias: " i	 " Ohs"	
						
					8:	Escribir "Ingrese los valores"
						leer q,w,e,r,t,u,p
						i = 1/1/q+1/w+1/e+1/r+1/t+1/u+1/p+1/z
						escribir "Valor total de las resistencias: " i	 " Ohs"	
					9:	Escribir "Ingrese los valores"
						leer q,w,e,r,t,u,p
						i = 1/1/q+1/w+1/e+1/r+1/t+1/u+1/p+1/z+1/g
						escribir "Valor total de las resistencias: " i	 " Ohs"	
					10:	Escribir "Ingrese los valores"
						leer q,w,e,r,t,u,p
						i = 1/1/q+1/w+1/e+1/r+1/t+1/u+1/p+1/z+1/g+1/l
						escribir "Valor total de las resistencias: " i	 " Ohs"	
				Fin Segun
				escribir "Espero que la haya gustado nuestra aplicacion <3"
			Fin Si
			
		3: escribir "Ingrese los siguientes valores"
			Escribir "Corriente: "
			leer i
			escribir "Resistencia: "
			leer r 
			Si r<=0 y i<= 0 Entonces
				Escribir "Valor equivocado."
				
			
			SiNo
				v=i*r
				Escribir "Voltaje:" V " V"
				escribir "Espero que la haya gustado nuestra aplicacion <3"
			Fin Si
			
		4: Escribir "Ingrese los siguientes valores "
			escribir "Voltaje: "
			leer v 
			Escribir "Resistencia: "
			leer r 
			Si v<=0 y r<= 0 Entonces
				Escribir "Valor equivocado."
				
				
			SiNo
				i = v/r
				escribir "Corriente: " i " Amp"
				escribir "Espero que la haya gustado nuestra aplicacion <3"
			Fin Si
		
		5: Escribir "Ingrese los siguientes valores "
			escribir "Voltaje: "
			leer v 
			Escribir "Corriente: "
			leer i 
			Si v<=0 y i<= 0 Entonces
				Escribir "Valor equivocado."
				
				
			SiNo
				r = v/i
				escribir "Resistencia: " r "  Ohs"	
				escribir "Espero que la haya gustado nuestra aplicacion <3"
			Fin Si
		6: 	escribir "Ingrese la cantidad de condensadores:"
			
			Si C <=0 Entonces
				Escribir "Valor equivocado"
			SiNo
				Segun C Hacer
					1: escribir "Valor equivocado"
					2:
						Escribir "Ingrese los valores"
						leer q,w 
						i = q*w/q+w
						escribir "Valor total de los condensadores: " i  " Farad"
					3:
						Escribir "Ingrese los valores"
						leer q,w,e
						i = 1/1/q+1/w+1/e
						escribir "Valor total de las resistencias: " i  " Farad"
						
					4:Escribir "Ingrese los valores"
						leer q,w,e,r 
						i = 1/1/q+1/w+1/e+1/r
						escribir "Valor total de las resistencias: " i  "Farad"
					5:	Escribir "Ingrese los valores"
						leer q,w,e,r,t
						i = 1/1/q+1/w+1/e+1/r+1/t
						escribir "Valor total de las resistencias: " i  " Farad"
					6:	Escribir "Ingrese los valores"
						leer q,w,e,r,t,u
						i = 1/1/q+1/w+1/e+1/r+1/t+1/u
						escribir "Valor total de las resistencias: " i " Farad"
					7:	Escribir "Ingrese los valores"
						leer q,w,e,r,t,u,p
						i = 1/1/q+1/w+1/e+1/r+1/t+1/u+1/p
						escribir "Valor total de las resistencias: " i	 " Farad"
					8:	Escribir "Ingrese los valores"
						leer q,w,e,r,t,u,p,z
						i = 1/1/q+1/w+1/e+1/r+1/t+1/u+1/p+1/z
						escribir "Valor total de las resistencias: " i	 " Farad"
					9:	Escribir "Ingrese los valores"
						leer q,w,e,r,t,u,p,z,g
						i = 1/1/q+1/w+1/e+1/r+1/t+1/u+1/p+1/z+1/g
						escribir "Valor total de las resistencias: " i " Farad"
					10:	Escribir "Ingrese los valores"
						leer q,w,e,r,t,u,p,z,g,l
						i = 1/1/q+1/w+1/e+1/r+1/t+1/u+1/p+1/z+1/g+1/l
						escribir "Valor total de las resistencias: " i	  " Farad"
				Fin Segun
				escribir "Espero que la haya gustado nuestra aplicacion <3"
			Fin Si
			
		7: 	Escribir "Ingrese la cantidad de condensadores:"
			leer C
			
			
			Si C <=0 Entonces
				Escribir "Valor equivocado"
			SiNo
				Segun C Hacer
					1: escribir "Valor equivocado"
					2:
						Escribir "Ingrese los valores"
						leer q,w 
						i = q+w
						escribir "Valor total de los condensadores: " i " Farad"
					3:
						Escribir "Ingrese los valores"
						leer q,w,e
						i = q+w+e
						escribir "Valor total de los condensadores: " i  " Farad"
						
					4:Escribir "Ingrese los valores"
						leer q,w,e,r 
						i = q+w+e+r
						escribir "Valor total de los condensadores: " i  " Farad"
					5:	Escribir "Ingrese los valores"
						leer q,w,e,r,t
						i = q+w+e+r+t
						escribir "Valor total de los condensadores: " i  " Farad"
					6:	Escribir "Ingrese los valores"
						leer q,w,e,r,t,u
						i = q+w+e+r+t+u
						escribir "Valor total de los condensadores: " i  " Farad"
					7:	Escribir "Ingrese los valores"
						leer q,w,e,r,t,u,p
						i = q+w+e+r+t+u+p
						escribir "Valor total de los condensadores: " i	 " Farad"	
					8:	Escribir "Ingrese los valores"
						leer q,w,e,r,t,u,p,z
						i = q+w+e+r+t+u+p+z
						escribir "Valor total de las resistencias: " i	  " Farad"
					9:	Escribir "Ingrese los valores"
						leer q,w,e,r,t,u,p,z,g
						i = q+w+e+r+t+u+p+z+g
						escribir "Valor total de las resistencias: " i	  " Farad"
					10:	Escribir "Ingrese los valores"
						leer q,w,e,r,t,u,p,z,g,l
						i = q+w+e+r+t+u+p+z+g+l
						escribir "Valor total de las resistencias: " i	  " Farad"
				Fin Segun
				escribir "Espero que la haya gustado nuestra aplicacion <3"
			Fin Si
			
		8:  	Escribir "Ingrese la cantidad de los inductores:"
			leer C
			
			
			Si C <=0 Entonces
				Escribir "Valor equivocado"
			SiNo
				Segun C Hacer
					1: escribir "Valor equivocado"
					2:
						Escribir "Ingrese los valores"
						leer q,w 
						i = q+w
						escribir "Valor total de los inductores: " i " Farad"
					3:
						Escribir "Ingrese los valores"
						leer q,w,e
						i = q+w+e
						escribir "Valor total de los inductores: " i  " Henry"
						
					4:Escribir "Ingrese los valores"
						leer q,w,e,r 
						i = q+w+e+r
						escribir "Valor total de los inductores: " i  " Henry"
					5:	Escribir "Ingrese los valores"
						leer q,w,e,r,t
						i = q+w+e+r+t
						escribir "Valor total de los inductores: " i " Henry"
					6:	Escribir "Ingrese los valores"
						leer q,w,e,r,t,u
						i = q+w+e+r+t+u
						escribir "Valor total de los inductores: " i  " Henry"
					7:	Escribir "Ingrese los valores"
						leer q,w,e,r,t,u,p
						i = q+w+e+r+t+u+p
						escribir "Valor total de los inductores: " i	" Henry"
					8:	Escribir "Ingrese los valores"
						leer q,w,e,r,t,u,p,z
						i = q+w+e+r+t+u+p+z
						escribir "Valor total de las resistencias: " i	  " Henry"
					9:	Escribir "Ingrese los valores"
						leer q,w,e,r,t,u,p,z,g
						i = q+w+e+r+t+u+p+z+g
						escribir "Valor total de las resistencias: " i	 " Henry"
					10:	Escribir "Ingrese los valores"
						leer q,w,e,r,t,u,p,z,g,l
						i = q+w+e+r+t+u+p+z+g+l
						escribir "Valor total de las resistencias: " i	  " Henry"
				Fin Segun
				escribir "Espero que la haya gustado nuestra aplicacion <3"
			Fin Si
			
		9:	escribir "Ingrese la cantidad de inductores:"
			leer R 
			
			Si R <=0 Entonces
				Escribir "Valor equivocado"
			SiNo
				Segun R Hacer
					1: escribir "Valor equivocado"
					2:
						Escribir "Ingrese los valores"
						leer q,w 
						i = q*w/q+w
						escribir "Valor total de los inductores: " i  " Henry"
					3:
						Escribir "Ingrese los valores"
						leer q,w,e
						i = 1/1/q+1/w+1/e
						escribir "Valor total de los inductores: " i  " Henry"
						
					4:Escribir "Ingrese los valores"
						leer q,w,e,r 
						i = 1/1/q+1/w+1/e+1/r
						escribir "Valor total de los inductores: " i " Henry"
					5:	Escribir "Ingrese los valores"
						leer q,w,e,r,t
						i = 1/1/q+1/w+1/e+1/r+1/t
						escribir "Valor total de los inductores: " i  " Henry"
					6:	Escribir "Ingrese los valores"
						leer q,w,e,r,t,u
						i = 1/1/q+1/w+1/e+1/r+1/t+1/u
						escribir "Valor total de los inductores: " i  " Henry"
					7:	Escribir "Ingrese los valores"
						leer q,w,e,r,t,u,p
						i = 1/1/q+1/w+1/e+1/r+1/t+1/u+1/p
						escribir "Valor total de los inductores: " i	" Henry"
					8:	Escribir "Ingrese los valores"
						leer q,w,e,r,t,u,p,z
						i = 1/1/q+1/w+1/e+1/r+1/t+1/u+1/p+1/z
						escribir "Valor total de las resistencias: " i	 " Henry"
					9:	Escribir "Ingrese los valores"
						leer q,w,e,r,t,u,p,z,g
						i = 1/1/q+1/w+1/e+1/r+1/t+1/u+1/p+1/z+1/g
						escribir "Valor total de las resistencias: " i " Henry"
					10:	Escribir "Ingrese los valores"
						leer q,w,e,r,t,u,p,z,g,l
						i = 1/1/q+1/w+1/e+1/r+1/t+1/u+1/p+1/z+1/g+1/l
						escribir "Valor total de las resistencias: " i	  " Henry"
				Fin Segun
				escribir "Espero que la haya gustado nuestra aplicacion <3"
				Fin Si
			10: escribir "Que tenga un buen dia <3"
	   Fin Segun
	       Esperar Tecla
	            Limpiar Pantalla
   Hasta Que  D = 10
FinAlgoritmo
