#include <stdio.h>
#include <stdlib.h>

struct Empleado{
  char nombre[100];
  char sexo[];
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

  for (int i = 0; i < 5; i++) {
    printf("Ingresa el nombre del trabajador:\n" );
    scanf("%s\n",emp1.nombre );

    printf("Ingresa el sexo del trabajador:\n" );
    scanf("%s\n",emp1.sexo );

    printf("Ingresa el sueldo a ganar de %s:\n",emp1.nombre);
    scanf("%d\n", emp1.sueldo);
    if (i<10 && i>0 && amp[i].sueldo<emp[i-1].sueldo){
      menor=i;
    }
  }
  printf("La persona con menor sueldo es: %s\n",emp[menor].sueldo );

  printf("Nombre: %s\n",emp[menor].nombre );
  printf("Sexo: %s\n",emp[menor].sexo );
  printf("Sueldo %f\n",emp[menor].sueldo );

  return 0;
}
