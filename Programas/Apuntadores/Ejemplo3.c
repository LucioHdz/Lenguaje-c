#include <stdio.h>
#include <stdlib.h>

int main(){
    char c = 'z';
    char *pc = &c;
    char **ppc = &pc;
    char ***pppc = &ppc;
    printf("%c\n",***pppc);
    ***pppc = 'm';
    printf("%c",***pppc);
    
}