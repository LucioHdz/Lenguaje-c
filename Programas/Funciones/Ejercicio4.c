#include <stdlib.h>
#include <stdio.h>

int factorial(int num);

int main(){
    int num;
    puts("Ingresa un numero:");
    scanf("%d",&num);
    printf("El factorial de  %d es: %d\n", num, factorial(num));
    return 0;
}

int factorial(int num){
    if(num>0){
        return num * factorial(num-1);
    }
    return 1;
}