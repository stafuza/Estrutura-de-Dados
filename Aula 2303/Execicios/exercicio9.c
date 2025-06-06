/*Exercício 9: Escreva uma função `maiorMenor(int v[], int tamanho)` que imprime 
o maior e o menor valor contido no vetor.*/

#include <stdio.h>

void maiorMenor(int v[], int tamanho) {
    int maior = v[0], menor = v[0];
    for (int i = 1; i < tamanho; i++) {
        if (v[i] > maior) maior = v[i];
        if (v[i] < menor) menor = v[i];
    }
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
}

int main() {
    int valores[5] = {8, 3, 15, 2, 10};
    maiorMenor(valores, 5);
    return 0;
}
