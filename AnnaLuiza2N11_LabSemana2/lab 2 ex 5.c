#include <stdio.h>
#include <math.h>

int main(){

  printf("Informe o raio do círculo: ");
  float raio;
  scanf("%f", &raio);

  float area = M_PI * pow(raio, 2);

  printf("Um cícrulo com raio %f tem área igual a %f.\n", raio, area);

  return 0;
}