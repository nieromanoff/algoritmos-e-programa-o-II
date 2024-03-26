#include <stdio.h>

void diferenca(int A[], int tamanhoA, int B[], int tamanhoB) {
  printf("A - B = {");
  int encontrado;
  for (int i = 0; i < tamanhoA; i++) {
      encontrado = 0;
      for (int j = 0; j < tamanhoB; j++) {
          if (A[i] == B[j]) {
              encontrado = 1;
              break;
          }
      }
      if (!encontrado) {
          printf("%d", A[i]);
          if (i != tamanhoA - 1) {
              printf(", ");
          }
      }
  }
  printf("}\n");
}

int main() {
  int tamanhoA, tamanhoB;

  printf("Digite o tamanho do vetor A: ");
  scanf("%d", &tamanhoA);

  int A[tamanhoA];
  printf("Digite os elementos do vetor A:\n");
  for (int i = 0; i < tamanhoA; i++) {
      printf("Elemento %d: ", i + 1);
      scanf("%d", &A[i]);
  }

  printf("Digite o tamanho do vetor B: ");
  scanf("%d", &tamanhoB);

  int B[tamanhoB];
  printf("Digite os elementos do vetor B:\n");
  for (int i = 0; i < tamanhoB; i++) {
      printf("Elemento %d: ", i + 1);
      scanf("%d", &B[i]);
  }

  diferenca(A, tamanhoA, B, tamanhoB);

}
