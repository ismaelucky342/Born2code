#include<stdio.h>
size_t getsize(float *ptr);
int     main()
{
    float array [20]; //float almacena 4 bytes asiq alamacena 80
    printf("el numero de bytes del arreglo es: %lu \n", sizeof(array)); 
    printf("el numero devuelto de bytes es: %lu\n", getsize(array));
    return 0; 
}
size_t getsize(float *ptr)
{
    return sizeof(ptr);
}