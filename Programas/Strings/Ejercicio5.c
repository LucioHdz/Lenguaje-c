#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int j;
    char origen [200];
    char dos[200];
    printf("Ingresa una palabra:\n");
    scanf("%s",origen);
    j= strlen(origen)-1;
    for(int i = 0; i<strlen(origen);i++){
        dos [i] =origen[j];
        j--; 
    }
    j = strcmp(origen,dos);
    printf("\n\nPalabra: %s\n", (j==0)? "La palabra es palindroma.\n":"La palabra NO es palindroma.\n");
    return 0;
}