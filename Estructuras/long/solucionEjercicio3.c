#include <stdio.h>

// Solución Ejercicio 3
// 3. Realiza un programa que cuente cuántos números impares hay en un arreglo de `long`.

int main() {
    long numeros[] = {1001, 2002, 3003, 4004, 5005};
    int tam = sizeof(numeros) / sizeof(numeros[0]);
    int impares = 0;

    for (int i = 0; i < tam; i++) {
        if (numeros[i] % 2 != 0) {
            impares++;
        }
    }

    printf("Cantidad de números impares: %d\n", impares);
    return 0;
}
