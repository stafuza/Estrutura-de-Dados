#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float salario;
    printf("Digite o salário do funcionário: \n");
    scanf("%f", &salario);

    double imposto = salario * 0.05;
    printf("Imposto de renda (5%%): %.2f\n", imposto);

    return 0;
}
