/*Exercício 15: Monte um programa com menu de opções:
1 - Inserir valores no vetor
2 - Mostrar vetor
3 - Somar elementos
4 - Calcular média
5 - Sair
Use uma função diferente para cada opção do menu.*/

#include <stdio.h>

#define TAM 5

void inserirValores(int v[]) {
    for (int i = 0; i < TAM; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }
}

void mostrarVetor(int v[]) {
    for (int i = 0; i < TAM; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int somarElementos(int v[]) {
    int soma = 0;
    for (int i = 0; i < TAM; i++) {
        soma += v[i];
    }
    return soma;
}

float calcularMedia(int v[]) {
    return (float)somarElementos(v) / TAM;
}

int main() {
    int vetor[TAM];
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1 - Inserir valores\n");
        printf("2 - Mostrar vetor\n");
        printf("3 - Somar elementos\n");
        printf("4 - Calcular média\n");
        printf("5 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                inserirValores(vetor);
                break;
            case 2:
                mostrarVetor(vetor);
                break;
            case 3:
                printf("Soma = %d\n", somarElementos(vetor));
                break;
            case 4:
                printf("Média = %.2f\n", calcularMedia(vetor));
                break;
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 5);

    return 0;
}
