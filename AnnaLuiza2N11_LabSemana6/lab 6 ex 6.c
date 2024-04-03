#include <stdio.h>

void somarmatrizes(int n, int m, int A[][m], int B[][m], int C[][m]) {
  for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
          C[i][j] = A[i][j] + B[i][j];
      }
  }
}

int main() {
  int n, m;

  printf("Digite o número de linhas: ");
  scanf("%d", &n);
  printf("Digite o número de colunas: ");
  scanf("%d", &m);

  int A[n][m], B[n][m], C[n][m];

  printf("Digite os elementos da matriz A:\n");
  for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
          printf("A[%d][%d]: ", i, j);
          scanf("%d", &A[i][j]);
      }
  }

  printf("Digite os elementos da matriz B:\n");
  for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
          printf("B[%d][%d]: ", i, j);
          scanf("%d", &B[i][j]);
      }
  }

  somarmatrizes(n, m, A, B, C);

  printf("A + B = C:\n");
  for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
          printf("%d ", C[i][j]);
      }
      printf("\n");
  }
}
