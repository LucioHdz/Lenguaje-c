#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void voltear(char cad[]);

int main(){
    char a[200];
    puts("Ingresa la palabra:");
    scanf("%s",a);

    voltear(a);

    return 0;
}

void voltear(char cad[]){
    int len=strlen(cad);
    char cad2[len];
    int j=0;
    for (int i = strlen(cad)-1; i >=0; i--){
        cad2[j]= cad[i]; 
        j++;
    }
    printf("\n%s\n", cad2);
}