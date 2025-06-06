#include <stdio.h>
#include <string.h>

// Definição da struct Pessoa
struct Pessoa {
    char nome[100];
    int idade;
    float altura;
};

// Função que recebe um ponteiro para struct Pessoa
void atualizarIdade(struct Pessoa *p) {
    p->idade += 1;  // Acessa diretamente o campo idade e incrementa
}

int main() {
    struct Pessoa pessoa;
    strcpy(pessoa.nome, "Ana Paula");
    pessoa.idade = 25;
    pessoa.altura = 1.65;

    printf("Antes (por ponteiro): %d anos\n", pessoa.idade);
    atualizarIdade(&pessoa);  // Passa o ENDEREÇO da struct
    printf("Depois (por ponteiro): %d anos\n", pessoa.idade);  // Agora a idade foi alterada!

    return 0;
}
