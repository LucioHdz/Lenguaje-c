#include <stdio.h>
#include <stdlib.h>

int main(){
    int len,i;
    char *arreglo;
    printf("Ingresa el tamaño del arreglo:\n");
    scanf("%d",&len);
    
    arreglo = (char *) malloc((len+1)*sizeof(char));
    if(arreglo==NULL){
        puts("No puede asignarse memora al arreglo");
        puts("Finalizando programa...");
        exit(1);
    }
    for (i = 0; i < len; i++){
        printf("Ingresa la letra para posición %d:\n",i);
        scanf("%s",&arreglo[i]);
    }
    arreglo[i]='\0';
    printf("Arreglo ==>\t");
    for (i = len-1; i >=0; i--){
        printf("%c",arreglo[i]);
    }
    puts(" ");
}