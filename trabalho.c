#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    const int MAX_CONTATOS = 5;

    struct contato_t {
        char nome[61];
        long int telefone;
        char email[61];
    };

    struct contato_t contatos[MAX_CONTATOS];
    int totalContatos = 0;
    int opcao;

    int numeroValido = 0;

    do {       
        system("clear");
        
        printf("\n=== Agenda de Contatos ===\n");
        printf("1. Adicionar contato\n");
        printf("2. Listar contatos\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        while (getchar() != '\n');

        switch (opcao) {
            case 1:
                if (totalContatos < MAX_CONTATOS) {
                    system("clear");
                    
                    printf("\n=== Adicionar Contato ===\n");

                    printf("Entre com o nome: ");
                    scanf("%[^\n]", contatos[totalContatos].nome);
                    while (getchar() != '\n');

                    do {
                    printf("Entre com o telefone: ");
                    numeroValido = scanf("%li", &contatos[totalContatos].telefone);
                    if (numeroValido == 1){
                    while (getchar() != '\n');
                    }else if(numeroValido == 0){
                        printf("Voce nao digitou um numero valido, tente novamente: \n");
                        while (getchar() != '\n');
                    }
                           } while(numeroValido == 0);

                    printf("Entre com o email: ");
                    scanf("%[^\n]", contatos[totalContatos].email);
                    while (getchar() != '\n');

                    totalContatos++;
                    printf("Contato adicionado com sucesso!\n");
                } else {
                    system("clear");
                    printf("Memoria cheia!.\n");
                }
                break;

            case 2: 
                if (totalContatos == 0) {
                    system("clear");
                    
                    printf("\nNenhum contato cadastrado ainda.\n");
                } else {
                    system("clear");
                    
                    printf("\n=== Lista de Contatos ===\n");
                    for (int i = 0; i < totalContatos; i++) {
                        printf("Contato %d:\n", i + 1);
                        printf("Nome......: %s\n", contatos[i].nome);
                        printf("Telefone..: %li\n", contatos[i].telefone);
                        printf("Email.....: %s\n", contatos[i].email);
                        printf("--------------------\n");
                    }
                }
                printf("Pressione ENTER para continuar...");
                getchar();
                break;

            case 3:
                system("clear");
                
                printf("Encerrando o programa. Até mais!\n");
                break;

            default:
                printf("Opcao invalida! Por favor, tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}
