#include <stdio.h>
#include <math.h>

int main(){

    int a, b, c;
    printf("Insira a, b e c, respectivamente: ");
    int deu_certo = scanf("%i", &a);
    deu_certo = scanf("%i", &b);
    deu_certo = scanf("%i", &c);

    int delta = (b * b) - (4 * a * c);
    if(delta < 0){
        printf("A equacao nao tem raizes reais!\n");
    } else if(delta > 0){
        int x1 = (-b + sqrt(delta)) / 2*a;
        int x2 = (-b - sqrt(delta)) / 2*a;
        printf("As raizes da equação são %i e %i\n", x1, x2);
    }

    return 0;
}