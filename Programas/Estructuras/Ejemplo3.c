#include <stdio.h>
#include <stdlib.h>

struct fraccion{
  int den;
  int num;
};

int main(void){
  struct fraccion frac1;
  struct fraccion frac2;
  frac1.den = 3;
  frac1.num = 4;
  frac2.den = 6;
  frac2.num = 2;
  multipli(frac1, frac2);
  return 0;
}
