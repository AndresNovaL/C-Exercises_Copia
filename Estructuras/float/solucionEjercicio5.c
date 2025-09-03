#include <stdio.h>
#include <math.h>

// Solución Ejercicio 5
// 5. Haz un programa que calcule la raíz cuadrada de un número ingresado por el usuario.


int main() {
    float num, raiz;

    printf("Ingrese un número: ");
    if (scanf("%f", &num) != 1) {
        printf("Entrada inválida. Por favor ingrese un número.\n");
        return 1; // Código de error
    }

    if (num < 0) {
        printf("No se puede calcular la raíz cuadrada de un número negativo.\n");
    } else {
        raiz = sqrt(num);
        printf("La raíz cuadrada de %.2f es: %.2f\n", num, raiz);
    }

    return 0; // Fin exitoso
}
