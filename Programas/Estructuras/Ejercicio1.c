#include <stdio.h>
#include <stdlib.h>

struct CD{
  char titulo[100];
  char artista[50];
  int canciones;
  int anio;
  float precio;
};

int main(void){
  struct CD cd1;
  printf("Ingresa el titulo:\n");
  scanf("%s",&cd1.titulo);

  printf("Ingresa el artista:\n");
  scanf("%s",&cd1.artista);

  printf("Ingresa el numero de canciones:\n");
  scanf("%d",&cd1.canciones);

  printf("Ingresa el año de lanzamiento:\n");
  scanf("%d",&cd1.anio);

  printf("Ingresa el precio del cd:\n");
  scanf("%f",&cd1.precio);

  printf("Titulo => %s\n",cd1.titulo);
  printf("Artista => %s\n",cd1.artista);
  printf("No. canciones => %d\n",cd1.canciones);
  printf("Año => %d\n",cd1.anio);
  printf("Precio => %f\n",cd1.precio);

  return 0;
}
