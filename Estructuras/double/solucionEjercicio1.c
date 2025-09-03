#include <stdio.h> // Biblioteca estándar de entrada y salida

// Solución Ejercicio 1
// 1. Escribe un programa que calcule el valor de pi usando la serie de Leibniz con 1000 términos.

int main() {
    int n = 1000; // Número de términos
    double pi = 0.0; // Variable para almacenar el resultado

    for (int i = 0; i < n; i++) {
        // Alterna signo: suma si i es par, resta si i es impar
        if (i % 2 == 0) {
            pi += 1.0 / (2 * i + 1);
        } else {
            pi -= 1.0 / (2 * i + 1);
        }
    }

    pi *= 4; // Multiplica el resultado por 4 según la fórmula

    printf("Valor aproximado de pi con %d términos: %.10f\n", n, pi);
    return 0;
}
