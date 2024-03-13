#include <stdio.h>

int main() {
    int numero, somadivisores = 0;

    printf("Escreva um número inteiro: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero / 2; ++i) {
        if (numero % i == 0) {
            somadivisores += i;
        }
    }

    if (somadivisores == numero) {
        printf("%d é um número inteiro perfeito.\n", numero);
    } 
    else {
        printf("%d NÃO é um número inteiro perfeito.\n", numero);
    }

    return 0;
}
