#include <stdio.h>
#include <stdlib.h>

int comparar(const void *a, const void *b) {
  return (*(int *)a - *(int *)b);
}

void uniao(int A[], int tamanhoA, int B[], int tamanhoB) {
  int tamanhoUniao = tamanhoA + tamanhoB;
  int *uniao = (int *)malloc(tamanhoUniao * sizeof(int));
  int indiceUniao = 0;

  for (int i = 0; i < tamanhoA; i++) {
      uniao[indiceUniao++] = A[i];
  }
  for (int i = 0; i < tamanhoB; i++) {
      uniao[indiceUniao++] = B[i];
  }

  qsort(uniao, tamanhoUniao, sizeof(int), comparar);

  printf("A ∪ B = {");
  if (tamanhoUniao > 0) {
      printf("%d", uniao[0]);
  }
  for (int i = 1; i < tamanhoUniao; i++) {
      if (uniao[i] != uniao[i - 1]) {
          printf(", %d", uniao[i]);
      }
  }
  printf("}\n");

  free(uniao);
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

  uniao(A, tamanhoA, B, tamanhoB);

}
