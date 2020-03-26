#include <stdio.h>
#include <stdlib.h>

struct Atleta{
  char deporte[100];
  char nombre[50];
  char pais[50];
  int medallas;
  double precio;
};

int main() {
  struct Atleta atleta1;
  printf("Ingresa el deporte:\n");
  scanf("%s\n",cd1.deporte);

  printf("Ingresa el nombre del atleta:\n");
  scanf("%s\n",cd1.nombre );

  printf("Ingresa el pais:\n");
  scanf("%d\n",&cd1.pais);

  printf("Ingresa el total de medallas ganadas:\n", );
  scanf("%d\n",&cd1.medallas );

  printf("Ingresa el precio del atleta: \n", );
  scanf("%f\n",cd1.precio);

  printf("Deporte =>\t%s\n",cd1.deporte );
  printf("Nombre =>\t%s\n",cd1.nombre );
  printf("Pais =>\t%d\n",cd1.pais );
  printf("medallas =>\t%d\n",cd1.medallas );
  printf("precio =>\t$%f\n",cd1.precio );

  return 0;
}
