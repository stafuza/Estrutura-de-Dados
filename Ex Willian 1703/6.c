#include <stdio.h>
int main()
{
    int valor1, valor2;
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);
    if (valor1 < valor2)
    {
        printf("Lista crescente: ");
        for (int i = valor1; i <= valor2; i++)
        {
            printf("%d ", i);
        }
    }
    else if (valor1 > valor2)
    {
        printf("Lista decrescente: ");
        for (int i = valor1; i >= valor2; i--)
        {
            printf("%d ", i);
        }
    }
    else
    {
        printf("Valores iguais\n");
    }
    printf("\n");
    return 0;
}