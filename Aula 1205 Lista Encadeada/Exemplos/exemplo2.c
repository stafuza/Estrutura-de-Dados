#include <stdio.h>
#include <stdlib.h>

// Definindo a estrutura do nó
struct No {
    int valor;
    struct No *prox;
};

// Função para inserir no fim da lista
struct No* inserirNoFim(struct No *head, int novoValor) {
    // 1. Alocar memória para o novo nó
    struct No *novoNo = (struct No*)malloc(sizeof(struct No));

    // 2. Atribuir o valor ao novo nó
    novoNo->valor = novoValor;

    // 3. O novo nó será o último, portanto 'prox' será NULL
    novoNo->prox = NULL;

    // 4. Se a lista estiver vazia (head == NULL), o novo nó será o primeiro nó
    if (head == NULL) {
        return novoNo;
    }

    // 5. Percorrer a lista até o último nó
    struct No *atual = head;
    while (atual->prox != NULL) {
        atual = atual->prox;
    }

    // 6. Fazer o último nó apontar para o novo nó
    atual->prox = novoNo;

    // 7. Retorna o início da lista (head não muda)
    return head;
}

// Função para imprimir a lista encadeada
void imprimirLista(struct No *head) {
    struct No *atual = head;
    printf("Lista: ");
    while (atual != NULL) {
        printf("%d -> ", atual->valor);
        atual = atual->prox;
    }
    printf("NULL\n");
}

int main() {
    struct No *lista = NULL;  // Lista vazia inicialmente

    // Construindo a lista inserindo no fim
    lista = inserirNoFim(lista, 10);  // Lista = [10 | NULL]
    lista = inserirNoFim(lista, 20);  // Lista = [10 | *] -> [20 | NULL]
    lista = inserirNoFim(lista, 30);  // Lista = [10 | *] -> [20 | *] -> [30 | NULL]

    // Inserindo 40 no fim
    lista = inserirNoFim(lista, 40);  // Lista = [10 | *] -> [20 | *] -> [30 | *] -> [40 | NULL]

    // Imprimindo a lista final
    imprimirLista(lista);

    return 0;
}
