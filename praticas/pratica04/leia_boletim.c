#include <stdio.h>
#include <limits.h>
#include <float.h>


int main() {

  int matricula = 0;
  float a1 = 0.0f;
  float a2 = 0.0f;
  float media = 0.0f;

  printf("Digite a matricula: ");
  scanf("%li", &matricula);
  printf("Digite a nota da A1: ");
  scanf("%f", &a1);
  getchar();
  printf("Digite a nota da A2: ");
  scanf( "%f", &a2);
  getchar();
  printf("Digite a média: ");
  scanf("%f", &media);
  
  printf("    Matricula   A1   A2   Media\n\t%li    %.1f  %.1f  %.1f", matricula, a1, a2, media);
  
  return 0;
}