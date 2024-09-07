#include <stdio.h>
#include <math.h> 

int main() {
  
  printf("%s\n", "==============================");
  printf("%s\n", "          NOTA LEGAL         ");
  printf("%s\n", "==============================");
  printf("%s %8s %13s\n", "Produto", "Qntd", "Valor Unit");
  printf("%s %6s %9.2f\n", "Camiseta", "002", 39.99);
  printf("%s %9s %9.2f\n", "Calca", "001", 89.90);
  printf("%s %3s %9.2f\n", "Meia Social", "003", 19.99);
  printf("%s\n", "==============================");
  printf("%s %19.2f\n", "Total:", 229.85);
  return 0;
  
}