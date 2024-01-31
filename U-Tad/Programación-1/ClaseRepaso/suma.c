/* Averiguar cuantos números naturales hay que sumar para alcanzar una cifra menor o igual que 10000
 * El programa pedirá al usuario que introduzca un número entre 1 y 10000
 * A continuación, sumará n números naturales empezando por 1 y siguiendo por 2, 3, etc... hasta igualar
 * o superar el límite
 * Después presentará por pantalla el resultado, indicando cuántos números ha sumado y cuál es la suma
 * Finalmente, comprobará que el resultado es correcto aplicando la fórmla Gauss descubrió por si mismo
 * en la escuela primaria, y es que la suma de los primeros n números naturales es n*(n+1)/2
 * 
 * El alumno definirá y usará la siguiente función para hacer la comprobación
 * 
 * int arithemticseries(int n);
 
*/ 

#include <stdio.h>


int arithmeticseries(int n);

int main(){

int limite;
int suma = 0;
int n = 0;
do{
	printf("Escribe el límite que quieres alcanzar como suma de números naturales de 1 en adelante, tiene que ser menor o igual que 10000\n");
	printf("Límite: ");
	scanf("%d",&limite);
}while((limite<0)||(limite >10000));

while (suma <= limite){
	n++;
	suma += n; 
}

printf("Por fuerza bruta, número de enteros sumados: %d, valor de la suma: %d\n",n,suma);


printf("Por la fórmula del niño Gauss, número de enteros sumados: %d, valor de la suma: %d\n",n,arithmeticseries(n));

}

int arithmeticseries(int n){
	return(n*(1+n)/2);
}
