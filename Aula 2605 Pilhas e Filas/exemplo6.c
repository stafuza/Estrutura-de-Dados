#include <stdio.h>
#include <stdlib.h>

// Estrutura do nó da fila
struct No {
    int valor;             // Valor do nó
    struct No *anterior;   // Ponteiro para o nó anterior
    struct No *proximo;    // Ponteiro para o próximo nó
};

// Inserir elemento no fim da fila
void enfileirar(struct No **inicio, struct No **fim, int valor) {
    struct No *novo = (struct No *)malloc(sizeof(struct No)); // Cria novo nó
    novo->valor = valor;
    novo->anterior = NULL;
    novo->proximo = NULL;

    if (*inicio == NULL) {
        // Se a fila estiver vazia, o novo nó é o único
        *inicio = novo;
        *fim = novo;
        novo->proximo = novo;
        novo->anterior = novo;
    } else {
        // Ajusta os ponteiros para adicionar no fim da fila
        novo->anterior = *fim;
        novo->proximo = *inicio;
        (*fim)->proximo = novo;
        (*inicio)->anterior = novo;
        *fim = novo;  // Atualiza o ponteiro fim
    }

    printf("Elemento %d inserido na fila.\n", valor);
}

// Remover elemento do início da fila
void desenfileirar(struct No **inicio, struct No **fim) {
    if (*inicio == NULL) {
        printf("Fila vazia! Nada para remover.\n");
        return;
    }

    struct No *removido = *inicio;  // Guarda o nó a ser removido

    if (*inicio == *fim) {
        // Caso haja apenas um elemento
        *inicio = NULL;
        *fim = NULL;
    } else {
        // Ajusta os ponteiros para remover o primeiro
        *inicio = removido->proximo;
        (*inicio)->anterior = *fim;
        (*fim)->proximo = *inicio;
    }

    printf("Elemento %d removido da fila.\n", removido->valor);
    free(removido);  // Libera a memória
}

// Mostrar a fila do início até o fim (uma volta completa)
void mostrarFila(struct No *inicio) {
    if (inicio == NULL) {
        printf("Fila vazia.\n");
        return;
    }

    struct No *atual = inicio;

    printf("Fila atual: ");
    do {
        printf("%d ", atual->valor);    // Mostra o valor do nó atual
        atual = atual->proximo;         // Avança para o próximo nó
    } while (atual != inicio);          // Para quando der uma volta completa
    
    printf("\n");
}

// Função principal com menu
int main() {
    struct No *inicio = NULL; // Ponteiro para o início da fila
    struct No *fim = NULL;    // Ponteiro para o fim da fila
    int opcao, valor;

    do {
        printf("\n===== MENU - FILA DUPLAMENTE CIRCULAR =====\n");
        printf("1. Inserir elemento\n");
        printf("2. Remover elemento\n");
        printf("3. Mostrar fila\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao); // Lê a opção do usuário

        switch (opcao) {
            case 1:
                printf("Digite o valor: ");
                scanf("%d", &valor);
                enfileirar(&inicio, &fim, valor); // Insere no fim
                break;
            case 2:
                desenfileirar(&inicio, &fim); // Remove do início
                break;
            case 3:
                mostrarFila(inicio); // Mostra a fila
                break;
            case 0:
                printf("Encerrando...\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 0); // Continua até a opção ser 0

    // Libera memória restante ao encerrar
    while (inicio != NULL) {
        desenfileirar(&inicio, &fim);
    }

    return 0;
}