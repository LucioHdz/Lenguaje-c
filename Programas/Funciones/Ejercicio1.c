#include <stdio.h>
#include <stdlib.h>

int maximo(int a, int b);

int main(){
    int a;
    int b;
    puts("Ingresa un numero:");
    scanf("%d",&a);    
    puts("Ingresa un numero:");
    scanf("%d",&b);

    printf("El numero mayor es: %d",maximo(a,b));
    return 0;
}

int maximo(int a, int b){
    return (a>b)? a:b;
}