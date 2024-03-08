#include <stdio.h>
#include <math.h>

int main(){

  printf("Insira o valor do primeiro cateto: ");
  float cateto1;
  scanf("%f", &cateto1);

  printf("Insira o valor do segundo cateto: ");
  float cateto2;
  scanf("%f", &cateto2);

  float hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
  printf("O valor da hipotenusa é %f.\n ", hipotenusa);

  return 0;
}