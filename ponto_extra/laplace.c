#include <stdio.h>
#include <stdlib.h>

int determinante(int **matriz, int ordem) {
    if (ordem == 1) {
        return matriz[0][0]; 
    }
    if (ordem == 2) {
        return (matriz[0][0] * matriz[1][1]) - (matriz[0][1] * matriz[1][0]); 
    }

    int det = 0;
    for (int coluna = 0; coluna < ordem; coluna++) {
        
        int **menor = (int **)malloc((ordem - 1) * sizeof(int *));
        for (int i = 0; i < ordem - 1; i++) {
            menor[i] = (int *)malloc((ordem - 1) * sizeof(int));
        }

        for (int i = 1; i < ordem; i++) {
            int j_menor = 0;
            for (int j = 0; j < ordem; j++) {
                if (j == coluna) continue;
                menor[i - 1][j_menor] = matriz[i][j];
                j_menor++;
            }
        }

        
        int cofator = ((coluna % 2 == 0) ? 1 : -1) * matriz[0][coluna] * determinante(menor, ordem - 1);
        det += cofator;

        
        for (int i = 0; i < ordem - 1; i++) {
            free(menor[i]);
        }
        free(menor);
    }
    return det;
}

int main() {
    int ordem;
    printf("Digite a ordem da matriz: ");
    scanf("%d", &ordem);

    int **matriz = (int **)malloc(ordem * sizeof(int *));
    for (int i = 0; i < ordem; i++) {
        matriz[i] = (int *)malloc(ordem * sizeof(int));
    }

    printf("Digite os elementos da matriz (Em ordem da esquerda para a direita começando pelo primeiro elemento de cada linha) %dx%d:\n", ordem, ordem);
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int det = determinante(matriz, ordem);
    printf("O determinante da matriz eh: %d\n", det);

   
    for (int i = 0; i < ordem; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
