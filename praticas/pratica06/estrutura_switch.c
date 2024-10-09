#include <stdio.h>

int main () {

    int nota = 0;
    printf("Insira sua nota de 1 a 5: ");
    int deu_certo = scanf("%i", &nota);

    switch(nota) {
        case 1: printf("Voce ganhou '*'\n"); break;
        case 2: printf("Voce ganhou '**'\n"); break;
        case 3: printf("Voce ganhou '***'\n"); break;
        case 4: printf("Voce ganhou '****'\n"); break;
        case 5: printf("Voce ganhou '******'\n"); break;
        default: printf("Opcao invalida! Tente novamente.\n");
    }


    return 0;
}