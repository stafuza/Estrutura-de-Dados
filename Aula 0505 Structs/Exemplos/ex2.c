#include <stdio.h> // Biblioteca padrão usada para entrada e saída (ex: printf, scanf)

// Definindo a estrutura chamada 'Pessoa'
struct Pessoa {
    char nome[50];     // Campo para armazenar o nome da pessoa
    int idade;         // Campo para armazenar a idade da pessoa
    float altura;      // Campo para a altura da pessoa (tipo float)
};

int main() {
    struct Pessoa pessoas[3]; // Vetor com 3 posições, para armazenar dados de 3 pessoas
    int i; // Variável usada para controlar os loops (for)

    // Loop para coletar os dados das 3 pessoas
    for (i = 0; i < 3; i++) {
        printf("\n--- Pessoa %d ---\n", i + 1); // Informa qual pessoa está sendo cadastrada
        printf("Digite o nome: ");
        scanf(" %[^\n]", pessoas[i].nome); // Lê o nome com espaços
        printf("Digite a idade: ");
        scanf("%d", &pessoas[i].idade); // Lê a idade
        printf("Digite a altura (em metros): ");
        scanf("%f", &pessoas[i].altura); // Lê a altura
    }

    // Exibição dos dados coletados
    printf("\n===== Lista de Pessoas Cadastradas =====\n");
    for (i = 0; i < 3; i++) {
        printf("\nPessoa %d:\n", i + 1); // Mostra a pessoa na lista
        printf("Nome: %s\n", pessoas[i].nome); // Nome
        printf("Idade: %d anos\n", pessoas[i].idade); // Idade
        printf("Altura: %.2f metros\n", pessoas[i].altura); // Altura
    }

    return 0; // Encerra o programa com sucesso
}
