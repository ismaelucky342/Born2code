// Definición de una variable
let miVariable = "Hola, Mundo!";

// Imprimir en la consola
console.log(miVariable);

// Condición utilizando una comparación de igualdad
if (miVariable === "Hola, Mundo!") {
  // Si la condición es verdadera, imprime otro mensaje
  console.log("La variable es igual a 'Hola, Mundo!'");
} else {
  // Si la condición es falsa, imprime otro mensaje
  console.log("La variable no es igual a 'Hola, Mundo!'");
}

// Función que suma dos números
function sumar(a, b) {
  return a + b;
}

// Llamada a la función y asignación del resultado a una variable
let resultado = sumar(3, 5);

// Imprimir el resultado
console.log("La suma es: " + resultado);

/* Normas de JavaScript:
1. No se tienen en cuenta los espacios en blanco y las nuevas líneas.
2. Se distinguen las mayúsculas y minúsculas. Es case sensitive.
3. No se define el tipo de las variables. A diferencia de otros lenguajes de programación, una misma variable puede almacenar diferentes tipos de datos.
4. No es necesario terminar cada sentencia con el carácter de punto y coma, pero se recomienda.
5. Se pueden incluir comentarios.
   // Esto es un comentario de línea
   /* Esto es un comentario de varias líneas */

