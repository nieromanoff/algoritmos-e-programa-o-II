#include <stdio.h>

int buscabinariarec(int arr[], int left, int right, int target) {
  if (right >= left) {
      int mid = left + (right - left) / 2;

      if (arr[mid] == target)
          return mid;

      if (arr[mid] > target)
          return buscabinariarec(arr, left, mid - 1, target);

      return buscabinariarec(arr, mid + 1, right, target);
  }

  return -1;
}

int main() {
  int n;
  printf("Digite o tamanho do array: ");
  scanf("%d", &n);

  int arr[n];
  printf("Digite os elementos do array em ordem crescente:\n");
  for (int i = 0; i < n; i++) {
      printf("Elemento %d: ", i + 1);
      scanf("%d", &arr[i]);
  }

  int target;
  printf("Digite o elemento que deseja buscar: ");
  scanf("%d", &target);

  int result = buscabinariarec(arr, 0, n - 1, target);
  if (result != -1)
      printf("Elemento %d encontrado na posição %d.\n", target, result);
  else
      printf("Elemento %d não encontrado no array.\n", target);

  return 0;
}
