#include <stdio.h>

// Solución Ejercicio 2
// 2. Crea un programa que use un enum para representar los meses del año y muestre el mes correspondiente a un número.

enum Mes {ENERO = 1, FEBRERO, MARZO, ABRIL, MAYO, JUNIO, JULIO, AGOSTO, SEPTIEMBRE, OCTUBRE, NOVIEMBRE, DICIEMBRE};

int main() {
    int numero = 9; // Ejemplo: septiembre

    enum Mes mes = numero;

    switch (mes) {
        case ENERO:      printf("Mes: Enero\n"); break;
        case FEBRERO:    printf("Mes: Febrero\n"); break;
        case MARZO:      printf("Mes: Marzo\n"); break;
        case ABRIL:      printf("Mes: Abril\n"); break;
        case MAYO:       printf("Mes: Mayo\n"); break;
        case JUNIO:      printf("Mes: Junio\n"); break;
        case JULIO:      printf("Mes: Julio\n"); break;
        case AGOSTO:     printf("Mes: Agosto\n"); break;
        case SEPTIEMBRE: printf("Mes: Septiembre\n"); break;
        case OCTUBRE:    printf("Mes: Octubre\n"); break;
        case NOVIEMBRE:  printf("Mes: Noviembre\n"); break;
        case DICIEMBRE:  printf("Mes: Diciembre\n"); break;
        default:         printf("Número inválido\n");
    }

    return 0;
}
