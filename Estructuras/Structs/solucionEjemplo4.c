#include <stdio.h>
#include <string.h>

// Solución Ejemplo 4
// 4. Realiza un programa que calcule el promedio de notas de varios estudiantes usando structs.

#define MAX_ESTUDIANTES 3
#define MAX_NOTAS 4

// Define el struct Estudiante
struct Estudiante {
    char nombre[20];
    float notas[MAX_NOTAS];
    float promedio;
};

int main() {
    struct Estudiante grupo[MAX_ESTUDIANTES]; // Arreglo de estudiantes

    // Datos de ejemplo
    strcpy(grupo[0].nombre, "Ana");
    grupo[0].notas[0] = 4.5;
    grupo[0].notas[1] = 3.8;
    grupo[0].notas[2] = 4.2;
    grupo[0].notas[3] = 5.0;

    strcpy(grupo[1].nombre, "Luis");
    grupo[1].notas[0] = 3.5;
    grupo[1].notas[1] = 4.0;
    grupo[1].notas[2] = 3.8;
    grupo[1].notas[3] = 4.1;

    strcpy(grupo[2].nombre, "Sofía");
    grupo[2].notas[0] = 4.9;
    grupo[2].notas[1] = 4.7;
    grupo[2].notas[2] = 4.8;
    grupo[2].notas[3] = 5.0;

    // Calcular promedio por estudiante
    for (int i = 0; i < MAX_ESTUDIANTES; i++) {
        float suma = 0;
        for (int j = 0; j < MAX_NOTAS; j++) {
            suma += grupo[i].notas[j];
        }
        grupo[i].promedio = suma / MAX_NOTAS;
    }

    // Mostrar resultados
    printf("Promedios de estudiantes:\n");
    for (int i = 0; i < MAX_ESTUDIANTES; i++) {
        printf("Nombre: %s - Promedio: %.2f\n", grupo[i].nombre, grupo[i].promedio);
    }

    return 0;
}
