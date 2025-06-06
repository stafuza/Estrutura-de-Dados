#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 1;
    int a;

    while (i != 0)
    {

        printf("Insira um numero: ");
        scanf("%d", &a);

        printf("Numero em hexa: %x\n", a);
        printf("Numero em octa: %o\n", a);

        printf("Deseja continuar? 0 - Nao | 1 - Sim\n");
        scanf("%d", &i);
    }
    
    return 0;
}
