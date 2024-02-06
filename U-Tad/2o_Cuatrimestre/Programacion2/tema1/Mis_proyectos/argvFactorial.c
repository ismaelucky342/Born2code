#include<stdio.h>
#include<stdlib.h>



long long   factorial(int   n){
    if(n==0)
        return 1; 
    else 
        return n * factorial(n-1); //recursividad se llama a si misma la funcion
}

int     main(int argc, char *argv[]){
    if(argc != 2){
        printf("profavor introduce exactamente un numero\n ");
        return 1; 
    }

    int num = argv[1];

    long long fact = factorial(num);

    printf("El factorial de %d es %lld.\n ", num, fact);
    return 0; 
}