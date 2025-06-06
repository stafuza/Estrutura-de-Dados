#include <stdio.h>

int main() {
    float notas[3][3], mediaAluno[3] = {0}, mediaMateria[3] = {0};

    // Entrada de dados
    printf("Digite as notas dos 3 alunos em 3 matérias:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Nota do aluno %d na matéria %d: ", i + 1, j + 1);
            scanf("%f", &notas[i][j]);
            mediaAluno[i] += notas[i][j];
            mediaMateria[j] += notas[i][j];
        }
    }

    // Cálculo das médias
    for (int i = 0; i < 3; i++) {
        mediaAluno[i] /= 3.0;
        mediaMateria[i] /= 3.0;
    }

    // Exibição das médias
    printf("\nMédias dos alunos:\n");
    for (int i = 0; i < 3; i++) {
        printf("Aluno %d: %.2f\n", i + 1, mediaAluno[i]);
    }

    printf("\nMédias das matérias:\n");
    for (int j = 0; j < 3; j++) {
        printf("Matéria %d: %.2f\n", j + 1, mediaMateria[j]);
    }

    return 0;
}
