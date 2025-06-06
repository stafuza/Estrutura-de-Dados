#include <stdio.h>
int main()
{
    int valores[3]; // Vetor de 3 posicoes
    // Lê os 3 valores do usuário
    for (int i = 0; i < 3; i++)
    {
        printf("Digite o valor da posição %d: ", i);
        scanf("%d", &valores[1]); // Armazena no I­ndice correspondente
    }
    // Exibe os valores Lidos
    for (int i = 0; i < 3; i++)
    {
        printf("valores[%d] = %d\n", i, valores[i]);
    }
    return 0;
}
