// Ex2. Correção de Código
// Analise o código abaixo e corrija o erro:

// struct Pessoa {
//     int idade;
//     float altura;
// };
// int main() {
//     struct Pessoa *p;
//     p->idade = 20;
//     p->altura = 1.75;
// }

// Pergunta: O que está faltando para que o código funcione corretamente?

//O código falha porque o ponteiro p não aponta para uma área válida de memória. 
//É necessário alocar memória para ele usando malloc() antes de acessar os campos da struct.

struct Pessoa {
    int idade;
    float altura;
};

int main() {
    struct Pessoa *p;
    p = (struct Pessoa*) malloc(sizeof(struct Pessoa));  // Aloca memória para a struct

    if (p == NULL) return 1;  // Verifica se a alocação foi bem-sucedida

    p->idade = 20;
    p->altura = 1.75;

    return 0;
}