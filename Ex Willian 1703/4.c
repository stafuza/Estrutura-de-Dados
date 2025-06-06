#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 1, c;
    double f;

    while (i != 0)
    {

        printf("Informe a temperatura em F°: ");
        scanf("%g", &f);

        printf("O valor em Celsius: %g°\n", (f-32.0)*(5.0/9.0));

        printf("Deseja continuar? 0 - Nao | 1 - Sim\n");
        scanf("%d", &i);
    }
    
    return 0;
}
