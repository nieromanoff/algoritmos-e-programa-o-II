#include <stdio.h>

int main(){

  printf("Insira o valor da temperatura, em graus Celcius: ");
  float tempC;
  scanf("%f", &tempC);

  float tempF = 9.0/5.0 * tempC + 32;
  printf("\nUma temperatura de %f graus Celcius equivale a %f graus Fahrenheit.\n\n", tempC, tempF);

  return 0;
}