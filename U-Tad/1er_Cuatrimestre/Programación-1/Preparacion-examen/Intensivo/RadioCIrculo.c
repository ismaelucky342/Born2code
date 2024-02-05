#include<stdio.h>
#define PI 3.1416

int    longitudCircunferencia(); 

int     main()
{
    int radio; 

    printf("introduzca radio de la circunferencia: \n");
    scanf("%d", &radio);
    
}


int    longitudCircunferencia()
{
    return(2*PI*radio); 
}