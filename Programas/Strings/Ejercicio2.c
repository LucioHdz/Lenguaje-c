#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int len;
    char origen [200];
    char destino[200];
    char aux[200];
    printf("Ingresa una palabra:\n");
    scanf("%s",origen);
    printf("Ingresa una palabra:\n");
    scanf("%s",destino);
    printf("Origen: %s\n",origen);
    printf("Destino: %s \n",destino);
    strcpy(aux,origen);
    strcpy(origen,destino);
    strcpy(destino,aux);
    printf("\n\nOrigen: %s\n",origen);
    printf("Destino: %s\n",destino);
    return 0;
}
    