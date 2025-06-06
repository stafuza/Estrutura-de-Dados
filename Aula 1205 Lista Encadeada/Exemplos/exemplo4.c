#include <stdio.h>
#include <stdlib.h>

// Estrutura do nó
struct No {
    int valor;
    struct No *prox;
};

// Função para percorrer e imprimir a lista
void imprimirLista(struct No *head) {
    struct No *atual = head;  // Cria um ponteiro auxiliar que começa no head
    printf("Lista: ");
    while (atual != NULL) {  // Enquanto o ponteiro não for NULL (fim da lista)
        printf("%d -> ", atual->valor);  // Imprime o valor do nó atual
        atual = atual->prox;  // Avança para o próximo nó
    }
    printf("NULL\n");  // Indica o fim da lista
}

// Função auxiliar para inserir no fim (já conhecida)
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
    
    // Criando a Lista: 10 -> 20 -> 30 -> NULL
    lista = inserirNoFim(lista, 10);
    lista = inserirNoFim(lista, 20);
    lista = inserirNoFim(lista, 30);
    
    // Percorrendo e imprimindo a lista
    imprimirLista(lista);
    
    return 0;
}
