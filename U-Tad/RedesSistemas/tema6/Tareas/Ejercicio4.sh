#!/bin/bash
while true
do
    echo "1: Potenciación"
    echo "2: Conversor de Kelvin a grados Celsius"
    read option
    case $option in
        1)
            echo "Introduce la base y el exponente:"
            read base
            read exp
            result=1
            for ((i=0;i<$exp;i++))
            do
                result=$(($result*$base))
            done
            echo "Resultado: $result"
            ;;
        2)
            echo "Introduce los grados Kelvin:"
            read kelvin
            celsius=$(($kelvin-273))
            echo "Grados Celsius: $celsius"
            ;;
        *)
            echo "Opción incorrecta."
            ;;
    esac
done
