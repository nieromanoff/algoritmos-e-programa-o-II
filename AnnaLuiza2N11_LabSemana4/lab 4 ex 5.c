#include <stdio.h>
#include <stdbool.h>

bool primo(int n) {
  if (n <= 1)
      return false;

  for (int i = 2; i <= n/2; i++) {
      if (n % i == 0) {
          return false;
      }
  }
  return true;
}

int main() {
  
  int N1, N2;
  printf("Digite dois números inteiros: ");
  scanf("%d %d", &N1, &N2);

  printf("Números primos entre %d e %d:\n", N1, N2);
  for (int i = N1; i <= N2; i++) {
      if (primo(i)) {
          printf("%d ", i);
      }
  }
  printf("\n");
}
