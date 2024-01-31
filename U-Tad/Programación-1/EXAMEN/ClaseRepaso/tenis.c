/**
  Este programa almacena el nombre de 6 jugadores de tenis y crea 3 partidos.
  Pide el resultado por pantalla y lo guarda en una matriz de resultados
  A continuación imprime los ganadores de los 3 partidos
*/
#define NUM_JUGADORES 6
#define MAX_NOMBRE 10

#include <stdio.h>


void main()
{
  char jugadores[NUM_JUGADORES][MAX_NOMBRE];
  int resultado [NUM_JUGADORES];

  for (int i = 0; i < NUM_JUGADORES; i++)
  {
    printf("Introduce jugador: ");
    scanf("%s", jugadores[i]);
  }

  printf("Introduce los resultados con dos numeros separados por un espacio: \n");

  for (int i = 0; i < NUM_JUGADORES; i+=2)		// Incrementamos de 2 en 2
  {
    printf("Introduce el resultado del partido de %s-%s: ", jugadores[i], jugadores[i+1]);
    scanf ("%d %d", &resultado[i], &resultado[i+1]);
  }

  printf("Los ganadores de los partidos son: \n");
  for (int i = 0; i < NUM_JUGADORES; i+=2)		// Incrementamos de 2 en 2
  {
    if (resultado[i] > resultado[i+1]) {
      printf("%s\n", jugadores[i]);
    } else if (resultado[i] < resultado[i+1]){
      printf("%s\n", jugadores[i + 1]);
    } else {
      printf ("%s - %s -> resultado invalido\n", jugadores[i], jugadores[i+1]);
    }
  }
}
