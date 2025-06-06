#include <stdio.h>

int main() {
    int matriz[2][2], soma = 0;
    
    printf("Digite os valores da matriz 2x2:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    printf("Soma dos elementos da matriz: %d\n", soma);
    return 0;
}
