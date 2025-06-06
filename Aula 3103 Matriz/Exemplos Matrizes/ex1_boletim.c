#include <stdio.h>

int main() {
    // Declaramos uma matriz 3x3 para armazenar as notas dos alunos
    float notas[3][3];

    // Solicita ao usuário que insira as notas dos alunos
    printf("Digite as notas dos 3 alunos em 3 matérias:\n");
    for (int i = 0; i < 3; i++) { // Loop para percorrer os alunos
        for (int j = 0; j < 3; j++) { // Loop para percorrer as matérias
            printf("Nota do aluno %d na matéria %d: ", i + 1, j + 1);
            scanf("%f", &notas[i][j]); // Lê a nota informada pelo usuário
        }
    }

    // Exibe as notas armazenadas na matriz
    printf("\nNotas digitadas:\n");
    for (int i = 0; i < 3; i++) { // Percorre os alunos
        for (int j = 0; j < 3; j++) { // Percorre as matérias
            printf("%.2f ", notas[i][j]); // Exibe cada nota com duas casas decimais
        }
        printf("\n"); // Quebra de linha para exibição formatada
    }

    return 0;
}
