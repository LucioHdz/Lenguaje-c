#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int len;
    char origen [200];
    int pos=1;
    printf("Ingresa una palabra:\n");
    scanf("%s",&origen); //palabra
    len = strlen(origen);//     7
    char cad2[len];
    cad2[0]=origen[0];//  p
    
    for (int i = 1; i < len; i++){//     1
        int c=0;
        for (int j = 0; j < len; j++){// 0
            if (origen[i]==cad2[j]){
                c++;
            }
        }
        if (c==0){
            cad2[pos]= origen[i];//  p 
            pos++;
        }
    }
    
    for (int j = 0; j < strlen(cad2); j++){
        printf("%c => ",cad2[j]);
        int cont=0;
        for (int i = 0; i < len; i++){ 
            if(cad2[j]==origen[i]){
                cont++;
            }
        }
        printf("%d\n",cont);
    }
    return 0;
}
    