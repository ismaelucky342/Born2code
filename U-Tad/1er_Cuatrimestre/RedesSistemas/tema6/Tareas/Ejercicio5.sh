#!/bin/bash
file=$1
if [ -f "$file" ]
then
    echo "El fichero $file existe."
else
    echo "Este es un fichero nuevo" > $file
fi
