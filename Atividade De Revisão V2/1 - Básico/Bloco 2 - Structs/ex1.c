//Defina uma struct Aluno com nome 
//(char[40]) e nota (float). Faça um programa que leia os dados de 1 aluno e imprima.

#include <stdio.h>

struct Aluno {
    char nome[40];
    float nota;
};

int main() {
    struct Aluno a;
    printf("Nome: ");
    scanf(" %[^\n]", a.nome);
    printf("Nota: ");
    scanf("%f", &a.nota);

    printf("Aluno: %s, Nota: %.2f\n", a.nome, a.nota);
    return 0;
}