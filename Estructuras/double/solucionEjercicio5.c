#include <stdio.h>

// Solución Ejercicio 5
// 5. Haz un programa que calcule la potencia de un número (base y exponente double).

int main() {
    double base, resultado = 1.0;
    int exponente;

    // Pedir al usuario la base y el exponente (entero)
    printf("Ingrese la base: ");
    scanf("%lf", &base);

    printf("Ingrese el exponente (entero positivo): ");
    scanf("%d", &exponente);

    // Calcular la potencia manualmente
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }

    // Mostrar el resultado
    printf("El resultado de %.2lf ^ %d es: %.2lf\n", base, exponente, resultado);

    return 0;
}
