#include <stdio.h>

// Solución Ejercicio 1
// 1. Escribe un programa que calcule el factorial de un número grande usando `long`.

int main() {
    int n = 20; // Número para calcular el factorial
    long resultado = 1;

    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }

    printf("El factorial de %d es: %ld\n", n, resultado);
    return 0;
}
