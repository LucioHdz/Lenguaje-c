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
  struct Empleado emp1;

  printf("Ingresa el nombre del trabajador:\n" );
  scanf("%s",&emp1.nombre );

  printf("Ingresa el sexo del trabajador: (M/H)\n" );
  scanf("%s",&emp1.sexo );

  printf("Ingresa el sueldo a ganar de %s:\n",emp1.nombre);
  scanf("%d", &emp1.sueldo);

  printf("Nombre: %s\n",emp1.nombre );
  printf("Sexo: %s\n",emp1.sexo );
  printf("Sueldo %d\n",emp1.sueldo );

  return 0;
}
