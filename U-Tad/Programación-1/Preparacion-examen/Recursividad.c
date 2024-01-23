#include<stdio.h>
long Factorial(long num);//prototipado
int     main()
{
    int num; 
    printf("ingresa un numero\n"); 
    scanf("%i", &num); 
    for(int i = 0; i<=num; i++)
    {
        printf("%ld\n", Factorial(i));
    }
    return 0; 

}
long    Factorial(long  num)
{
    if(num <= 1)
    {
        return 1; 
    }else{
        return(num * Factorial(num-1)); 
    }
}