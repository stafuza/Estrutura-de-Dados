#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("Digite o valor de C: ");
    scanf("%d", &c);

    if (a < b) { a = a + b; b = a - b; a = a - b; }
    if (a < c) { a = a + c; c = a - c; a = a - c; }
    if (b < c) { b = b + c; c = b - c; b = b - c; }

    printf("Ordem decrescente: %d %d %d\n", a, b, c);
    return 0;
}
