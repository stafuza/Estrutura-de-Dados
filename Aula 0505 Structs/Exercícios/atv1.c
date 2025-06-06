// Ex1. Preenchimento com Ponteiro
// Crie uma struct chamada Aluno com os campos nome (string de até 40 caracteres) e nota (float).
// Escreva um programa que use um ponteiro para essa struct para armazenar e imprimir os dados de um único aluno.
// Pergunta: Qual é a sintaxe correta para acessar os campos da struct usando o ponteiro?

#include <stdio.h>

struct Aluno {
    char nome[40];
    float nota;
};

int main() {
    struct Aluno aluno;
    struct Aluno *ptr = &aluno;

    printf("Digite o nome do aluno: ");
    fgets(ptr->nome, 40, stdin);
    printf("Digite a nota do aluno: ");
    scanf("%f", &ptr->nota);

    printf("Aluno: %sNota: %.2f\n", ptr->nome, ptr->nota);
    return 0;
}
