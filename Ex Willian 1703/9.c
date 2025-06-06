/*Solicitar a idade de 5 pessoas e exibir a maior, menor e a média das idades.*/

#include <stdio.h>

int main()
{
    int idade, maior = 0, menor = 1000, soma = 0; // define os valores das variáveis (valor 1000 limite)
    for (int i = 1; i < 6; i++)
    {
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &idade);
        soma += idade;
        if (idade > maior)
            maior = idade;
        if (idade < menor)
            menor = idade;
    }
    printf("Maior idade: %d\nMenor idade: %d\nMédia das idades: %.2f\n", maior, menor, soma / 5.0);
    return 0;
}
