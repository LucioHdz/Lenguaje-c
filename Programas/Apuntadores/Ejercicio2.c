#include <stdio.h>
#include <stdlib.h>

int main(){
    int len;
    int *arreglo;
    printf("Ingresa el tamaño del arreglo:\n");
    scanf("%d",&len);
    
    arreglo = (int *) malloc(len*sizeof(int));
    if(arreglo==NULL){
        puts("No puede asignarse memora al arreglo");
    }
    for (short i = 0; i < len; i++){
        printf("Ingresa un numero en la posicion %d:",i);
        scanf("%d",&arreglo[i]);
    }
    for (int i = 0; i < len; i++)
    {
        printf("Arreglo[%d]==>\t%d\n",i,arreglo[i]);
    }
    

}