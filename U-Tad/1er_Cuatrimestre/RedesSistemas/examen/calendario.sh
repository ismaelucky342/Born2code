#!bin/bash/
#Primero, creamos una función de ayuda que nos ayude a ver el uso
#del script
function ayuda(){
cat << EOO
SYNOPSIS
./calendario.sh [OPCIONES]
DESCRIPCION
	Escribe la fecha en diferentes formatos
	Para el formato breve opcion: -c o --corta
    Para el formato completo opcion: -l o --larga 
	CODIGOS DE RETORNO
	0 Si no hay ningun error
	1 Si fallo
    2 Si opción incorrecta
EOO
}
#Si usamos -help o -h o espacio en blanco, usara la función ayuda
if [ "$1" = "-help" -o "$1" = "-h" ]; do
    ayuda();
done
#Si hay más de un parámetro dara error 1 y explicara su uso correcto
elif [ $# -gt 1 ]; do
    echo "Solo se admite un parámetro"
    echo "Uso : ./calendario.sh -h o ./calendario.sh -help para mas información"
    exit 1
    done
#Si usamos -c o --corta mostrará la fecha de hoy con el formato “$DIA/$MES/$AÑO”
elif [ "$1" = "-c" -o "$1" = "--corta" ]; do
    echo "$DIA/$MES/$AÑO"
    exit 0
    done
#Si usamos -l o --larga  mostrará la fecha de hoy con el formato “Hoy es el día '$DIA' del mes '$MES' del año '$AÑO'.”
elif [ "$1" = "-l" -o "$1" = "--larga" ]; do
    echo "Hoy es el día '$DIA' del mes '$MES' del año '$AÑO'"
    exit 0
    done
#Si ponemos un espacio nos hará la función ayuda creada antes 
else 
	echo "Opción incorrecta"
    exit 2
done

