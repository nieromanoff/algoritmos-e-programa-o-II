#include <stdio.h>

int main() {
    int numero;

    printf("Escreva um número inteiro: ");
    scanf("%d", &numero);

    printf("Os divisores de %d são: ", numero);

    for (int i = 1; i <= numero; ++i) {
        if (numero % i == 0) {
            printf("%d ", i);
        }
    }
}
