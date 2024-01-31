#include<stdio.h>

int main()
{
    float nota1, nota2, notaF; 

    printf("ingresa la nota del priemr examen: \n");
    scanf("%f", &nota1);

    printf("ingresa la nota del segundo examen; \n");
    scanf("%f", &nota2);

    
    notaF = ((nota1 + nota2)/2);
    printf("la nota del primer examen es: %f \n", nota1);
    printf("la nota del segundo examen es: %f \n", nota2); 
    printf("la nota final es:  %2.f", notaF);
    return 0; 
}