Algoritmo Reserva_mesas
	Salir <- Falso
	// VARIABLES PARA los comensales máximos por mesas 
	comensalesmaximos1 <- 5
	comensalesmaximos2 <- 10
	comensalesmaximos3 <- 2
	comensalesmaximos4 <- 8
	comensalesmaximos5 <- 12
	comensalesmaximos6 <- 8
	comensalesmaximos7 <- 6
	comensalesmaximos8 <- 4
	Si dia1>31 Entonces
		Escribir 'valor incorrecto'
	FinSi
	estado1 <- Verdadero
	estado2 <- Verdadero
	estado3 <- Verdadero
	estado4 <- Verdadero
	estado5 <- Verdadero
	estado6 <- Verdadero
	estado7 <- Verdadero
	estado8 <- Verdadero
	// Todas las mesas ocupadas
	mesasocupadas <- 0
	Repetir
		Escribir ''
		Escribir 'SISTEMA DE RESERVA DE MESAS'
		Escribir 'Identificarse'
		Escribir '1.Gerente/Jefe de sala'
		Escribir '2.Servicio a mesa'
		Escribir '0. Salir del programa'
		Leer op
		Segun op  Hacer
			0:
				Salir <- Verdadero
			1: // ACCIONES PARA EL GERENTE/JEFE DE SALA
				Escribir '1. Ver estado de las mesas'
				Escribir '2. Reservar una mesa'
				Escribir '3. Liberar mesa'
				Escribir '4. Modificar mesas'
				Escribir '0. Salir del programa'
				Leer op
				Segun op  Hacer
					0:
						Salir <- Verdadero
					1: // ACCIONES PARA VER EL ESTADO DE LAS MESAS
						Escribir 'Mesa 10 Capacidad: ',comensalesmaximos1 Sin Saltar
						Si estado1=Verdadero Entonces
							Escribir ' Disponible'
						SiNo
							Escribir ' No disponible'
							Escribir ' reservada a ',Nombre1,' con telefono ',Telefono1,' el dia ',.,dia1,' del ',mes1,' a las ',hora1,' por ',Empleado1
						FinSi
						Escribir 'Mesa 11 Capacidad: ',comensalesmaximos2 Sin Saltar
						Si estado2=Verdadero Entonces
							Escribir ' Disponible'
						SiNo
							Escribir ' No disponible'
							Escribir ' reservada a ',Nombre2,' con telefono ',Telefono2,' el dia ',.,dia2,' del ',mes2,' a las ',hora2,' por ',Empleado2
						FinSi
						Escribir 'Mesa 12 Capacidad: ',comensalesmaximos3 Sin Saltar
						Si estado3=Verdadero Entonces
							Escribir ' Disponible'
						SiNo
							Escribir ' No disponible'
							Escribir ' reservada a ',Nombre3,' con telefono ',Telefono3,' el dia ',.,dia3,' del ',mes3,' a las ',hora3,' por ',Empleado3
						FinSi
						Escribir 'Mesa 13 Capacidad: ',comensalesmaximos4 Sin Saltar
						Si estado4=Verdadero Entonces
							Escribir ' Disponible'
						SiNo
							Escribir ' No disponible'
							Escribir ' reservada a ',Nombre4,' con telefono ',Telefono4,' el dia ',.,dia4,' del ',mes4,' a las ',hora4,' por ',Empleado4
						FinSi
						Escribir 'Mesa 14 Capacidad: ',comensalesmaximos5 Sin Saltar
						Si estado5=Verdadero Entonces
							Escribir ' Disponible'
						SiNo
							Escribir ' No disponible'
							Escribir ' reservada a ',Nombre5,' con telefono ',Telefono5,' el dia ',.,dia5,' del ',mes5,' a las ',hora5,' por ',Empleado5
						FinSi
						Escribir 'Mesa 15 Capacidad: ',comensalesmaximos6 Sin Saltar
						Si estado6=Verdadero Entonces
							Escribir ' Disponible'
						SiNo
							Escribir ' No disponible'
							Escribir ' reservada a ',Nombre6,' con telefono ',Telefono6,' el dia ',.,dia6,' del ',mes6,' a las ',hora6,' por ',Empleado6
						FinSi
						Escribir 'Mesa 16 Capacidad: ',comensalesmaximos7 Sin Saltar
						Si estado7=Verdadero Entonces
							Escribir ' Disponible'
						SiNo
							Escribir ' No disponible'
							Escribir ' reservada a ',Nombre7,' con telefono ',Telefono7,' el dia ',.,dia7,' del ',mes7,' a las ',hora7,' por ',Empleado7
						FinSi
						Escribir 'Mesa 17 Capacidad: ',comensalesmaximos8 Sin Saltar
						Si estado8=Verdadero Entonces
							Escribir ' Disponible'
						SiNo
							Escribir ' No disponible'
							Escribir ' reservada a ',Nombre8,' con telefono ',Telefono8,' el dia ',.,dia8,' del ',mes8,' a las ',hora8,' por ',Empleado8
						FinSi
					2: // ACCIONES PARA RESERVAR UNA MESA
						Escribir 'Introducir el numero de la mesa a reservar'
						Leer num
						Si num>8 Entonces
							Escribir 'valor incorrecto,solo hay 8 mesas'
							Repetir
								Escribir 'Introducir el numero de la mesa a reservar'
								Leer num
							Hasta Que num<=8
						FinSi
						Segun num  Hacer
							1:
								Escribir 'dia de la reserva '
								Leer dia1
								Si dia1>31 Entonces
									Escribir 'valor incorrecto,introduzca valores entre 1 y 31'
									Repetir
										Escribir 'dia de la reserva '
										Leer dia1
									Hasta Que dia1<=31
								FinSi
								Escribir 'Mes de la reserva'
								Leer mes1
								Si mes1>12 Entonces
									Escribir 'valor incorrecto,introduzca valores entre 1 y 12'
									Repetir
										Escribir 'mes de la reserva'
										Leer mes1
									Hasta Que mes1<=12
								FinSi
								Escribir 'Hora de la reserva'
								Leer hora1
								Si hora1>23 Entonces
									Escribir 'valor incorrecto,introduzca valores entre 00 y 23'
									Repetir
										Escribir 'hora de la reserva'
										Leer hora1
									Hasta Que mes1<=23
								FinSi
								Escribir 'Nombre de la reserva (sin apellidos)'
								Leer Nombre1
								Escribir 'Telefono de la reserva'
								Leer Telefono1
								Si Telefono1>999999999 Entonces
									Escribir 'valor incorrecto,introduzca valores entre 1 y 999999999'
									Repetir
										Escribir 'Telefono de la reserva'
										Leer Telefono1
									Hasta Que Telefono1<=999999999
								FinSi
								Escribir 'Nombre del empleado (sin apellidos)'
								Leer Empleado1
								estado1 <- Falso
								mesasocupadas <- mesasocupadas+1
							2:
								Escribir 'dia de la reserva '
								Leer dia2
								Si dia2>31 Entonces
									Escribir 'valor incorrecto,introduzca valores entre 1 y 31'
									Repetir
										Escribir 'dia de la reserva '
										Leer dia2
									Hasta Que dia2<=31
								FinSi
								Escribir 'Mes de la reserva'
								Leer mes2
								Si mes2>12 Entonces
									Escribir 'valor incorrecto,introduzca valores entre 1 y 12'
									Repetir
										Escribir 'mes de la reserva'
										Leer mes2
									Hasta Que mes2<=12
								FinSi
								Escribir 'Hora de la reserva'
								Leer hora2
								Si hora2>23 Entonces
									Escribir 'valor incorrecto,introduzca valores entre 00 y 23'
									Repetir
										Escribir 'hora de la reserva'
										Leer hora2
									Hasta Que hora2<=23
								FinSi
								Escribir 'Nombre de la reserva (sin apellidos)'
								Leer Nombre2
								Escribir 'Telefono de la reserva'
								Leer Telefono2
								Si Telefono2>999999999 Entonces
									Escribir 'valor incorrecto,introduzca valores entre 1 y 999999999'
									Repetir
										Escribir 'Telefono de la reserva'
										Leer Telefono2
									Hasta Que Telefono2<=999999999
								FinSi
								Escribir 'Nombre del empleado (sin apellidos)'
								Leer Empleado2
								estado2 <- Falso
								mesasocupadas <- mesasocupadas+1
							3:
								Escribir 'dia de la reserva '
								Leer dia3
								Si dia3>31 Entonces
									Escribir 'valor incorrecto,introduzca valores entre 1 y 31'
									Repetir
										Escribir 'dia de la reserva '
										Leer dia3
									Hasta Que dia3<=31
								FinSi
								Escribir 'Mes de la reserva'
								Leer mes3
								Si mes3>12 Entonces
									Escribir 'valor incorrecto,introduzca valores entre 1 y 12'
									Repetir
										Escribir 'mes de la reserva'
										Leer mes3
									Hasta Que mes3<=12
								FinSi
								Escribir 'Hora de la reserva'
								Leer hora3
								Si hora3>23 Entonces
									Escribir 'valor incorrecto,introduzca valores entre 00 y 23'
									Repetir
										Escribir 'hora de la reserva'
										Leer hora3
									Hasta Que hora3<=23
								FinSi
								Escribir 'Nombre de la reserva (sin apellidos)'
								Leer Nombre3
								Escribir 'Telefono de la reserva'
								Leer Telefono3
								Si Telefono3>999999999 Entonces
									Escribir 'valor incorrecto,introduzca valores entre 1 y 999999999'
									Repetir
										Escribir 'Telefono de la reserva'
										Leer Telefono3
									Hasta Que Telefono3<=999999999
								FinSi
								Escribir 'Nombre del empleado (sin apellidos)'
								Leer Empleado3
								estado3 <- Falso
								mesasocupadas <- mesasocupadas+1
							4:
								Escribir 'dia de la reserva '
								Leer dia4
								Si dia4>31 Entonces
									Escribir 'valor incorrecto,introduzca valores entre 1 y 31'
									Repetir
										Escribir 'dia de la reserva '
										Leer dia4
									Hasta Que dia4<=31
								FinSi
								Escribir 'Mes de la reserva'
								Leer mes4
								Si mes4>12 Entonces
									Escribir 'valor incorrecto,introduzca valores entre 1 y 12'
									Repetir
										Escribir 'mes de la reserva'
										Leer mes4
									Hasta Que mes4<=12
								FinSi
								Escribir 'Hora de la reserva'
								Leer hora4
								Si hora4>23 Entonces
									Escribir 'valor incorrecto,introduzca valores entre 00 y 23'
									Repetir
										Escribir 'hora de la reserva'
										Leer hora4
									Hasta Que hora4<=23
								FinSi
								Escribir 'Nombre de la reserva'
								Leer Nombre4
								Escribir 'Telefono de la reserva (sin apellidos)'
								Leer Telefono4
								Si Telefono4>999999999 Entonces
									Escribir 'valor incorrecto,introduzca valores entre 1 y 999999999'
									Repetir
										Escribir 'Telefono de la reserva'
										Leer Telefono4
									Hasta Que Telefono4<=999999999
								FinSi
								Escribir 'Nombre del empleado (sin apellidos)'
								Leer Empleado4
								estado4 <- Falso
								mesasocupadas <- mesasocupadas+1
							5:
								Escribir 'dia de la reserva '
								Leer dia5
								Si dia5>31 Entonces
									Escribir 'valor incorrecto,introduzca valores entre 1 y 31'
									Repetir
										Escribir 'dia de la reserva '
										Leer dia5
									Hasta Que dia5<=31
								FinSi
								Escribir 'Mes de la reserva'
								Leer mes5
								Si mes5>12 Entonces
									Escribir 'valor incorrecto,introduzca valores entre 1 y 12'
									Repetir
										Escribir 'mes de la reserva'
										Leer mes5
									Hasta Que mes5<=12
								FinSi
								Escribir 'Hora de la reserva'
								Leer hora5
								Si hora5>23 Entonces
									Escribir 'valor incorrecto,introduzca valores entre 00 y 23'
									Repetir
										Escribir 'hora de la reserva'
										Leer hora5
									Hasta Que hora5<=23
								FinSi
								Escribir 'Nombre de la reserva (sin apellidos)'
								Leer Nombre5
								Escribir 'Telefono de la reserva'
								Leer Telefono5
								Si Telefono5>999999999 Entonces
									Escribir 'valor incorrecto,introduzca valores entre 1 y 999999999'
									Repetir
										Escribir 'Telefono de la reserva'
										Leer Telefono5
									Hasta Que Telefono5<=999999999
								FinSi
								Escribir 'Nombre del empleado (sin apellidos)'
								Leer Empleado5
								estado5 <- Falso
								mesasocupadas <- mesasocupadas+1
							6:
								Escribir 'dia de la reserva '
								Leer dia6
								Si dia6>31 Entonces
									Escribir 'valor incorrecto,introduzca valores entre 1 y 31'
									Repetir
										Escribir 'dia de la reserva '
										Leer dia6
									Hasta Que dia6<=31
								FinSi
								Escribir 'Mes de la reserva'
								Leer mes6
								Si mes6>12 Entonces
									Escribir 'valor incorrecto,introduzca valores entre 1 y 12'
									Repetir
										Escribir 'mes de la reserva'
										Leer mes6
									Hasta Que mes6<=12
								FinSi
								Escribir 'Hora de la reserva (sin apellidos)'
								Leer hora6
								Si hora6>23 Entonces
									Escribir 'valor incorrecto,introduzca valores entre 00 y 23'
									Repetir
										Escribir 'hora de la reserva (sin apellidos)'
										Leer hora6
									Hasta Que hora6<=23
								FinSi
								Escribir 'Nombre de la reserva'
								Leer Nombre6
								Escribir 'Telefono de la reserva'
								Leer Telefono6
								Si Telefono6>999999999 Entonces
									Escribir 'valor incorrecto,introduzca valores entre 1 y 999999999'
									Repetir
										Escribir 'Telefono de la reserva'
										Leer Telefono6
									Hasta Que Telefono6<=999999999
								FinSi
								Escribir 'Nombre del empleado'
								Leer Empleado6
								estado6 <- Falso
								mesasocupadas <- mesasocupadas+1
							7:
								Escribir 'dia de la reserva '
								Leer dia7
								Si dia7>31 Entonces
									Escribir 'valor incorrecto,introduzca valores entre 1 y 31'
									Repetir
										Escribir 'dia de la reserva '
										Leer dia7
									Hasta Que dia7<=31
								FinSi
								Escribir 'Mes de la reserva'
								Leer mes7
								Si mes7>12 Entonces
									Escribir 'valor incorrecto,introduzca valores entre 1 y 12'
									Repetir
										Escribir 'mes de la reserva'
										Leer mes7
									Hasta Que mes7<=12
								FinSi
								Escribir 'Hora de la reserva'
								Leer hora7
								Si hora7>23 Entonces
									Escribir 'valor incorrecto,introduzca valores entre 00 y 23'
									Repetir
										Escribir 'hora de la reserva'
										Leer hora7
									Hasta Que hora7<=23
								FinSi
								Escribir 'Nombre de la reserva (sin apellidos)'
								Leer Nombre7
								Escribir 'Telefono de la reserva'
								Leer Telefono7
								Si Telefono7>999999999 Entonces
									Escribir 'valor incorrecto,introduzca valores entre 1 y 999999999'
									Repetir
										Escribir 'Telefono de la reserva'
										Leer Telefono7
									Hasta Que Telefono7<=999999999
								FinSi
								Escribir 'Nombre del empleado (sin apellidos)'
								Leer Empleado7
								estado7 <- Falso
								mesasocupadas <- mesasocupadas+1
							8:
								Escribir 'dia de la reserva '
								Leer dia8
								Si dia8>31 Entonces
									Escribir 'valor incorrecto,introduzca valores entre 1 y 31'
									Repetir
										Escribir 'dia de la reserva '
										Leer dia8
									Hasta Que dia8<=31
								FinSi
								Escribir 'Mes de la reserva'
								Leer mes8
								Si mes8>12 Entonces
									Escribir 'valor incorrecto,introduzca valores entre 1 y 12'
									Repetir
										Escribir 'mes de la reserva'
										Leer mes8
									Hasta Que mes8<=12
								FinSi
								Escribir 'Hora de la reserva'
								Leer hora8
								Si hora8>23 Entonces
									Escribir 'valor incorrecto,introduzca valores entre 00 y 23'
									Repetir
										Escribir 'hora de la reserva'
										Leer hora8
									Hasta Que hora8<=23
								FinSi
								Escribir 'Nombre de la reserva (sin apellidos)'
								Leer Nombre8
								Escribir 'Telefono de la reserva'
								Leer Telefono8
								Si Telefono8>999999999 Entonces
									Escribir 'valor incorrecto,introduzca valores entre 1 y 999999999'
									Repetir
										Escribir 'Telefono de la reserva'
										Leer Telefono8
									Hasta Que Telefono8<=999999999
								FinSi
								Escribir 'Nombre del empleado (sin apellidos)'
								Leer Empleado8
								estado8 <- Falso
								mesasocupadas <- mesasocupadas+1
						FinSegun
					3:
						// ACCIONES PARA LIBERAR UNA MESA
						Mesa2 <- estado2
						Escribir '¿Que mesa desea dejar libre?'
						Leer num
						Segun num  Hacer
							2:
								Escribir 'mesa 2 libre'
								estado2 <- Verdadero
								mesasocupadas <- mesasocupadas-1
							3:
								Escribir 'mesa 3 libre'
								estado3 <- Verdadero
							4:
								Escribir 'mesa 4 libre'
								estado4 <- Verdadero
								mesasocupadas <- mesasocupadas-1
							5:
								Escribir 'mesa 5 libre'
								estado5 <- Verdadero
								mesasocupadas <- mesasocupadas-1
							6:
								Escribir 'mesa 6 libre'
								estado6 <- Verdadero
								mesasocupadas <- mesasocupadas-1
							7:
								Escribir 'mesa 7 libre'
								estado7 <- Verdadero
								mesasocupadas <- mesasocupadas-1
							8:
								Escribir 'mesa 8 libre'
								estado8 <- Verdadero
								mesasocupadas <- mesasocupadas-1
							De Otro Modo:
								Salir <- Verdadero
						FinSegun
					4:
						// ACCIONES PARA MODIFICAR UNA MESA 
						Escribir '¿Que mesa desea modificar?'
						Leer num
						Segun num  Hacer
							1:
								Escribir 'inserte nueva capacidad'
								Leer num
								comensalesmaximos1 <- num
							2:
								Escribir 'inserte nueva capacidad'
								Leer num
								comensalesmaximos2 <- num
							3:
								Escribir 'inserte nueva capacidad'
								Leer num
								comensalesmaximos3 <- num
							4:
								Escribir 'inserte nueva capacidad'
								Leer num
								comensalesmaximos4 <- num
							5:
								Escribir 'inserte nueva capacidad'
								Leer num
								comensalesmaximos5 <- num
							6:
								Escribir 'inserte nueva capacidad'
								Leer num
								comensalesmaximos6 <- num
							7:
								Escribir 'inserte nueva capacidad'
								Leer num
								comensalesmaximos7 <- num
							8:
								Escribir 'inserte nueva capacidad'
								Leer num
								comensalesmaximos8 <- num
							De Otro Modo:
								Salir <- Verdadero
						FinSegun
				FinSegun
		FinSegun
		Segun op  Hacer
			0:
				Salir <- Verdadero
			2: // ACCIONES PARA SERVICIO A MESA
				Escribir '1. Ver estado de las mesas'
				Escribir '0. Salir del programa'
				Leer op
				Segun op  Hacer
					0:
						Salir <- Verdadero
					1: // ACCIONES PARA VER EL ESTADO DE LAS MESAS
						Escribir 'Mesa 10 Capacidad: ',comensalesmaximos1 Sin Saltar
						Si estado1=Verdadero Entonces
							Escribir ' Disponible'
						SiNo
							Escribir ' No disponible'
							Escribir ' reservada a ',Nombre1,' con telefono ',Telefono1,' el dia ',.,dia1,' del ',mes1,' a las ',hora1,' por ',Empleado1
						FinSi
						Escribir 'Mesa 11 Capacidad: ',comensalesmaximos2 Sin Saltar
						Si estado2=Verdadero Entonces
							Escribir ' Disponible'
						SiNo
							Escribir ' No disponible'
							Escribir ' reservada a ',Nombre2,' con telefono ',Telefono2,' el dia ',.,dia2,' del ',mes2,' a las ',hora2,' por ',Empleado2
						FinSi
						Escribir 'Mesa 12 Capacidad: ',comensalesmaximos3 Sin Saltar
						Si estado3=Verdadero Entonces
							Escribir ' Disponible'
						SiNo
							Escribir ' No disponible'
							Escribir ' reservada a ',Nombre3,' con telefono ',Telefono3,' el dia ',.,dia3,' del ',mes3,' a las ',hora3,' por ',Empleado3
						FinSi
						Escribir 'Mesa 13 Capacidad: ',comensalesmaximos4 Sin Saltar
						Si estado4=Verdadero Entonces
							Escribir ' Disponible'
						SiNo
							Escribir ' No disponible'
							Escribir ' reservada a ',Nombre4,' con telefono ',Telefono4,' el dia ',.,dia4,' del ',mes4,' a las ',hora4,' por ',Empleado4
						FinSi
						Escribir 'Mesa 14 Capacidad: ',comensalesmaximos5 Sin Saltar
						Si estado5=Verdadero Entonces
							Escribir ' Disponible'
						SiNo
							Escribir ' No disponible'
							Escribir ' reservada a ',Nombre5,' con telefono ',Telefono5,' el dia ',.,dia5,' del ',mes5,' a las ',hora5,' por ',Empleado5
						FinSi
						Escribir 'Mesa 15 Capacidad: ',comensalesmaximos6 Sin Saltar
						Si estado6=Verdadero Entonces
							Escribir ' Disponible'
						SiNo
							Escribir ' No disponible'
							Escribir ' reservada a ',Nombre6,' con telefono ',Telefono6,' el dia ',.,dia6,' del ',mes6,' a las ',hora6,' por ',Empleado6
						FinSi
						Escribir 'Mesa 16 Capacidad: ',comensalesmaximos7 Sin Saltar
						Si estado7=Verdadero Entonces
							Escribir ' Disponible'
						SiNo
							Escribir ' No disponible'
							Escribir ' reservada a ',Nombre7,' con telefono ',Telefono7,' el dia ',.,dia7,' del ',mes7,' a las ',hora7,' por ',Empleado7
						FinSi
						Escribir 'Mesa 17 Capacidad: ',comensalesmaximos8 Sin Saltar
						Si estado8=Verdadero Entonces
							Escribir ' Disponible'
						SiNo
							Escribir ' No disponible'
							Escribir ' reservada a ',Nombre8,' con telefono ',Telefono8,' el dia ',.,dia8,' del ',mes8,' a las ',hora8,' por ',Empleado8
						FinSi
				FinSegun
		FinSegun
	Hasta Que Salir=Verdadero
FinAlgoritmo