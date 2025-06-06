/*Exercício 7: Faça uma função `somaVetor(int v[], int tamanho)` que retorna 
a soma de todos os elementos do vetor. Mostre o resultado na `main()`.*/

#include <stdio.h>

int somaVetor(int v[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += v[i];
    }
    return soma;
}

int main() {
    int valores[5] = {1, 2, 3, 4, 5};
    printf("Soma dos elementos = %d\n", somaVetor(valores, 5));
    return 0;
}
