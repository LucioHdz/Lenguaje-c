#include <stdio.h>
#include <stdlib.h>

struct Empleado{
  char nombre[100];
  char sexo[3];
  int sueldo;
};

int main() {
  puts("******************");
  puts("*                *");
  puts("*    DATACIC     *");
  puts("*                *");
  puts("******************");
  struct Empleado emp[5];
  int menor=0;

  for (int i = 0; i < 2; i++) {
    printf("Ingresa el nombre del trabajador:\n" );
    scanf("%s",&emp[i].nombre );

    printf("Ingresa el sexo del %s:\n",emp[i].nombre );
    scanf("%s",&emp[i].sexo );

    printf("Ingresa el sueldo a ganar de %s:\n",emp[i].nombre);
    scanf("%d", &emp[i].sueldo);
    if (i>0 && emp[i].sueldo<emp[i-1].sueldo){
      menor=i;
    }
  }
  printf("La persona con menor sueldo es: \n");

  printf("Nombre: %s\n",emp[menor].nombre );
  printf("Sexo: %s\n",emp[menor].sexo );
  printf("Sueldo %d\n",emp[menor].sueldo );

  return 0;
}
