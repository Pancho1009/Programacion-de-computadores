#include <stdio.h> 

    float tarea1 = 0;
    float tarea2 = 0;
    float tarea3 = 0;

    float laboratorios = 0;

    float prueba1 = 0;
    float prueba2 = 0;
    float prueba3 = 0;

int main(){

    printf("Ingrese la nota de la Prueba N°1:\n");
    scanf("%f", &prueba1);

    printf("Ingrese la nota de la Prueba N°2:\n");
    scanf("%f", &prueba2);

    printf("Ingrese la nota de la Tarea N°1:\n");
    scanf("%f", &tarea1);

    printf("Ingrese la nota de la Tarea N°2:\n");
    scanf("%f", &tarea2);

    printf("Ingrese la nota de la Tarea N°3:\n");
    scanf("%f", &tarea3);

    printf("Ingrese la nota de los Laboratorios:\n");
    scanf("%f", &laboratorios);

    prueba3 = (4.0 - 0.5 * (0.2 * tarea1 + 0.25 * tarea2 + 0.35 * tarea3 + 0.2 * laboratorios) - 0.5 * (0.2 * prueba1 + 0.35 * prueba2)) / (0.5 * 0.45);

    printf("Es necesaria una nota %.1f en la Prueba N°3 para poder aprobar\n", prueba3);

    return 0;
}