#include <stdio.h>

int main() {

  int numeros[10];
  int maior = -9999999;
  int menor = 9999999;

for(int i=0; i<10; i++){
    printf("%io. numero: ", i+1);
    scanf("%i", &numeros[i]);

   if(numeros[i] > maior){
    maior = numeros[i];
   }
   if(numeros[i] < menor){
    menor = numeros[i];
   }
}

    printf("Os numeros digitados foram: ");
    for(int i=0; i<10; i++) {
        printf("%i ", numeros[i]);
    }
    printf("\n");
    printf("O maior numero foi %i\n", maior);
    printf("O menor numero foi %i\n", menor);

    return 0;
}