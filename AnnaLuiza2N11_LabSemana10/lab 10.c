#include <stdio.h>
#include <string.h>

void printArray(int array[], int size);
int determinant(int matrix[3][3]);
void reverseNumber(int num);
int binarySearchRecursive(int array[], int left, int right, int target); // Protótipo da função de busca binária recursiva

int main() {
  int escolha;

  do {
      printf("\nEscolha um exercício para executar:\n");
      printf("1. Exercício 1 - Solicitar senha com limitação de tentativas\n");
      printf("2. Exercício 2 - Inverter um número inteiro usando um loop do-while\n");
      printf("3. Exercício 3 - Imprimir os elementos de um array\n");
      printf("4. Exercício 4 - Calcular o determinante de uma matriz 3x3\n");
      printf("5. Exercício 5 - Reverter um número inteiro usando recursão\n");
      printf("6. Exercício 6 - Busca binária recursiva em um array ordenado\n");
      printf("0. Sair\n");
      printf("Digite o número correspondente ao exercício desejado: ");
      scanf("%d", &escolha);

      switch (escolha) {
          case 1:
                // Exercício 1 - Solicitar senha com limitação de tentativas
              {
                  char correctPassword[] = "Love1234";  
                  char enteredPassword[10]; 
                  int attempts = 0;

                  do {
                      printf("Entre com a senha: ");
                      scanf("%s", enteredPassword);

                      if (strcmp(enteredPassword, correctPassword) == 0) {
                          printf("Acesso permitido.\n");
                          break;  
                      } else {
                          attempts++;
                          printf("Senha incorreta. Tente novamente.\n");

                          if (attempts >= 3) {
                              printf("Acesso revogado após 3 tentativas.\n");
                              break;
                          }
                      }

                  } while (1);
              }
              break;
          case 2:
               // Exercício 2 - Inverter um número inteiro usando um loop do-while
              {
                  int num, reversedNum = 0, remainder;

                  printf("Entre com um número inteiro: ");
                  scanf("%d", &num);

                  int originalNum = num;

                  do {
                      remainder = num % 10;
                      reversedNum = reversedNum * 10 + remainder;
                      num = num / 10;

                  } while (num != 0);

                  printf("Número original: %d\n", originalNum);
                  printf("Número reverso : %d\n", reversedNum);
              }
              break;
          case 3:
              // Exercício 3 - Imprimir os elementos de um array
              {
                  int list[] = {25, 3, 7, 50, 75, 100};
                  int size = sizeof(list) / sizeof(list[0]);
                  printf("Lista: ");
                  printArray(list, size);
                  printf("\n");
              }
              break;
          case 4:
              // Exercício 4 - Calcular o determinante de uma matriz 3x3
              {
                  int matrix[3][3];

                  printf("Digite os elementos da matriz 3x3:\n");
                  for (int i = 0; i < 3; i++) {
                      for (int j = 0; j < 3; j++) {
                          printf("Elemento (%d,%d): ", i+1, j+1);
                          scanf("%d", &matrix[i][j]);
                      }
                  }

                  int det = determinant(matrix);
                  printf("O determinante da matriz é: %d\n", det);
              }
              break;
          case 5:
              // Exercício 5 - Reverter um número inteiro usando recursão
              {
                  int num;
                  printf("Digite um número inteiro para reverter: ");
                  scanf("%d", &num);

                  printf("Número original: %d\n", num);
                  printf("Número reverso : ");
                  reverseNumber(num);
                  printf("\n");
              }
              break;
          case 6:
              // Exercício 6 - Busca binária recursiva em um array ordenado
              {
                  int array[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
                  int target;

                  printf("Digite o número que deseja buscar: ");
                  scanf("%d", &target);

                  int size = sizeof(array) / sizeof(array[0]);
                  int result = binarySearchRecursive(array, 0, size - 1, target);

                  if (result == -1) {
                      printf("O número %d não está presente no array.\n", target);
                  } else {
                      printf("O número %d está presente no índice %d do array.\n", target, result);
                  }
              }
              break;
          case 0:
              printf("Encerrando o programa...\n");
              break;
          default:
              printf("Opção inválida. Por favor, escolha novamente.\n");
              break;
      }
  } while (escolha != 0);

  return 0;
}

// Função para imprimir os elementos de um array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
      printf("%d ", array[i]);
  }
}

// Função para calcular o determinante de uma matriz 3x3
int determinant(int matrix[3][3]) {
  int det = 0;

  det = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) -
        matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) +
        matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);

  return det;
}

// Função para reverter um número inteiro usando recursão
void reverseNumber(int num) {
  if (num != 0) {
      printf("%d", num % 10);
      reverseNumber(num / 10);
  }
}

// Função de busca binária recursiva
int binarySearchRecursive(int array[], int left, int right, int target) {
  if (left <= right) {
      int mid = left + (right - left) / 2;

      // Se o elemento estiver presente no meio
      if (array[mid] == target) {
          return mid;
      }

      // Se o elemento for menor que o meio, procure na metade esquerda
      if (array[mid] > target) {
          return binarySearchRecursive(array, left, mid - 1, target);
      }

      // Se o elemento for maior que o meio, procure na metade direita
      return binarySearchRecursive(array, mid + 1, right, target);
  }

  // Se o elemento não estiver presente no array
  return -1;
}
