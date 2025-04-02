#include <stdio.h>
int main(){
    int n, i;
    printf("Ingresa un número natural\n");
    scanf("%d" , &n);
    i = 1;
    while (i<=n){
        printf("%d\n" ,i);
        i++;
    }
    return 0;
}