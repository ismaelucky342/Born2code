#include <stdio.h>
#include <stdlib.h>

#define NUM_JUGADORES 6
#define NUM_PARTIDOS 3
#define MAX_NOMBRE 20

// Declaración de la función para leer los nombres de los jugadores
void leerJugadores(char jugadores[NUM_JUGADORES][MAX_NOMBRE]);

int main() {
    char jugadores[NUM_JUGADORES][MAX_NOMBRE];
    int resultados[NUM_PARTIDOS][2];

    // Llamada a la función para leer los nombres de los jugadores
    leerJugadores(jugadores);

    // Loop para ingresar los resultados de los partidos
    for (int i = 0; i < NUM_PARTIDOS; i++) {
        printf("Introduce el resultado del partido %d para %s y %s (0-7): ", i + 1, jugadores[i*2], jugadores[i*2+1]);
        scanf("%d %d", &resultados[i][0], &resultados[i][1]);
    }

    // Loop para determinar y mostrar el ganador de cada partido
    for (int i = 0; i < NUM_PARTIDOS; i++) {
        if (resultados[i][0] == resultados[i][1]) {
            printf("Resultado inválido para el partido %d.\n", i + 1);
        } else if (resultados[i][0] > resultados[i][1]) {
            printf("El ganador del partido %d es %s.\n", i + 1, jugadores[i*2]);
        } else {
            printf("El ganador del partido %d es %s.\n", i + 1, jugadores[i*2+1]);
        }
    }

    return 0;
}

// Definición de la función para leer los nombres de los jugadores
void leerJugadores(char jugadores[NUM_JUGADORES][MAX_NOMBRE]) {
    for (int i = 0; i < NUM_JUGADORES; i++) {
        printf("Introduce el nombre del jugador %d: ", i + 1);
        scanf("%s", jugadores[i]);
    }
}
