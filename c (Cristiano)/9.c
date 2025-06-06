#include <stdio.h>

int main() {
    int anos, meses, dias;

    printf("Digite a idade em anos: ");
    scanf("%d", &anos);
    printf("Digite a idade em meses: ");
    scanf("%d", &meses);
    printf("Digite a idade em dias: ");
    scanf("%d", &dias);

    int total_dias = (anos * 365) + (meses * 30) + dias;
    printf("Idade em dias: %d\n", total_dias);
    return 0;
}
