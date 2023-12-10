int funcion_return() {
    int a = 5;
    int b = 10;
    int retorno; // Variable para almacenar el valor que se retornará

    if (a < b) {
        retorno = a; // Se retorna el valor de a
    } else {
        retorno = b; // Se retorna el valor de b
    }

    return retorno; // Retornar el valor almacenado en la variable retorno
}

/*EL USO DE UNA VARIABLE AUXILIAR PERMITE CON LOGICA NO TENER QUE REPETIR EL RETURN*/
/*DE LA OTRA MANERA EL CODIGO SE VERÍA ASÍ:*/
/*int funcion_return() {
    int a = 5;
    int b = 10;
    return a; // Retorna el valor de a (5) y sale de la función
    return b; // No se ejecuta porque la función ya retornó
}*/