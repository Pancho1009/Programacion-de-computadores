#include <stdio.h>

int main(){

    int numero = 0;

    printf("Ingrese un número: ");
    scanf("%i", &numero);

    for(int i = 2 ; i <= numero ; i++){

        //printf("BUSCAR SI EL %i TIENE 2 DIVISORES\n", i);

        int divisores = 0;

        for(int j = 2 ; j < i ; j++){
           // printf("REVISANDO: %i\n", j);
            
            int resto = i%j;
        
            if(resto == 0){
                //printf("El %i es divisor de %i\n", j, i);
                divisores++;
            } else {
                //printf("El %i no es divisor de %i\n", j, i);
            }
            
        }
        if(divisores == 0){
            printf("EL %i ES PRIMO!\n", i);
        } else {
            printf("EL %i NO ES PRIMO!\n", i);
        }
    }

    return 0;
}