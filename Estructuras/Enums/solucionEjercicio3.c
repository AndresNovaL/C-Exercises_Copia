#include <stdio.h>

// Solución Ejercicio 3
// 3. Escribe un programa que use un enum para controlar el estado de un semáforo (rojo, amarillo, verde).

enum Semaforo {ROJO, AMARILLO, VERDE};

int main() {
    enum Semaforo estado = AMARILLO;

    switch (estado) {
        case ROJO:     printf("Estado: ROJO - Detente\n"); break;
        case AMARILLO: printf("Estado: AMARILLO - Precaución\n"); break;
        case VERDE:    printf("Estado: VERDE - Avanza\n"); break;
        default:       printf("Estado desconocido\n");
    }

    return 0;
}
