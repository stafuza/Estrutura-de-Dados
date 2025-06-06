#include <stdio.h> // Biblioteca padrão de entrada e saída
#define TAM 10     // Tamanho máximo do vetor

int main() {
    int vetor[TAM] = {5, 10, 20, 25, 30}; // Vetor ordenado
    int n = 5;                            // Número atual de elementos
    int valor = 20;                       // Valor que queremos excluir
    int i, j;                             // Variáveis para controle dos laços
    int encontrado = -1;                  // Guarda a posição onde o valor foi encontrado

    // Etapa 1: Procurar o valor no vetor
    for (i = 0; i < n; i++) {
        printf("Comparando com posição %d: %d\n", i, vetor[i]); // Mostra cada comparação

        if (vetor[i] == valor) { // Se encontramos o valor
            encontrado = i;      // Guardamos a posição
            printf("Valor %d encontrado na posição %d\n", valor, i);
            break;               // Paramos a busca
        } else if (vetor[i] > valor) { // Se o valor atual for maior, não precisa continuar
            printf("Valor não encontrado (interrompido pela ordenação).\n");
            break;
        }
    }

    // Etapa 2: Se encontramos, removemos o valor
    if (encontrado != -1) {
        // Deslocar todos os elementos seguintes para a esquerda
        for (j = encontrado; j < n - 1; j++) {
            vetor[j] = vetor[j + 1]; // Puxa o elemento seguinte para a posição atual
        }
        n--; // Decrementa o número de elementos
        printf("Valor %d removido do vetor.\n", valor);
    } else {
        printf("Valor %d não encontrado no vetor.\n", valor);
    }

    // Mostrar o vetor atualizado
    printf("Vetor após exclusão: ");
    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0; // Finaliza o programa
}
