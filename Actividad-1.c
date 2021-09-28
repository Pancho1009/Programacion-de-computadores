#include <stdio.h>
#include <math.h>

int main() {


  int numero1 = 0;
  int numero2 = 0;
  int resultado = 0;


  printf("Ingrese su primer número por favor\n");
  scanf("%i", &numero1);
  printf("Ingrese su segundo número por favor\n");
  scanf("%i", &numero2);
  resultado = numero1 + numero2;
  printf("El resultado de la suma entre los números %i y %i es: %i\n", numero1, numero2, resultado);

  return 0;
}