#include <stdio.h>

int main(){

    int numero1 = 0;
    int numero2 = 0;
    int numero3 = 0;

    printf("Ingrese su primer número por favor\n");
    scanf("%i", &numero1);

    printf("Ingrese su segundo número por favor\n");
    scanf("%i", &numero2);

    printf("Ingrese su tercero número por favor\n");
    scanf("%i", &numero3)

    if(numero1 > numero2 && numero1 > numero3){
        printf("El número %i\n", numero1);

    }else if(numero2 > numero1 && numero2 > numero3){
        printf("El número %i\n", numero2);

    } else if(numero3 > numero1 && numero3 > numero2){
        printf("El número %i\n", numero3);

    } if((numero1 == numero2) && (numero2 == numero3)){
        printf("Todos los números ingresados son iguales\n");

    return 0;
}