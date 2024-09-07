#include <stdio.h>

int main() {
  
  float nota = 0.0f;

  printf("Entre com a nota entre 0 e 10: ");
  int deu_certo = scanf("%f", &nota);
  printf("Você digitou: %.2f\n", nota);

  double pi = 0.0;
  printf("Entre com o valor de PI com até 10 casas decimais: ");
  deu_certo = scanf("%lf", &pi); 
  // %lf é para double (long float) ou usar %E (decimal com expoente)
  printf("Você digitou: %.10lf\n", pi);
  
  return 0;
}