#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 1;
    float a;

    while (i != 0)
    {

        printf("Informe o valor em metros: ");
        scanf("%g", &a);

        printf("O valor em decimetros: %g\n", a * 10);
        printf("O valor em centimetros: %g\n", a * 100);
        printf("O valor em milimetros: %g\n", a * 1000);

        printf("Deseja continuar? 0 - Nao | 1 - Sim\n");
        scanf("%d", &i);
    }
    
    return 0;
}
