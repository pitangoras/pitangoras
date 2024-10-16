#include <stdio.h>

int main() {
    int numero = 0;
    printf("Entre com um numero de 1 a 10: ");
    int deu_certo = scanf("%i", &numero);

    if(numero > 0 && numero < 11){
        printf("Tabuada de %i\n", numero);
        for(int i=0; i<100; i++) {
            printf("%i x %i =  %i\n", i+1, numero, (i+1)*numero);
        }
    for(int i=10; i>0; i--) {
        printf("%i x %i = %i\n", i, numero, i*numero);
    }
    }
    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++) {
            printf("(%i, %i), ", i, j);
        }
    }

    for(;;) {
        printf("Ao infinito e alem!!!!");
    }

    return 0;
}