#include <stdio.h>
#include <stdlib.h>

struct Aluno {
    char nome[40];
    float nota;
};

int main() {
    //criando ponteiro para struct aluno
    struct Aluno * aluno = (struct Aluno *) malloc (sizeof(struct Aluno));

    //verificando se a memoria foi alocada corretamente
    if (aluno == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    //solicitando os dados do aluno
    printf("Digite o nome do aluno (sem espaços): ");
    scanf("%s", aluno->nome);
    printf("Digite a nota dos alunos: ");
    scanf("%f", &aluno->nota);

    //exibindo os dados do aluno
    printf("\n==== DADOS DO ALUNO ===\n");
    printf("Nome: %s\n", aluno->nome);
    printf("Noata: %.2f\n", aluno->nota);

    //liberando a memória
    free(aluno);
    return 0;
}