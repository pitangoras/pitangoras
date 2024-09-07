#include <stdio.h> 
#include <limits.h>
#include <float.h>

int main() {

  printf("tamanho do char na memoria = %i byte(s)\n", sizeof(char));
  printf("tamanho do int na memoria = %i byte(s)\n", sizeof(int));
  printf("tamanho do float na memoria = %i byte(s)\n", sizeof(float));
  printf("tamanho do double na memoria = %i byte(s)\n", sizeof(double));
  printf("tamanho do void na memoria = %i byte(s)\n", sizeof(void));
  
  printf("\n");
  
  printf("a faixa de valores do char: de %i a %i\n", CHAR_MIN, CHAR_MAX);
  printf("a faixa de valores do int: de %i a %i\n", INT_MIN, INT_MAX);
  printf("a faixa de valores do float: de %E a %E\n", FLT_MIN, FLT_MAX);
  printf("a faixa de valores do double: de %E a %E\n", DBL_MIN, DBL_MAX);
  
  printf("\n");
  
  char tecla = 'A'; 
  printf("valor de tecla: %c\n", tecla);
  int idade = 25;
  printf("valor de idade: %i\n", idade);
  float nota = 8.6f; // 6 casas decimais
  printf("valor de nota: %f\n", nota);
  double pi = 3.1415923; // 12 casas decimais
  printf("valor de pi: %.10f\n", pi);
  idade = 50;
  printf("valor de idade: %i\n", idade);

  printf("\n");

  const float PI = 3.14f;
  printf("valor da constante PI: %f\n", PI);
  // PI = 5.14156f; // deu ruim!!!! pq eh constante (const [constante] float)
  
  printf("\n");

  printf("tamanho do short int na memoria = %lu byte(s)\n", sizeof(short int));
  printf("tamanho do long int na memoria = %lu byte(s)\n", sizeof(long int));
  printf("tamanho do long double na memoria = %lu byte(s)\n", sizeof(long double));

  printf("\n");

  printf("a faixa de valores do short int: de %i ate %i\n", SHRT_MIN, SHRT_MAX);
  printf("a faixa de valores do long int: de %li ate %li\n", LONG_MIN, SHRT_MAX);
  printf("a faixa de valores do long double: de %LE ate %LE\n", LDBL_MIN, LDBL_MAX);
  
  return 0;
}