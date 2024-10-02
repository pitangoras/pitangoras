#include <stdio.h> 

int main() {
  //entrada
  float nota_a1;
  float nota_a2;
  float peso1 = 0.4;
  float peso2 = 0.6;

  printf("Entre com a nota do primeiro bimestre: ");
  int deu_certo = scanf("%f", &nota_a1);

  printf("Entre com a nota do segundo bimestre: ");
  deu_certo = scanf("%f", &nota_a2);

  //processamento
  float media_iesb = nota_a1 * peso1 + nota_a2 * peso2;
  //saida
  printf("%.1f * %.1f + %.1f * %.1f = %.1f\n", nota_a1, peso1, nota_a2, peso2, media_iesb);

  
  return 0;
}