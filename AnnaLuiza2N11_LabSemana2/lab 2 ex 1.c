#include <stdio.h>

int main () {

  printf("Primeiro número inteiro: ");
  int a;
  scanf("%d", &a);
  
  printf("Segundo número inteiro: ");
  int b;
  scanf("%d", &b);
  
  printf("%d + %d = %d\n", a, b, (a + b));
  printf("%d - %d = %d\n", a, b, (a - b));
  printf("%d * %d = %d\n", a, b, (a * b));
  printf("%d / %d = %d\n", a, b, (a / b));
  
  return 0;
}