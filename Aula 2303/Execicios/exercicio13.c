/*Exercício 13: Crie uma função `ordenar(int v[], int tamanho)` que ordena o vetor 
em ordem crescente (use bubble sort ou selection sort). Mostre o vetor antes e depois da ordenação.*/

#include <stdio.h>

void mostrar(int v[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

void ordenar(int v[], int tamanho) {
    int i, j, temp;
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (v[j] > v[j+1]) {
                temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }
}

int main() {
    int vetor[6] = {10, 4, 7, 1, 9, 3};
    
    printf("Vetor antes da ordenação:\n");
    mostrar(vetor, 6);

    ordenar(vetor, 6);

    printf("Vetor depois da ordenação:\n");
    mostrar(vetor, 6);

    return 0;
}
