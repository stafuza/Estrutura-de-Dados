#include <stdio.h>
#include <stdlib.h>

// Definindo a estrutura do nó da lista
struct No {
    int valor;          // Valor armazenado no nó
    struct No *prox;    // Ponteiro para o próximo nó
};

// Função para inserir um novo nó no início da lista
struct No* inserirNoInicio(struct No *head, int novoValor) {
    struct No *novoNo = (struct No*)malloc(sizeof(struct No)); // Aloca memória para o novo nó
    novoNo->valor = novoValor;  // Atribui o valor desejado ao novo nó
    novoNo->prox = head;        // Faz o ponteiro 'prox' do novo nó apontar para o antigo primeiro nó (head)
    return novoNo;              // Retorna o novo nó como sendo o novo início (head) da lista
}

// Função para imprimir a lista encadeada
void imprimirLista(struct No *head) {
    struct No *atual = head;  // Cria um ponteiro auxiliar para percorrer a lista
    printf("Lista: ");
    while (atual != NULL) {   // Continua até chegar no final (NULL)
        printf("%d -> ", atual->valor);  // Imprime o valor do nó atual
        atual = atual->prox;  // Avança para o próximo nó
    }
    printf("NULL\n");  // Indica o fim da lista
}

int main() {
    struct No *lista = NULL;  // Inicializa a lista como vazia (NULL)

    // Vamos construir a lista inicial [10 | *] -> [20 | *] -> [30 | NULL]
    lista = inserirNoInicio(lista, 30);  // Insere 30 no início -> lista = [30 | NULL]
    lista = inserirNoInicio(lista, 20);  // Insere 20 no início -> lista = [20 | *] -> [30 | NULL]
    lista = inserirNoInicio(lista, 10);  // Insere 10 no início -> lista = [10 | *] -> [20 | *] -> [30 | NULL]

    // Agora vamos inserir mais um valor [5 | *] -> [10 | *] -> [20 | *] -> [30 | NULL]
    lista = inserirNoInicio(lista, 5);

    // Imprimir a lista final
    imprimirLista(lista);

    return 0;
}
