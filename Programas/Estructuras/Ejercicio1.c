#include <stdio.h>
#include <stdlib.h>

struct CD{
  char titulo[100];
  char artista[50];
  int num_canciones;
  int anio;
  double precio;
};

int main() {
  struct CD cd1;
  printf("Ingresa el titulo:\n");
  scanf("%s\n",cd1.titulo);

  printf("Ingresa el artista:\n");
  scanf("%s\n",cd1.artista );

  printf("Ingresa la cantidad de canciones:\n");
  scanf("%d\n",&cd1.num_canciones);

  printf("Ingresa el año de lanzamiento:\n", );
  scanf("%d\n",&cd1.anio );

  printf("Ingresa el precio del album: \n", );
  scanf("%f\n",cd1.precio);

  printf("Titulo =>\t%s\n",cd1.titulo );
  printf("Artista =>\t%s\n",cd1.artista );
  printf("Canciones =>\t%d\n",cd1.num_canciones );
  printf("Año de lanzamiento =>\t%d\n",cd1.anio );
  printf("Costo =>\t$%f\n",cd1.precio );

  return 0;
}
