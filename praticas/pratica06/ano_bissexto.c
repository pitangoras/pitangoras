#include <stdio.h>

int main() {

    int ano = 0;
    printf("Digite um ano: ");
    int deu_certo = scanf("%i", &ano);

    int multiplo_de_4 = ano % 4 == 0;
    int multiplo_de_100 = ano % 100 == 0;
    int multiplo_de_400 = ano % 400 == 0;

    if (multiplo_de_4 && !multiplo_de_100 || multiplo_de_400 ) {
        printf("Esse ano foi/eh bissexto.\n");
    } else {
        printf("Esse ano nao foi/nao eh bissexto.");
    }

    return 0;
}