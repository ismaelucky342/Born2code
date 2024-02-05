#!/bin/bash
if [ $# -eq 0 ]
then
    echo "Introduce dos números:"
    read num1
    read num2
elif [ $# -eq 1 ]
then
    echo "Introduce un número:"
    read num2
    num1=$1
else
    num1=$1
    num2=$2
fi

if [ $num1 -gt $num2 ]
then
    echo $(($num1-$num2))
else
    echo $(($num2-$num1))
fi
