#include <stdio.h>

// Solución Ejercicio 3
// 3. Realiza un programa que calcule el promedio de tres números reales.

int main() {
    float a, b, c, promedio;

    printf("Ingrese tres numeros reales: ");
    scanf("%f %f %f", &a, &b, &c);

    promedio = (a + b + c) / 3;

    printf("El promedio es: %.2f\n", promedio);

    return 0;
}
