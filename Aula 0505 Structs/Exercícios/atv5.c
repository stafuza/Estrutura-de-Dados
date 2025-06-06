// Ex5. Alocação Dinâmica
// Crie uma struct Livro com os campos titulo (string) e paginas (int).
// Use malloc() para alocar dinamicamente memória para armazenar 2 livros.
// Pergunta: Qual é o comando correto para alocar a memória?

#include <stdio.h>
#include <stdlib.h>

struct Livro {
    char titulo[50];
    int paginas;
};

int main() {
    struct Livro *livros;

    livros = (struct Livro *)malloc(2 * sizeof(struct Livro));

    if (livros == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    for (int i = 0; i < 2; i++) {
        printf("Livro %d\n", i + 1);
        printf("Titulo: ");
        scanf(" %[^\n]", livros[i].titulo);
        printf("Paginas: ");
        scanf("%d", &livros[i].paginas);
    }

    printf("\nLivros cadastrados:\n");
    for (int i = 0; i < 2; i++) {
        printf("%s - %d páginas\n", livros[i].titulo, livros[i].paginas);
    }

    free(livros);
    return 0;
}
