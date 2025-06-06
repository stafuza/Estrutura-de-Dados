/*Exercício 12: Faça uma função `contarOcorrencias(int v[], int tamanho, int valor)` 
que retorna quantas vezes um valor aparece no vetor.*/

#include <stdio.h>

int contarOcorrencias(int v[], int tamanho, int valor) {
    int cont = 0;
    for (int i = 0; i < tamanho; i++) {
        if (v[i] == valor) cont++;
    }
    return cont;
}

int main() {
    int vetor[8] = {2, 4, 2, 6, 2, 7, 4, 2};
    int valor;

    printf("Digite o valor a contar: ");
    scanf("%d", &valor);

    printf("O valor %d aparece %d vezes.\n", valor, contarOcorrencias(vetor, 8, valor));
    return 0;
}
