#include <stdio.h>

int main() {

  int numero = 0;
  
  printf("Digite um número inteiro: ");
  scanf("%i", &numero);
  printf("Você digitou: %i\n", numero);

  int coord_x = 0;
  int coord_y = 0;

  printf("Digite as coordenadas x e y: ");
  scanf("%i, %i", &coord_x, &coord_y);
  printf("Você digitou: %i e %i\n", coord_x, coord_y);

  return 0;
}
