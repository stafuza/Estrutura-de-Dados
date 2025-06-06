#include <stdio.h>

int main() {
    float notas[4];      // Vetor para 4 notas
    float soma = 0;      // Variável para acumular as notas
    float media;

    // Lê as 4 notas
    for(int i = 0; i < 4; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);  // Armazena no vetor
        soma += notas[i];        // Soma a nota na variável soma
    }

    media = soma / 4;  // Calcula a média

    printf("Média das notas: %.2f\n", media);

    return 0;
}
