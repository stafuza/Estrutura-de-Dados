#include <stdio.h>
#include <string.h>

// Definição da struct Pessoa
struct Pessoa {
    char nome[100];
    int idade;
    float altura;
};

// Função que recebe uma cópia da struct
void atualizarIdade(struct Pessoa p) {
    p.idade += 1;  // Modifica apenas a cópia local, NÃO afeta o original
}

int main() {
    struct Pessoa pessoa;
    strcpy(pessoa.nome, "Ana Paula");
    pessoa.idade = 25;
    pessoa.altura = 1.65;

    printf("Antes (por valor): %d anos\n", pessoa.idade);
    atualizarIdade(pessoa);  // Passa por valor (faz cópia)
    printf("Depois (por valor): %d anos\n", pessoa.idade);  // A idade continua 25

    return 0;
}
