#include <stdio.h>
char c; 

int main(){

    printf("Bienvenido, este es un conversor rápido de caracteres a código ACII\n");
    printf("Ingrese el carácter que desea convertir a ACII\n");
    scanf("%c", &c);

    printf("EL valor del carácter %c en código ACII es: %d", c, c);
}