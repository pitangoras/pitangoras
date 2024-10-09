#include <stdio.h>

int main() {
    
    int dia = 0;
    printf("Insira um numero de 1 a 7 correspondente aos dias da semana(começ=cando pelo domingo sendo o dia 1): ");
    int deu_certo = scanf("%i", &dia);

    switch (dia){
        case 1: printf("Eh domingo\n"); break;
        case 2: printf("Eh segunda\n"); break;
        case 3: printf("Eh terça\n"); break;
        case 4: printf("Eh quarta\n"); break;
        case 5: printf("Eh quinta\n"); break;
        case 6: printf("Eh sexta\n"); break;
        case 7: printf("Eh sabado\n"); break;
        default: printf("Opcao invalida! Tente novamente.\n");
    }

    return 0;
}