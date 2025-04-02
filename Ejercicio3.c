#include <stdio.h>
int main(){
    int i, j, filas = 4;
    for (i = 1; i <= filas; i++){
        for (j = 1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
} 