#include <stdio.h>

int main(){

    char operacao = 0;
    float numero1, numero2 = 0.0f;
    

    printf("Digite o tipo de operacao que deseja realizar (+ para soma, - para subtracao, * para multiplicacao e / para divisao): ");
    int deu_certo = scanf("%c", &operacao);

    printf("Digite os valores com que deseja fazer a operacao: ");
    scanf("%f", &numero1);
    scanf("%f", &numero2);


    if(operacao == '+'){
        printf("A soma dos seus valores é %.3f\n", numero1 + numero2);
    } else if(operacao == '-'){
        printf("A subtracao dos seus valores é %.3f\n", numero1 - numero2);
    } else if(operacao == '*'){
        printf("O produto dos seus valores é %.3f\n", numero1 * numero2);
    } else if(operacao == '/'){
        printf("A divisao dos seus valores é %.3f\n", numero1 / numero2);
    } else {
        printf("Operacao invalida! Tente novamente. ");
    }

    return 0;
}