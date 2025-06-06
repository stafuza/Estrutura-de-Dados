#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 1;
    float a;

    while (i != 0)
    {

        printf("Informe o primeiro valor: \n");
        scanf("%f", &a);

        if (a < 100)
        {
            printf("O valor corrigido e: %g\n", a += a * 0.1);
        }
        else
        {
            printf("O valor corrigido e: %g\n", a += a * 0.2);
        }

        printf("Deseja continuar? 0 - Nao | 1 - Sim\n");
        scanf("%d", &i);
    }

    return 0;
}
