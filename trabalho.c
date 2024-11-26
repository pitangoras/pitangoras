#include <stdio.h>
#include <string.h>

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

    do {
        printf("\n=== Agenda de Contatos ===\n");
        printf("1. Adicionar contato\n");
        printf("2. Listar contatos\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        while (getchar() != '\n');

        switch (opcao) {
            case 1:
                if (totalContatos < MAX_CONTATOS) {
                    printf("\n=== Adicionar Contato ===\n");

                    printf("Entre com o nome: ");
                    scanf("%[^\n]", contatos[totalContatos].nome);
                    while (getchar() != '\n');

                    printf("Entre com o telefone: ");
                    scanf("%li", &contatos[totalContatos].telefone);
                    while (getchar() != '\n'); 

                    printf("Entre com o email: ");
                    scanf("%[^\n]", contatos[totalContatos].email);
                    while (getchar() != '\n');

                    totalContatos++;
                    printf("Contato adicionado com sucesso!\n");
                } else {
                    printf("Memoria cheia!.\n");
                }
                break;

            case 2: 
                if (totalContatos == 0) {
                    printf("\nNenhum contato cadastrado ainda.\n");
                } else {
                    printf("\n=== Lista de Contatos ===\n");
                    for (int i = 0; i < totalContatos; i++) {
                        printf("Contato %d:\n", i + 1);
                        printf("Nome......: %s\n", contatos[i].nome);
                        printf("Telefone..: %li\n", contatos[i].telefone);
                        printf("Email.....: %s\n", contatos[i].email);
                        printf("--------------------\n");
                    }
                }
                break;

            case 3:
                printf("Encerrando o programa. Até mais!\n");
                break;

            default:
                printf("Opção inválida! Por favor, tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}
