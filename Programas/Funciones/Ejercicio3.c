#include <math.h>
#include <stdio.h>
#include <stdlib.h>

float calcularArea(int a, int b, int c);
int main(){
    int a;
    int b;
    int c;
    puts("Ingresa el lado a:");
    scanf("%d",&a);    
    puts("Ingresa el lado b:");
    scanf("%d",&b);
    puts("Ingresa el lado c:");
    scanf("%d",&c);
    printf("Area = %f",calcularArea(a,b,c));
    return 0;
}

float calcularArea(int a, int b, int c){
    float p = (float)(a+b+c)/2;
    double op = p*((p-a)*(p-b)*(p-c));
    double area = sqrt(op);
    return area;
}