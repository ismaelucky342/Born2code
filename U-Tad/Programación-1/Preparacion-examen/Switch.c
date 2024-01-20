#include<stdio.h>

int     main()
{
    int casos; 

    printf("ingresa un numero\n");
    scanf("%i", &casos); 
    switch (casos)
    {
        case 1:
        printf("Elegiste el 1er caso\n");
        break;
        case 2:
        printf("Elegiste el 2o caso\n");
        break;
        case 3:
        printf("Elegiste el 3o caso\n");
        break;
        case 4:
        printf("Elegiste el 4o caso\n");
        break;
    
        default:
        printf("No elegiste entre los casos validos\n");
        break;
    }
    return 0;
}