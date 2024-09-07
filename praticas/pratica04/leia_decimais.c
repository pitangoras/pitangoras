#include <stdio.h>

int main(){

  float preço = 0.0f;

  printf("Digite um preço: ");
  scanf("%f", &preço);
  printf("Você digitou: %.2f\n", preço);

  double fração = 0.0f;
  
  printf("Digite uma fração: ");
  scanf("%lf", &fração);
  printf("Você digitou: %.10lf\n", fração);


  return 0;
}