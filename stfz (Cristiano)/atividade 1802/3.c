#include <stdio.h>

int main(int argc, char const *argv[])
{
    float deposito, taxa;

    printf("Digite o valor do deposito: ");
    scanf("%f", &deposito);
    printf("Digite a taxa (em %): ");
    scanf("%f", &taxa);

    printf("O valor do rendimento e de RS%g\n", deposito * (taxa / 100));
    printf("O valor total ao fim do rendimento e de RS%g\n", deposito * (taxa / 100) + deposito);

    return 0;
}
