/*Exercício 14: Escreva uma função `mediaMaiorQue(float v[], int tamanho, float media)` 
que imprime apenas os elementos maiores que a média.*/

#include <stdio.h>

void mediaMaiorQue(float v[], int tamanho, float media) {
    printf("Elementos maiores que a média:\n");
    for (int i = 0; i < tamanho; i++) {
        if (v[i] > media) {
            printf("%.2f\n", v[i]);
        }
    }
}

int main() {
    float notas[5];
    float soma = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    float media = soma / 5;
    printf("Média = %.2f\n", media);

    mediaMaiorQue(notas, 5, media);

    return 0;
}
