#include <stdio.h>
#include <stdlib.h>

struct Fraccion{
  int a;
  int b;
};
float suma(struct Fraccion f1,struct Fraccion f2);
float resta(struct Fraccion f1,struct Fraccion f2);
float division(struct Fraccion f1,struct Fraccion f2);

int main() {
  struct Fraccion f1;
  struct Fraccion f2;

  printf("Ingrese el numerador de la primer fraccion:\n" );
  scanf("%d\n",&f1.a );
  printf("Ingrese el denominador de la primer fraccion:\n" );
  scanf("%d\n",&f1.b );

  printf("Ingrese el numerador de la segunda fraccion:\n" );
  scanf("%d\n",&f2.a );
  printf("Ingrese el denominador de la segunda fraccion:\n" );
  scanf("%d\n",&f2.b );

  printf("El resultado de la suma de las dos fracciones es: %f\n",suma(f1,f2) );
  printf("El resultado de la resta de las dos fracciones es: %f\n",resta(f1,f2) );
  printf("El resultado de la division de las dos fracciones es: %f\n",division(f1,f2) );

  return 0;
}

float suma(struct Fraccion f1, struct Fraccion f2){

  return ((f1.a*f2.b)+(f1.b*f2.a))/(f1.b*f2.b);
}

float resta(struct Fraccion f1, struct Fraccion f2){
  return ((f1.a*f2.b)-(f1.b*f2.a))/(f1.b*f2.b);;
}

float division(struct Fraccion f1, struct Fraccion f2){
  return (f1.a*f2.b)/(f1.b*f2.a);
}
