#include <stdio.h>
#include <stdlib.h>

// Estrutura do nó
struct No {
    int valor;
    struct No *prox;
};

// Função para remover um nó com valor específico
struct No* removerElemento(struct No *head, int valorRemover) {
    // 1. Verifica se a lista está vazia
    if (head == NULL) {
        printf("Lista vazia.\n");
        return NULL;
    }

    // 2. Verifica se o valor está no primeiro nó
    if (head->valor == valorRemover) {
        struct No *temp = head;  // Guarda o nó a ser removido
        head = head->prox;       // Atualiza o head para o próximo nó
        free(temp);              // Libera o nó removido
        return head;             // Retorna o novo head
    }

    // 3. Caso contrário, percorre a lista procurando o valor
    struct No *anterior = head;
    struct No *atual = head->prox;
    while (atual != NULL && atual->valor != valorRemover) {
        anterior = atual;
        atual = atual->prox;
    }

    // 4. Se não encontrou o valor
    if (atual == NULL) {
        printf("Valor %d não encontrado na lista.\n", valorRemover);
        return head;
    }

    // 5. Encontrou o valor: remove o nó
    anterior->prox = atual->prox;  // Pula o nó a ser removido
    free(atual);                   // Libera a memória do nó
    return head;                   // Retorna o head da lista
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

// Função auxiliar para inserir no fim (reaproveitando o que já vimos)
struct No* inserirNoFim(struct No *head, int valor) {
    struct No *novo = (struct No*)malloc(sizeof(struct No));
    novo->valor = valor;
    novo->prox = NULL;
    if (head == NULL) return novo;
    struct No *atual = head;
    while (atual->prox != NULL) {
        atual = atual->prox;
    }
    atual->prox = novo;
    return head;
}

int main() {
    struct No *lista = NULL;

    // Criando a lista [10 -> 20 -> 30 -> 40]
    lista = inserirNoFim(lista, 10);
    lista = inserirNoFim(lista, 20);
    lista = inserirNoFim(lista, 30);
    lista = inserirNoFim(lista, 40);
    imprimirLista(lista);  // Mostra a lista inicial

    // Remover o valor 30
    lista = removerElemento(lista, 30);
    imprimirLista(lista);  // Esperado: 10 -> 20 -> 40 -> NULL

    // Tentar remover valor inexistente
    lista = removerElemento(lista, 99);
    imprimirLista(lista);

    // Remover o primeiro elemento (10)
    lista = removerElemento(lista, 10);
    imprimirLista(lista);  // Esperado: 20 -> 40 -> NULL

    return 0;
}
