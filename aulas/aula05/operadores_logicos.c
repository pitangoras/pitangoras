#include <stdio.h>

int main() {
  int p = 0;
  int q = 0;

  // E logico
  int e_logico = p && q;
  printf("%i E %i = %i\n", p, q, e_logico);
  q = 1;
  e_logico = p && q;
  printf("%i E %i = %i\n", p, q, e_logico);
  p = 1;
  q = 0;
  e_logico = p && q;
  printf("%i E %i = %i\n", p, q, e_logico);
  q = 1;
  e_logico = p && q;
  printf("%i E %i = %i\n", p, q, e_logico);

  // OU logico
  p = 0;
  q = 0;
  int ou_logico = p || q;
  printf("%i OU %i = %i\n", p, q, ou_logico);
  q = 1;
  ou_logico = p || q;
  printf("%i OU %i = %i\n", p, q, ou_logico);
  p = 1;
  q = 0;
  ou_logico = p || q;
  printf("%i OU %i = %i\n", p, q, ou_logico);
  q = 1;
  ou_logico = p || q;
  printf("%i OU %i = %i\n", p, q, ou_logico);
  // NAO logico
  int nao_logico = !p;
  printf("NAO %i = %i\n", p, nao_logico);

  return 0;
}