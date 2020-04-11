#include <stdio.h>
#include <stdlib.h>

int main(){
    int x=5,y=7;
    int *const p = &x;
    *p = 3;
    p=&y;
}