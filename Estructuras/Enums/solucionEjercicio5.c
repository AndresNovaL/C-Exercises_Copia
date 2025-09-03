#include <stdio.h>

// Solución Ejercicio 5
// 5. Haz un programa que recorra un enum con un ciclo y muestre todos sus valores.

enum Dia {LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO};

int main() {
    for (int i = LUNES; i <= DOMINGO; i++) {
        switch (i) {
            case LUNES:     printf("LUNES\n"); break;
            case MARTES:    printf("MARTES\n"); break;
            case MIERCOLES: printf("MIÉRCOLES\n"); break;
            case JUEVES:    printf("JUEVES\n"); break;
            case VIERNES:   printf("VIERNES\n"); break;
            case SABADO:    printf("SÁBADO\n"); break;
            case DOMINGO:   printf("DOMINGO\n"); break;
        }
    }

    return 0;
}
