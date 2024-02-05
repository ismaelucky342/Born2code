#include <stdio.h>//libreria stdio 

/* Funciones prototipadas */
//Funcion 1 para leer la fecha correcta, lo cual ocurrira si es valida o no. 
//considerando los límites para el año, mes y día, así como el número correcto de días para cada mes
void leeFechaCorrecta(int *dia, int *mes, int *year);

//Funcion 2 para calcular numero magico asociado a la fecha de nacimiento 
//Lo obtendremos sumando todos los dígitos de la fecha de nacimiento y repitiendo este proceso hasta que se obtenga un solo dígito
int calculaNumeroMagico(int dia, int mes, int year);

int main() {
    int dia, mes, year;

    // Solicitar al usuario la fecha de nacimiento
    printf("Introduce tu Fecha de Nacimiento.\n");
    leeFechaCorrecta(&dia, &mes, &year);

    // Mostrar la Fecha de Nacimiento
    printf("Tu fecha de Nacimiento es: %02d/%02d/%d\n", dia, mes, year);

    // Calcular y mostrar el número mágico
    int numMagico = calculaNumeroMagico(dia, mes, year);
    printf("El numero magico asociado a tu fecha de nacimiento es: %d\n", numMagico);

    return 0;
}

void leeFechaCorrecta(int *dia, int *mes, int *year) {
    int DIAS_MES[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Leer año
    printf("year: ");
    while (scanf("%d", year) != 1 || *year <= 0) {
        printf("Entrada no valida. Introduce un año valido: ");
        while (getchar() != '\n'); // Limpia el búfer
    }

    // Leer mes
    printf("month: ");
    while (scanf("%d", mes) != 1 || *mes < 1 || *mes > 12) {
        printf("Entrada no valida. Introduce un mes valido: ");
        while (getchar() != '\n'); // Limpia el búfer
    }

    // Leer día
    printf("day: ");
    while (scanf("%d", dia) != 1 || *dia < 1 || *dia > DIAS_MES[*mes]) {
        printf("Entrada no valida. Introduce un dia valido: ");
        while (getchar() != '\n'); // Limpia el búfer
    }
}

int calculaNumeroMagico(int dia, int mes, int year) {
    //inicio de la suma 
    int suma = dia + mes + year;
    //reduccion del numero a un solo digito 
    while (suma > 9) {
        int temp = suma;
        suma = 0;
        while (temp != 0) {
            suma += temp % 10;
            temp /= 10;
        }
    }
    return suma;//resultado
}
/*--Ismael Hernandez || 07-12-23 --*/
/*--Notas sobre el desarrollo del codigo--*/

//El programa se ha desarrollado sin problemas hasta contemplar las excepciones en la ejecucion, se ha dividido en 2 funciones prototipadas y el main
//se ha añadido el bloque -- while (getchar() != '\n'); -- para evitar un desbordamiento en las excepciones de año mes y dia no valido. 
//Con esta modificacion se limpia el buffer, y el programa muestra el mensaje y vuelve a pedir al usuario que introduzca un mes/año/dia valido
//inicialmente como opcion para resolverlo se creo otra funcion independiente para limpiar el buffer, pero la he considerado innecesaria haciendo este ajuste sencillo. 