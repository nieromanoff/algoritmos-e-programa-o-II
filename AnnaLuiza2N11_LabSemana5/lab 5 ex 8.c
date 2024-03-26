#include <stdio.h>

void intersecao(int A[], int tamanhoA, int B[], int tamanhoB) {
  printf("A ∩ B = {");
  for (int i = 0; i < tamanhoA; i++) {
      for (int j = 0; j < tamanhoB; j++) {
          if (A[i] == B[j]) {
              printf("%d", A[i]);
              if (i != tamanhoA - 1) {
                  printf(", ");
              }
              break;
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

  intersecao(A, tamanhoA, B, tamanhoB);

}

