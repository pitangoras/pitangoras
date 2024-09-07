#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {

  long int populacao_mundial = 7800000000L;
  printf("Populacao Mundial: %li\n", populacao_mundial);
  printf("\n");
  const short int HORA_EM_SEGUNDOS = 3600;
  printf("1 hora corresponde a %i segundos.\n", HORA_EM_SEGUNDOS);
  printf("\n");
  long double precisao_extrema = 3.14159265358979323846L;
  printf("Precisao Extrema: %.20Lf\n", precisao_extrema);
  printf("\n");
  

  

  return 0;
}