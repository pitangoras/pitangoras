#include <stdio.h>
#include <stdlib.h>

int main()
{

    int opcao = 0;
    do{
        system("clear");
        printf("Menu principal :D\n");
        printf("1 - Consultar saldo\n");
        printf("2 - Recarregar\n");
        printf("3 - Ver recados\n");
        printf("0 - Sair\n");
        printf("Entre com a opcao => ");
        scanf("%i", &opcao);
        while(getchar() != '\n'); //limpar o buffer do teclado

        switch(opcao) {
            case 1: {
                system("clear");
                printf("CONSULTA SALDO")
                printf("Seu saldo eh R$10,00\n"); break;
            }
            case 2: printf("Escolha um valor para recarga.\n"); break;
            case 3: printf("Voce naum tem recados\n"); break;
            case 0: printf("Ateh logoh\n"); break;
            default: printf("Opcao invalida. Tente novamente\n"); 
        }

        printf("Pressione enter para continuar...");
        getchar();


    } while (opcao != 0);


    return 0;
}