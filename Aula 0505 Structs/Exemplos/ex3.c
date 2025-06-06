#include <stdio.h> // Biblioteca padrão para entrada e saída de dados

// Definindo a estrutura Endereco
struct Endereco {
    char rua[50];   // Campo para armazenar o nome da rua
    int numero;     // Campo para armazenar o número da residência
};

// Definindo a estrutura Pessoa, que contém um campo do tipo Endereco
struct Pessoa {
    char nome[50];         // Campo para armazenar o nome da pessoa
    int idade;             // Campo para armazenar a idade da pessoa
    struct Endereco endereco; // Campo do tipo Endereco (struct aninhada)
};

int main() {
    struct Pessoa p; // Declarando uma variável do tipo Pessoa

    // Solicitando e lendo o nome da pessoa (sem espaços)
    printf("Digite o nome: ");
    scanf("%s", p.nome); // Lê uma string até o primeiro espaço

    // Solicitando e lendo a idade da pessoa
    printf("Digite a idade: ");
    scanf("%d", &p.idade);

    // Solicitando e lendo o nome da rua (sem espaços)
    printf("Digite o nome da rua: ");
    scanf("%s", p.endereco.rua);

    // Solicitando e lendo o número da casa
    printf("Digite o número da casa: ");
    scanf("%d", &p.endereco.numero);

    // Exibindo os dados coletados
    printf("\n--- Dados Cadastrados ---\n");
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("Endereco: Rua %s, Nº %d\n", p.endereco.rua, p.endereco.numero); // Endereço completo

    return 0; // Indica que o programa terminou com sucesso
}
