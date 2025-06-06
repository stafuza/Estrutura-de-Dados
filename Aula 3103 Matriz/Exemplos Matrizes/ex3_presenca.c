#include <stdio.h>

int main() {
    char presenca[4][5];

    printf("Digite P (presente) ou F (falta) para os alunos em 5 dias:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Aluno %d, Dia %d: ", i + 1, j + 1);
            scanf(" %c", &presenca[i][j]);
        }
    }

    printf("\nRegistro de presença:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%c ", presenca[i][j]);
        }
        printf("\n");
    }

    return 0;
}
