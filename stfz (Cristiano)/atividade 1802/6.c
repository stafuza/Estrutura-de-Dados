#include <stdio.h>

int main(int argc, char const *argv[])
{
    int idade;

    printf("Insira sua idade: ");
    scanf("%d", &idade);

    printf("Sua idade em meses: %d\n", idade * 12);
    printf("Sua idade em dias: %d\n", idade * 365);
    printf("Sua idade em horas: %d\n", idade * 8766);
    printf("Sua idade em minutos: %d\n", idade * 525960);
    return 0;
}
