#include <stdio.h>

int main() {
    int linhas, colunas;
    printf("Digite o número de linhas e colunas: ");
    scanf("%d %d", &linhas, &colunas);

    int matriz[linhas][colunas];

    printf("Digite os elementos da matriz:\n");
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz digitada:\n");
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
