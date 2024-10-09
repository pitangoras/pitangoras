#include <stdio.h>

int main(){

    float temperatura = 0.00f;
    printf("Insira a temperatura ambiente atual: ");
    int deu_certo = scanf("%f", &temperatura);

    if(temperatura > 40.0f){
        printf("Tah muito quente!!\n");
    } else if(temperatura > 30.0f && temperatura < 40.0f){
        printf("Tah quente!!\n");
    } else if(temperatura > 20.0f && temperatura < 30.0f){
        printf("Tah agradavel!!\n");
    } else if(temperatura < 20.0f){
        printf("Tah frio!!\n");
    }

    return 0;
}