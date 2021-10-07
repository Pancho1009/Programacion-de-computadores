#include <stdio.h>

int main(){
    long clave_correcta = 20927194;
    long clvae_usuario = 0;
    printf("Bienvenido!\n");
    printf("Ingrese su clave: ");
    scanf("%lu, &clave_usuario");
    printf("%lu\n, clave_usuario") 
    
    if (clave_usuario == clave_correcta){
        printf("La clave es correcta!\n");
    } else {
        printf("La clave es incorrecta:(\n");
        printf("Le quedan 2 intentos.\n")
        printf("Por favor ingrese nuevamente su clave: ");
        sacnf("%lu", &clave_usuario);
        if(clave_usario == clave_correcta){
            printf("La clave es correcta!\n");
    } else {
        printf("La clave es incorrecta:(\n");
        printf("Le queda 1 intento.\n")
        printf("Por favor ingrese nuevamente su clave: ");
        sacnf("%lu", &clave_usuario);
        if(clave_usario == clave_correcta){
            printf("La clave es correcta!\n");
    } else {
        printf("Usuario bloqueado"\n);
    }

    return 0;
}