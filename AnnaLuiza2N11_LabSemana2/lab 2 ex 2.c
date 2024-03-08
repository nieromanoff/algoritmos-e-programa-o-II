#include <stdio.h>
#include <math.h>

int main() {

  float peso;
  float altura;
  float imc;

  printf("Informe seu peso, em Kg: ");
  scanf("%f", &peso);

  printf("Informe sua altura, em metros: ");
  scanf("%f", &altura);

  imc = peso / (pow(altura, 2));
  printf("Seu IMC é: %f", imc);

  return 0;
}