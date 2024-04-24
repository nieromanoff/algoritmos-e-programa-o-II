#include <stdio.h>

int divisiveis(int arr[], int tam, int x) {
  if (tam == 0) {
      return 0;
  } else {
      int resto = arr[tam - 1] % x;
      if (resto == 0) {
          return arr[tam - 1] + divisiveis(arr, tam - 1, x);
      } else {
          return divisiveis(arr, tam - 1, x);
      }
  }
}

void mostrar(int arr[], int tam) {
  printf("[ ");
  for (int i = 0; i < tam; i++) {
      printf("%d ", arr[i]);
  }
  printf("]\n");
}

int main() {
  int array[] = {21, 27, 33, 60};
  int n = sizeof(array) / sizeof(array[0]);
  mostrar(array, n);
  printf("Valor de x: ");
  int x;
  if (scanf("%d", &x) != 1) {
      return 1;
  }
  int soma_divisiveis = divisiveis(array, n, x);
  printf("Soma dos números divisíveis por %d: %d\n", x, soma_divisiveis);
  return 0;
}
