#include <stdio.h>
#include <stdlib.h>

struct Atleta{
  char deporte[100];
  char nombre[50];
  char pais[50];
  int medallas;
};

int main() {
  struct Atleta atleta1;
  printf("Ingresa el deporte:\n");
  scanf("%s",atleta1.deporte);

  printf("Ingresa el nombre del atleta:\n");
  scanf("%s",atleta1.nombre );

  printf("Ingresa el pais:\n");
  scanf("%s",&atleta1.pais);

  printf("Ingresa el total de medallas ganadas:\n" );
  scanf("%d",&atleta1.medallas );

  printf("Deporte =>\t%s\n",atleta1.deporte );
  printf("Nombre =>\t%s\n",atleta1.nombre );
  printf("Pais =>\t\t%s\n",atleta1.pais );
  printf("medallas =>\t%d\n",atleta1.medallas );
  return 0;
}
