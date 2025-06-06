#include <stdio.h>

int main() {
    int cod, quant;
    float preco;

    printf("Digite o codigo do item: ");
    scanf("%d", &cod);
    printf("Digite a quantidade: ");
    scanf("%d", &quant);

    switch(cod) {
        case 100:
            preco = 1.20;
            break;
        case 101:
            preco = 1.30;
            break;
        case 102:
            preco = 1.50;
            break;
        case 103:
            preco = 1.20;
            break;
        case 104:
            preco = 1.30;
            break;
        case 105:
            preco = 1.00;
            break;
        default:
            printf("Codigo invalido!\n");
    }

    printf("Valor a ser pago: %.2f\n", preco * quant);
    return 0;
}
