#include <stdio.h>
#include <limits.h>
#include <float.h>


int main() {

  char Produto[21];
  int Qtd = 000;
  float Valor_unit = 0.0f;

  printf("Digite o nome do produto: ");
  scanf("%s", &Produto);
  printf("Digite a quantidade: ");
  scanf("%i", &Qtd);
  printf("Digite o valor unitário: ");
  scanf("%f", &Valor_unit);

  printf("==============================\n         P E D I D O\n==============================\n Produto    Qnt  Valor unit.\n %-10s %i %8.2f\n", Produto, Qtd, Valor_unit);

  return 0;
}