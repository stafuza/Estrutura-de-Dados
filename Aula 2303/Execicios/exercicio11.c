/*Exercício 11: Crie uma função `buscaElemento(int v[], int tamanho, int valor)` 
que retorna o índice do valor no vetor ou -1 se não for encontrado.*/

#include <stdio.h>

int buscaElemento(int v[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (v[i] == valor) return i;
    }
    return -1;
}

int main() {
    int vetor[6] = {4, 7, 10, 22, 35, 9};
    int valor;

    printf("Digite um valor para buscar: ");
    scanf("%d", &valor);

    int indice = buscaElemento(vetor, 6, valor);

    if (indice != -1) {
        printf("Valor encontrado no índice %d\n", indice);
    } else {
        printf("Valor não encontrado no vetor\n");
    }

    return 0;
}
