#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  
    srand(time(NULL));

    int num = 1 + rand() % 100;
  
    int palpite;

    printf("Sorteei um número de 1 a 100. Tente adivinhar qual número foi sorteado!\n");

    while (1) {
        printf("\nSeu palpite: ");
        if (scanf("%d", &palpite) != 1) {
            fflush(stdin);
            continue;
        }

        if (palpite >= 1 && palpite <= 100) {
            if (palpite == num) {
                printf("Parabéns!!! Você acertou!\n");
            } else if (palpite < num) {
                printf("Você chutou muito baixo! O valor correto é %d.\n", num);
            } else {
                printf("Você chutou muito alto! O valor correto é %d.\n", num);
            }
            break;
        } else {
            printf("Número inválido. Digite um número inteiro válido.\n");
        }
    }

    return 0;
}
