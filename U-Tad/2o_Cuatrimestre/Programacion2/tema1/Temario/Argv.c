#include<stdio.h>

int     main(int    argc, char  *argv[])
{
    int i ;

    printf("argumentos introducidos: \n\n");

    for(i=0; i<argc; i++){
        printf("El argumento %d es %s\n", i, argv[i]);
    }
        printf("terminacion normal del programa\n");
        return 0;   
    
}