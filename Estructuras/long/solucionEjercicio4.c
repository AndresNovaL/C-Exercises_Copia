#include <stdio.h>
#include <stdbool.h>

// Solución Ejercicio 4
// 4. Escribe un programa que determine si un número `long` es primo.

int main() {
    long numero = 2147483647; // Ejemplo: número primo grande
    bool esPrimo = true;

    if (numero < 2) esPrimo = false;
    for (long i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            esPrimo = false;
            break;
        }
    }

    if (esPrimo)
        printf("%ld es primo\n", numero);
    else
        printf("%ld no es primo\n", numero);

    return 0;
}
