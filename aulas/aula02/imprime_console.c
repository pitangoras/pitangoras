#include <stdio.h> //biblioteca entrada e saida

int main() {
  // imprime um texto
  printf("um texto sempre entre aspas duplas\n\n"); 

  // imprime um numero inteiro
  printf("%i\n", 10);
  printf("%i %i\n", 11, 22);
  printf("%5i\n", 110);
  printf("%05i\n", 1);

  // imprime um numero decimal
  printf("%f\n", 10.51234);
  printf("%10.2f\n", 10.5888);
  printf("%10.2f\n", 10155.5888);

  // imprime um caractere aspas simples
  printf("%c\n", 'A');
  printf("%c\n", 68);

  // imprime um string
  printf("%s\n", "Bom dia!");
  printf("%s\n", "Quero café!)");
  printf("%-30s!\n", "Quero café!");

  return 0;
}