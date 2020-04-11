#include <stdio.h>
#include <stdlib.h>

int main(){
    int len;
    puts("Ingresa el tamaño del arreglo:");
    scanf("%d",&len);
    int array[len];
    for (int i = 0; i < len; i++){
        printf("ingrese el valor numerico para el arreglo en la posición %d:",(i+1));
        scanf("%d",&array[i]);
    }
    for (size_t i = 0; i < count; i++){
        printf("Arreglo [%d] ==>  %d\n",i+1,array[i]);
    }
    
}