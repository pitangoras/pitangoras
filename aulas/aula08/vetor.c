#include <stdio.h>

int main() {

//int num1;
//int num2;
//int num3;

int numeros[10]; //array ou vetor

numeros[0] = 10;
numeros[1] = -45;
numeros[2] = 5;
numeros[3] = -4;
numeros[4] = 0;
numeros[5] = 32;
numeros[6] = 11;
numeros[7] = 55;
numeros[8] = 99;
numeros[9] = -100;
// numeros[10] = ; NAO PODE PASSAR DO LIMITE PREVIAMENTE ESTABELECIDO

for(int i=0; i<10; i++) {
    printf("%i, ", numeros [i]);
}
//float matriz[10][2]; matriz bidimensional

float notas[10][2];

notas[0][0] = 4.5f;
notas[0][1] = 7.8f;
notas[1][0] = 4.5f;
notas[1][1] = 7.8f;
notas[2][0] = 4.5f;
notas[2][1] = 7.8f;
notas[3][0] = 4.5f;
notas[3][1] = 7.8f;
notas[4][0] = 4.5f;
notas[4][1] = 7.8f;
notas[5][0] = 4.5f;
notas[5][1] = 7.8f;
notas[6][0] = 4.5f;
notas[6][1] = 7.8f;
notas[7][0] = 4.5f;
notas[7][1] = 7.8f;
notas[8][0] = 4.5f;
notas[8][1] = 7.8f;
notas[9][0] = 4.5f;
notas[9][1] = 7.8f;


for(int i=0; i<10; i++){
  for(int j=0; j<2;  j++){
printf("%.1f, ", notas [i][j]);

  }
}

    return 0;
}