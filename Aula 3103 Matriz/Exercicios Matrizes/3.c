#include <stdio.h>

int main() {
    char presenca[4][5];

    // Entrada de dados
    printf("Digite P (presente) ou F (falta) para os 4 alunos em 5 dias:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Aluno %d, Dia %d: ", i + 1, j + 1);
            scanf(" %c", &presenca[i][j]); // Espaço antes de %c evita erro no scanf
        }
    }

    // Exibição da tabela formatada
    printf("\nRegistro de Presença:\n");
    printf("    D1 D2 D3 D4 D5\n");
    for (int i = 0; i < 4; i++) {
        printf("A%d  ", i + 1);
        for (int j = 0; j < 5; j++) {
            printf(" %c ", presenca[i][j]);
        }
        printf("\n");
    }

    return 0;
}
