#include <stdio.h>
#include <stdlib.h>

int potencia(float a, float b);
int main(void){
    int x;
    int y;
    int max;

    x=2;
    y=3;

    max = potencia(x,y);
    printf("La potencia es: %d", max);
    return 0;
}
int potencia (float a, float b){
    if (b < 1)
        return 1;
    return a * potencia (a, b-1);
}