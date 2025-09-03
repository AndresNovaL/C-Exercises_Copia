#include <stdio.h>

// Solución Ejercicio 1
// 1. Declara un enum para los días de la semana e imprime el nombre de un día dado su valor.

enum Dia {LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO};

int main() {
    enum Dia hoy = VIERNES;

    // Imprimir nombre del día
    switch (hoy) {
        case LUNES:    printf("Hoy es lunes\n"); break;
        case MARTES:   printf("Hoy es martes\n"); break;
        case MIERCOLES:printf("Hoy es miércoles\n"); break;
        case JUEVES:   printf("Hoy es jueves\n"); break;
        case VIERNES:  printf("Hoy es viernes\n"); break;
        case SABADO:   printf("Hoy es sábado\n"); break;
        case DOMINGO:  printf("Hoy es domingo\n"); break;
        default:       printf("Día no válido\n");
    }

    return 0;
}
