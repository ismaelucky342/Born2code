Algoritmo Reserva_mesas
	salir=Falso	
	
	//VARIABLES PARA los comensales máximos por mesas 
	
	comensalesmaximos1=5
	comensalesmaximos2=10
	comensalesmaximos3=2
	comensalesmaximos4=8
	comensalesmaximos5=12
	comensalesmaximos6=8
	comensalesmaximos7=6
	comensalesmaximos8=4
	
	estado1=Verdadero
	
	//Todas las mesas ocupadas
	mesasocupadas=0
	
	Hacer 
		Escribir  ""
		Escribir "SISTEMA DE RESERVA DE MESAS"
		Escribir "1. Ver estado de las mesas"
		Escribir "2. Reservar una mesa"
		Escribir "3. Liberar mesa"
		Escribir "0. Salir del programa"
		Leer op
		
		
		
		Segun op Hacer
			0: Salir=Verdadero
			1:	//ACCIONES PARA VER EL ESTADO DE LAS MESAS
				Escribir Sin Saltar "Mesa 1 Capacidad: ", comensalesmaximos1
				Si estado1=Verdadero Entonces
					Escribir "Disponible"
				SiNo
					Escribir "No disponible"
					Escribir "reservada a ", Nombre1, "con telefono", Telefono1, "el dia-mes-hora",. diameshora1
				FinSi
				Escribir Sin Saltar "Mesa 2 Capacidad: ", comensalesmaximos2
				Si estado2=Verdadero Entonces
					Escribir "Disponible"
					
				SiNo
					Escribir "No disponible"
					Escribir "reservada a ", Nombre2, "con telefono", Telefono2, "el dia-mes-hora", diameshora2
				FinSi
				Escribir Sin Saltar "Mesa 3 Capacidad: ", comensalesmaximos3
				Si estado3=Verdadero Entonces
					Escribir "Disponible"
				SiNo
					Escribir "No disponible"
					Escribir "reservada a ", Nombre3, "con telefono", Telefono3, "el dia-mes-hora", diameshora3 
				FinSi
				Escribir Sin Saltar "Mesa 4 Capacidad: ", comensalesmaximos4
				Si estado4=Verdadero Entonces
					Escribir "Disponible"
				SiNo
					Escribir "No disponible"
					Escribir "reservada a ", Nombre4, "con telefono", Telefono4, "el dia-mes-hora",. diameshora4
				FinSi
				Escribir Sin Saltar "Mesa 5 Capacidad: ", comensalesmaximos5
				Si estado5=Verdadero Entonces
					Escribir "Disponible"
				SiNo
					Escribir "No disponible"
					Escribir "reservada a ", Nombre5, "con telefono", Telefono5, "el dia-mes-hora",. diameshora5
				FinSi
				Escribir Sin Saltar "Mesa 6 Capacidad: ", comensalesmaximos6
				Si estado6=Verdadero Entonces
					Escribir "Disponible"
				SiNo
					Escribir "No disponible"
					Escribir "reservada a ", Nombre6, "con telefono", Telefono6, "el dia-mes-hora",. diameshora6
				FinSi
				Escribir Sin Saltar "Mesa 7 Capacidad: ", comensalesmaximos7
				Si estado7=Verdadero Entonces
					Escribir "Disponible"
				SiNo
					Escribir "No disponible"
					Escribir "reservada a ", Nombre7,"con telefono", Telefono7, "el dia-mes-hora",. diameshora7
				FinSi
				Escribir Sin Saltar "Mesa 8 Capacidad: ", comensalesmaximos8
				Si estado8=Verdadero Entonces
					Escribir "Disponible"
				SiNo
					Escribir "No disponible"
					Escribir "reservada a ", Nombre8, "con telefono", Telefono8, "el dia-mes-hora", diameshora8
				FinSi
				
											
			2:	//ACCIONES PARA RESERVAR UNA MESA
				Escribir "Introducir el numero de la mesa a reservar"
				Leer num 
				Segun num Hacer
					1:
						Escribir "dia de la reserva "
						Leer dia1 
						Escribir "Numero de la reserva"
						Leer num1
						Escribir "Mes de la reserva"
						Leer mes1 
						Escribir "Hora de la reserva"
						Leer hora1 
						Escribir "Nombre de la reserva"
						Leer Nombre1 
						Escribir "Telefono de la reserva"
						Leer Telefono1 
						diameshora1=dia1+"."+mes1+"."+Hora1
						estado1=Falso 
						mesasocupadas<-mesasocupadas+1 
					2:
						Escribir "dia de la reserva "
						Leer dia2
						Escribir "Numero de la reserva"
						Leer num2
						Escribir "Mes de la reserva"
						Leer mes2
						Escribir "Hora de la reserva"
						Leer hora2
						Escribir "Nombre de la reserva"
						Leer Nombre2
						Escribir "Telefono de la reserva"
						Leer Telefono2
						diameshora2=dia2+"."+mes2+"."+Hora2
					3:
						Escribir "dia de la reserva "
						Leer dia3
						Escribir "Numero de la reserva"
						Leer num3
						Escribir "Mes de la reserva"
						Leer mes3
						Escribir "Hora de la reserva"
						Leer hora3
						Escribir "Nombre de la reserva"
						Leer Nombre3
						Escribir "Telefono de la reserva"
						Leer Telefono3
						diameshora3=dia3+"."+mes3+"."+Hora3
					4: 			
						Escribir "dia de la reserva "
						Leer dia4
						Escribir "Numero de la reserva"
						Leer num4
						Escribir "Mes de la reserva"
						Leer mes4
						Escribir "Hora de la reserva"
						Leer hora4
						Escribir "Nombre de la reserva"
						Leer Nombre4
						Escribir "Telefono de la reserva"
						Leer Telefono4
						diameshora4=dia4+"."+mes4+"."+Hora4
					5:
						Escribir "dia de la reserva "
						Leer dia5
						Escribir "Numero de la reserva"
						Leer num5
						Escribir "Mes de la reserva"
						Leer mes5
						Escribir "Hora de la reserva"
						Leer hora5
						Escribir "Nombre de la reserva"
						Leer Nombre5
						Escribir "Telefono de la reserva"
						Leer Telefono5
						diameshora5=dia5+"."+mes5+"."+Hora5
					6:
						Escribir "dia de la reserva "
						Leer dia6
						Escribir "Numero de la reserva"
						Leer num6
						Escribir "Mes de la reserva"
						Leer mes6
						Escribir "Hora de la reserva"
						Leer hora6
						Escribir "Nombre de la reserva"
						Leer Nombre6
						Escribir "Telefono de la reserva"
						Leer Telefono6
						diameshora6=dia6+"."+mes6+"."+Hora6
					7:	
						Escribir "dia de la reserva "
						Leer dia7
						Escribir "Numero de la reserva"
						Leer num7
						Escribir "Mes de la reserva"
						Leer mes7
						Escribir "Hora de la reserva"
						Leer hora7
						Escribir "Nombre de la reserva"
						Leer Nombre7
						Escribir "Telefono de la reserva"
						Leer Telefono7
						diameshora7=dia7+"."+mes7+"."+Hora7
					8:
						Escribir "dia de la reserva "
						Leer dia8
						Escribir "Numero de la reserva"
						Leer num8
						Escribir "Mes de la reserva"
						Leer mes8 
						Escribir "Hora de la reserva"
						Leer hora8 
						Escribir "Nombre de la reserva"
						Leer Nombre8 
						Escribir "Telefono de la reserva"
						Leer Telefono8 
						diameshora8=dia8+"."+mes8+"."+Hora8
						
						
						
						
						
						
				
					De Otro Modo:
						
				Fin Segun
				
			3:	//ACCIONES PARA LIBERAR UNA MESA
				Mesa2=estado2
		
				Escribir "¿Que mesa desea dejar libre?"
				Leer num
				Segun num Hacer
					2:
						Escribir "mesa 2 libre"
						estado2=Verdadero
						mesasocupadas<-mesasocupadas-1 
					3:
						Escribir "mesa 3 libre"
						estado3=Verdadero 
					4:
						Escribir "mesa 4 libre"
						estado4=Verdadero 
						mesasocupadas<-mesasocupadas-1 

					5:
						Escribir "mesa 5 libre"
						estado5=Verdadero
						mesasocupadas<-mesasocupadas-1 
					6:
						Escribir "mesa 6 libre"
						estado6=Verdadero
						mesasocupadas<-mesasocupadas-1 
					7:
						Escribir "mesa 7 libre"
						estado7=Verdadero
						mesasocupadas<-mesasocupadas-1 
					8:
						Escribir "mesa 8 libre"
						estado8=Verdadero
						mesasocupadas<-mesasocupadas-1 
						
					De Otro Modo:
						
				Fin Segun
				
				
				
				
				
				
			De Otro Modo:
				salir=Verdadero
		Fin Segun		
		
	Hasta Que salir=Verdadero
	
FinAlgoritmo