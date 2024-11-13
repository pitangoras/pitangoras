#include <stdio.h>

int main() {
   
   char nome[30];

   printf("Entre com seu nome: ");
   scanf("%s", nome);

   printf("Ola %s!\n", nome);
   for(int i=0; i<30;i++){
   printf("%c", nome[i]);

   }
 

    return 0;
}