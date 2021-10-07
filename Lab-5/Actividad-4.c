#include <stdio.h>
#include <math.h>

float radio = 0;
float perimetro = 0;
float area = 0;

int main(){

    printf("Ingrese el valor del radio para calcular su área y perimetro correspondiente\n");
    scanf("%f", &radio);

    area = (M_PI * radio);
    perimetro = (2 * M_PI * radio);

    printf ("El resultado del área es %f y el del perimetro es %f", area, perimetro);

    return 0;

}