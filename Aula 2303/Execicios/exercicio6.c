/*Exercício 6: Crie uma função `mostrarVetor(int v[], int tamanho)` que recebe 
um vetor de inteiros e imprime todos os seus elementos. Teste com um vetor de 6 posições.*/

#include <stdio.h>

void mostrarVetor(int v[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("v[%d] = %d\n", i, v[i]);
    }
}

int main() {
    int numeros[6] = {3, 6, 9, 12, 15, 18};
    mostrarVetor(numeros, 6);
    return 0;
}
