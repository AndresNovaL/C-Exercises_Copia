#include <stdio.h>

// Solución Ejercicio 2
// 2. Crea un programa que determine si un número entero ingresado es par o impar.

int main() {
    int num;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("El numero %d es par.\n", num);
    else
        printf("El numero %d es impar.\n", num);

    return 0;
}
