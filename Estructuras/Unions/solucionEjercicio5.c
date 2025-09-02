#include <stdio.h>

// Solución Ejercicio 5
// 5. Realiza un programa que use una union para convertir entre tipos de datos (por ejemplo, int a float).

// Definimos la union
union Convertidor {
    int entero;
    float decimal;
};

int main() {
    union Convertidor c;

    // Guardamos un entero
    c.entero = 1067030938;  
    printf("Entero almacenado: %d\n", c.entero);

    // Interpretamos el mismo valor como float
    printf("Interpretado como float: %f\n", c.decimal);

    // Ahora guardamos un float
    c.decimal = 3.14f;
    printf("\nFloat almacenado: %f\n", c.decimal);

    // Interpretamos el mismo valor como entero
    printf("Interpretado como entero: %d\n", c.entero);

    return 0;
}
