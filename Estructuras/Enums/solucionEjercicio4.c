#include <stdio.h>

// Solución Ejercicio 4
// 4. Realiza un programa que asocie un enum a los niveles de dificultad de un juego y los imprima.

enum Dificultad {FACIL = 1, MEDIO, DIFICIL};

int main() {
    enum Dificultad nivel = MEDIO;

    switch (nivel) {
        case FACIL:   printf("Nivel: Fácil\n"); break;
        case MEDIO:   printf("Nivel: Medio\n"); break;
        case DIFICIL: printf("Nivel: Difícil\n"); break;
        default:      printf("Nivel desconocido\n");
    }

    return 0;
}
