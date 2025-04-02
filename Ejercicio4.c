#include <stdio.h>
int main(){
    int numero;
    printf("Ingresa un numero entre 1 y 100:");
    scanf("%d", &numero);
    while (numero < 1|| numero > 100){
        printf("Error: el numero debe estar entre 1 y 100.\n");
        printf("Intentalo de nuevo:");
        scanf("%d , &numero");
    }
    printf("Nùmero valido ingresado: %d\n", numero);
    return 0;
}