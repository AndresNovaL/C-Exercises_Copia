#include <stdio.h>
#include <string.h>

// Solución Ejercicio 2
// 2. Escribe un programa que use una union para almacenar diferentes tipos de datos y los imprima.

// Definimos la unión
union Dato {
    int entero;
    float decimal;
    char texto[50];
};

int main() {
    union Dato d;

    // Guardar un entero
    d.entero = 42;
    printf("Entero: %d\n", d.entero);

    // Guardar un flotante (sobrescribe al entero)
    d.decimal = 3.14;
    printf("Decimal: %.2f\n", d.decimal);

    // Guardar un texto (sobrescribe al flotante)
    strcpy(d.texto, "Hola, mundo");
    printf("Texto: %s\n", d.texto);

    return 0;
}
