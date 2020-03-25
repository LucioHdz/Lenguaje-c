#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int len;
    char origen [200];
    char destino[200];
    
    puts("Ingresa la primer cadena: ");
    scanf("%s",origen);
    puts("Ingresa la segunda cadena:");
    scanf("%s",destino);
    len = strlen(origen);
    for (int i = 0; i <len; i++){
        strcat(origen,destino);
    }
    printf("%s\n", origen);
    return 0;
}