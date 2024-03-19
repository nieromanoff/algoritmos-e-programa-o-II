#include <stdio.h>

double calcular(int n) {
  double soma = 0.0;
  int sinal = 1;

  for (int k = 1; k <= n; k++) {
      soma += sinal * ((double)k / (k * k));
      sinal *= -1;
  }

  return soma;
}

int main() {
  
  printf("Digite um valor numérico: ");
  float n;
  scanf("%f", &n);
  
  printf("O valor da série para n = %f é: %.15lf\n", n, calcular(n));
}