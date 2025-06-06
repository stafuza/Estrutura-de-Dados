#include <stdio.h>

int main() {
    int i;
    float a, b, c;

    printf("Digite o valor de i (1, 2 ou 3): ");
    scanf("%d", &i);
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    if (i == 1) {
        //crescente
        if (a > b) { a = a + b; b = a - b; a = a - b; }
        if (a > c) { a = a + c; c = a - c; a = a - c; }
        if (b > c) { b = b + c; c = b - c; b = b - c; }
        printf("Ordem crescente: %.2f %.2f %.2f\n", a, b, c);
    } else if (i == 2) {
        //decrescente
        if (a < b) { a = a + b; b = a - b; a = a - b; }
        if (a < c) { a = a + c; c = a - c; a = a - c; }
        if (b < c) { b = b + c; c = b - c; b = b - c; }
        printf("Ordem decrescente: %.2f %.2f %.2f\n", a, b, c);
    } else if (i == 3) {
        //maior entre os dois
        if (a > b && a > c) { b = b + c; c = b - c; b = b - c; } // b, a, c
        else if (b > a && b > c) { a = a + c; c = a - c; a = a - c; } // a, b, c
        else { a = a + b; b = a - b; a = a - b; } // a, c, b
        printf("Valores: %.2f %.2f %.2f\n", a, b, c);
    } else {
        printf("Valor de 'i' inválido!\n");
    }

    return 0;
}
