#include <stdio.h> // Biblioteca estándar para entrada y salida

// Solución Ejercicio 1
// 1. Escribe un programa que pida al usuario dos números enteros y muestre su suma.

int main() {
    int num1, num2, suma;

    // Solicita al usuario dos números enteros
    printf("Ingrese el primer número entero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número entero: ");
    scanf("%d", &num2);

    // Calcula la suma
    suma = num1 + num2;

    // Muestra el resultado
    printf("La suma de %d y %d es: %d\n", num1, num2, suma);

    return 0; // Fin del programa
}
