#include <stdio.h>

float numeroreal1 = 0;
float numeroreal2 = 0;
float resultado = 0;
 
int main(){
    printf("ingrese numeros a dos numeros a multiplicar\n");
    printf("Ingrese ambos números reales de la forma X.X , Y.Y\n");
    scanf("%f , %f", &numeroreal1, &numeroreal2);

     resultado = numeroreal1 * numeroreal2;

    printf("El producto entre los números reales %.2f y %.2f es: %.2f\n", numeroreal1, numeroreal2, resultado);

}