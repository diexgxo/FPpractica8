#include <stdio.h>
int main(){
    int i = 1, j;
    int filas = 4;
    while (i <= filas) {
        j = 1;
        while (j <= i){
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}