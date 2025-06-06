/*Exercício 8: Crie uma função `mediaNotas(float notas[], int qtd)` que calcula a média de notas 
e retorna o valor. Leia 4 notas do usuário, chame a função e mostre a média com duas casas decimais.*/

#include <stdio.h>

float mediaNotas(float notas[], int qtd) {
    float soma = 0;
    for (int i = 0; i < qtd; i++) {
        soma += notas[i];
    }
    return soma / qtd;
}

int main() {
    float notas[4];

    for (int i = 0; i < 4; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    float media = mediaNotas(notas, 4);
    printf("Média = %.2f\n", media);

    return 0;
}
