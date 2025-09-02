#include <stdio.h>     // Biblioteca estándar de entrada y salida
#include <string.h>    // Biblioteca para manipular cadenas

// Solución Ejemplo 1
// 1. Define un struct para representar un estudiante (nombre, edad, promedio) y muestra sus datos.

// Define una estructura para representar un estudiante
struct Estudiante {
    char nombre[20];   // Campo para el nombre
    int edad;          // Campo para la edad
    float promedio;    // Campo para el promedio
};

int main() {
    struct Estudiante estudiante; // Declara una variable de tipo Estudiante

    // Asignación de valores
    strcpy(estudiante.nombre, "Felipe"); // Asigna el nombre
    estudiante.edad = 27;             // Asigna la edad
    estudiante.promedio = 4.3;        // Asigna el promedio

    // Muestra los datos
    printf("Nombre: %s\n", estudiante.nombre);
    printf("Edad: %d\n", estudiante.edad);
    printf("Promedio: %.2f\n", estudiante.promedio); // Muestra con dos decimales

    return 0;
}
