#include <stdio.h>

int main() {

    float valor_bruto = 0;
    float valor_liquido = 0;
    

    printf("Digite o valor bruto: ");
    int deu_certo = scanf("%f", &valor_bruto);

    
    float valor_desconto_1 = valor_bruto * 0.01f;
    float valor_desconto_2 = valor_bruto * 0.05f;

    if(valor_bruto <= 100.00f){
        printf("Seu valor total com o desconto eh %f", valor_desconto_1);
    } else if(valor_bruto <= 500.00f) {
        printf("Seu valor total com o desconto eh %f", valor_desconto_2);
    }

    return 0;
}
