#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int num = rand() % 100 + 1;
    int palpite, tentativas = 0;

    printf("Sorteei um número de 1 a 100. Tente adivinhar qual número foi sorteado!\n");

    while (1) {
        printf("\nSeu palpite: ");
        if (scanf("%d", &palpite) != 1) {
            fflush(stdin);
            continue;
        }

        if (palpite >= 1 && palpite <= 100) {
            tentativas++;

            if (palpite == num) {
                printf("Parabéns!!! Você acertou em %d tentativas.\n", tentativas);
                break;
            } else if (palpite < num) {
                printf("Você chutou muito baixo! Tente novamente.\n");
            } else {
                printf("Você chutou muito alto! Tente novamente.\n");
            }
        } else {
            printf("Número inválido. Digite um número inteiro válido.\n");
        }
    }

    return 0;
}
