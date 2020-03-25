#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int res;
    char origen [200];
    char destino[200];
    printf("Ingresa una palabra:\n");
    scanf("%s",origen);
    printf("Ingresa una palabra:\n");
    scanf("%s",destino);
    res = strcmp(origen,destino);
    printf("Resultado: %s\n",(res==0)? "Ambas cadenas son iguales.":(res<0)? "La cadena 2 es mayor":"La cadena 1 es mayor");
    return 0;
}