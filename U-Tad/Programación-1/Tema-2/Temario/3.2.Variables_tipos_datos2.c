/* Sección de las directivas del compilador */
#include <stdio.h>

/* Sección de las variables globales. 
“cuenta” es una variable global */
int cuenta;  

/* Sección de los prototipos de las funciones de usuario */
void func1 (void);
void func2 (void);

int main(void){
   cuenta = 10;
   /*muestra el valor de cuenta*/
   printf ("A la entrada del main cuenta es %d\n", cuenta); 
   func1 ();
   /*muestra el valor de cuenta*/
   printf ("A la salida del main cuenta es %d\n", cuenta);  
   return 0;
}
void func1 (void){
   int temp;
   temp = cuenta;
   func2 ();
   /* muestra el valor de temp y de cuenta*/
   printf("A la salida de Func1 temp es %d y cuenta es %d\n", temp, cuenta);  
}
void func2 (void){
    cuenta = 15;
  /*muestra el valor de cuenta*/	
   printf ("A la salida de Func2 cuenta es %d\n", cuenta); 
}