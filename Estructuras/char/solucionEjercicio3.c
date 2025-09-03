#include <stdio.h>

// Solución Ejercicio 3
// 3. Realiza un programa que convierta una letra minúscula a mayúscula.

int main() {
    char letra;

    printf("Ingresa una letra minúscula: ");
    scanf("%c", &letra);

    // Verifica si es una letra minúscula
    if (letra >= 'a' && letra <= 'z') {
        // Convierte a mayúscula restando 32 (diferencia en ASCII)
        letra = letra - 32;
        printf("La letra en mayúscula es: %c\n", letra);
    } else {
        printf("No ingresaste una letra minúscula.\n");
    }

    return 0;
}
