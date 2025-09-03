#include <stdio.h>

// Solución Ejercicio 1
// 1. Escribe un programa que calcule el área de un círculo a partir de su radio (usa `float`).

int main() {
    float radio, area;

    printf("Ingrese el radio del círculo: ");
    scanf("%f", &radio);

    area = 3.1416 * radio * radio;

    printf("El área de un círculo de radio %.2f es %.2f\n", radio, area);
    return 0;
}
