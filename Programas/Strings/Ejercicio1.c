#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char cad[200];
    int len;
    printf("Introduce una palabra: \n");
    scanf("%s",cad);
    len = strlen(cad);
    for (int i = 0; i < len; i++){
        for (int j = 0; j < len; j++){
            printf("*");
        }
        puts(" ");
    }
    return 0;
}
            
        