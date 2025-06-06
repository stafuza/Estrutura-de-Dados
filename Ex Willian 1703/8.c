#include <stdio.h>

int main() {
    int opcao;

    do {
        printf("\nEscolha uma opcao:\n");
        printf("1 - Escrever todas as letras do alfabeto (Maiúsculas e Minúsculas)\n");
        printf("2 - Exibir a soma dos números de 0 a 100\n");
        printf("3 - Exibir a soma dos 100 primeiros números pares\n");
        printf("4 - Calcular o perímetro de um pentágono\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                printf("\nMaiúsculas: ");
                for (char letra = 'A'; letra <= 'Z'; letra++)
                    printf("%c ", letra);

                printf("\nMinúsculas: ");
                for (char letra = 'a'; letra <= 'z'; letra++)
                    printf("%c ", letra);
                printf("\n");
                break;
            }
            case 2: {
                int soma = 0;
                for (int i = 0; i <= 100; i++)
                    soma += i;

                printf("\nSoma dos números de 0 a 100: %d\n", soma);
                break;
            }
            case 3: {
                int soma = 0, contador = 0, numero = 0;
                while (contador < 100) {
                    if (numero % 2 == 0) {
                        soma += numero;
                        contador++;
                    }
                    numero++;
                }
                printf("\nSoma dos 100 primeiros números pares: %d\n", soma);
                break;
            }
            case 4: {
                float lado, perimetro;
                printf("\nDigite a medida de um lado do pentágono: ");
                scanf("%f", &lado);
                perimetro = 5 * lado;
                printf("Perímetro do pentágono: %.2f\n", perimetro);
                break;
            }
            case 0:
                printf("\nSaindo do programa...\n");
                break;
            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}
