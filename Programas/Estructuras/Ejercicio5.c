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
  struct Atleta atleta[10];
  int mayor=0;
  for (int i = 0; i < 10; i++) {
    printf("Ingresa el deporte:\n");
    scanf("%s",&atleta[i].deporte);

    printf("Ingresa el nombre del atleta:\n");
    scanf("%s",&atleta[i].nombre );

    printf("Ingresa el pais:\n");
    scanf("%s",&atleta[i].pais);

    printf("Ingresa el total de medallas ganadas:\n" );
    scanf("%d",&atleta[i].medallas );

    if (i<10 && i>0 && atleta[i].medallas>atleta[i-1].medallas){
      mayor=i;
    }

    printf("Ingresa el precio del atleta: \n");
    scanf("%f",&atleta[i].precio);
  }
  printf("El que tiene mas medallas es: %s\n",atleta[mayor].nombre );

  printf("Deporte =>\t%s\n",atleta[mayor].deporte );
  printf("Nombre =>\t%s\n",atleta[mayor].nombre );
  printf("Pais =>\t%s\n",atleta[mayor].pais );
  printf("medallas =>\t%d\n",atleta[mayor].medallas );
  printf("precio =>\t$%f\n",atleta[mayor].precio );

  return 0;
}
