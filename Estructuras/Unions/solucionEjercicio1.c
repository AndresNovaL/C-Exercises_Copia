#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida

// Solución Ejercicio 1
// 1. Declara una union con un int y un float, asigna valores y muestra cómo se sobreescriben.

union Dato { // Define una unión llamada Dato
    int i; // Campo entero
    float f; // Campo flotante
};

int main() { // Función principal
    union Dato dato; // Declara una variable de tipo union Dato
    dato.i = 10; // Asigna 10 al campo entero
    printf("Valor entero: %d\n", dato.i); // Imprime el valor entero
    dato.f = 3.14; // Asigna 3.14 al campo flotante (sobrescribe el valor anterior)
    printf("Valor flotante: %.2f\n", dato.f); // Imprime el valor flotante
    return 0; // Indica que el programa terminó correctamente
}
