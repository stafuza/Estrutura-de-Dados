#include <stdio.h>

int main() {
    int matriz[3][3];
    int soma = 0;
    float media;

    // Entrada de dados
    printf("Digite os 9 valores da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    // Cálculo da média
    media = soma / 9.0;

    // Exibição da matriz
    printf("\nMatriz digitada:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Exibição da soma, média e diagonal principal
    printf("\nSoma de todos os elementos: %d", soma);
    printf("\nMédia dos elementos: %.2f", media);
    printf("\nValores da diagonal principal: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", matriz[i][i]);
    }

    return 0;
}
