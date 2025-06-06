#include <stdio.h>

int main() {
    int cod, quant;
    float preco;

    printf("Digite o codigo do produto: ");
    scanf("%d", &cod);
    printf("Digite a quantidade comprada: ");
    scanf("%d", &quant);

    switch(cod) {
        case 1001:
            preco = 5.32;
            break;
        case 1324:
            preco = 6.45;
            break;
        case 6548:
            preco = 2.37;
            break;
        case 987:
            preco = 5.32;
            break;
        case 7623:
            preco = 6.45;
            break;
        default:
            printf("Codigo do produto invalido!\n");
            return 1;
    }

    printf("Preco total: %.2f\n", preco * quant);
    return 0;
}
