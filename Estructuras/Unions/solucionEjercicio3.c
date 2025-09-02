#include <stdio.h>

// Solución Ejercicio 3
// 3. Crea una union para representar un valor que puede ser entero o carácter y muestra ambos casos.

// Definimos la unión
union Valor {
    int entero;
    char caracter;
};

int main() {
    union Valor v;

    // Caso 1: entero
    v.entero = 100;
    printf("Entero almacenado: %d\n", v.entero);

    // Caso 2: caracter (sobrescribe al entero)
    v.caracter = 'A';
    printf("Caracter almacenado: %c\n", v.caracter);

    return 0;
}
