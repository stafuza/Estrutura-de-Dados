// Ex3. Vetor de Struct com Ponteiros
// Declare um vetor de structs Produto, com os campos nome (string) e preco (float).
// Crie um ponteiro para esse vetor e preencha os dados de 3 produtos usando o ponteiro.
// Pergunta: Como acessar o terceiro produto usando o ponteiro?

#include <stdio.h>

struct Produto {
    char nome[30];
    float preco;
};

int main() {
    struct Produto produtos[3];
    struct Produto *ptr = produtos;

    for (int i = 0; i < 3; i++) {
        printf("Produto %d\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", ptr[i].nome);
        printf("Preco: ");
        scanf("%f", &ptr[i].preco);
    }

    printf("\nTerceiro Produto: %s - R$%.2f\n", ptr[2].nome, ptr[2].preco);
    return 0;
}
