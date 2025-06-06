#include <stdio.h>

int main() {
    int dias, anos, meses, resto;

    printf("Digite a idade em dias: ");
    scanf("%d", &dias);

    anos = dias / 365;
    resto = dias % 365;
    meses = resto / 30;
    dias = resto % 30;

    printf("Idade: %d anos, %d meses e %d dias\n", anos, meses, dias);
    return 0;
}