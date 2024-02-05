#include <stdio.h>


void		leerTemperatura(int temperaturas[7][24]); 
int main() {
    int temperaturas[7][24];
    int minimo = 100, maximo = -100;
    float media_semana = 0, media_dia[7] = {0};
    int dias_sup_30 = 0;

    // Leer las temperaturas
	for(int i = 1; i <= 7; i++){
		printf("introduce las temperaturas del dia %d", i);
		for(int j = 0; j < 24; j++){
			scanf("%d"; &temperaturas[i][j]); 
			
		
   
            // Actualizar el minimo y el maximo de la semana
            if(temperaturas[i][j] < minimo) minimo = temperaturas[i][j];
            if(temperaturas[i][j] > maximo) maximo = temperaturas[i][j];

            // Sumar para la media de la semana y del dia
            media_semana += temperaturas[i][j];
            media_dia[i] += temperaturas[i][j];
        }

        // Calcular la media del dia
        media_dia[i] /= 24;

        // Comprobar si la media del dia es superior a 30
        if(media_dia[i] > 30) dias_sup_30++;
	}
    // Calcular la media de la semana
    media_semana /= (7 * 24);

    printf("La temperatura minima de la semana fue: %d\n", minimo);
    printf("La temperatura maxima de la semana fue: %d\n", maximo);
    printf("La temperatura media de la semana fue: %.2f\n", media_semana);
    for(int i = 0; i < 7; i++) {
        printf("La temperatura media del dia %d fue: %.2f\n", i+1, media_dia[i]);
    }
    printf("El numero de dias con media superior a 30 grados fue: %d\n", dias_sup_30);

    return 0;
}

void		leerTemperatura(int temperaturas[7][24]); 
{
	for(int i = 1; i <= 7; i++){
		printf("introduce las temperaturas del dia %d", i);
		for(int j = 0; j < 24; j++){
			scanf("%d"; &temperaturas[i][j]); 
			
		}
}