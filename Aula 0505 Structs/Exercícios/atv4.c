// Ex4. Passagem por Referência
// Escreva uma função void atualizarAltura(struct Pessoa *p) que recebe um ponteiro para uma struct Pessoa
// e aumenta a altura dela em 10%.
// Pergunta: Por que a função deve receber um ponteiro em vez de uma struct comum?

#include <stdio.h>

struct Pessoa {
    float altura;
};

void atualizarAltura(struct Pessoa *p) {
    p->altura *= 1.1;
}

int main() {
    struct Pessoa pessoa = {1.70};
    atualizarAltura(&pessoa);
    printf("Nova altura: %.2f\n", pessoa.altura);
    return 0;
}
