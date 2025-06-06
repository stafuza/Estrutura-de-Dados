#include <stdio.h>

int main() {
    int idade, maior_idade = 0, menor_idade = 100;
    float altura, maior_altura = 0, menor_altura = 100;
    
    for (int i = 0; i < 5; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade);
        printf("Digite a altura da pessoa %d (em metros): ", i + 1);
        scanf("%f", &altura);

        if (idade > maior_idade) maior_idade = idade;
        if (idade < menor_idade) menor_idade = idade;
        if (altura > maior_altura) maior_altura = altura;
        if (altura < menor_altura) menor_altura = altura;
    }

    printf("Pessoa mais alta: %.2f m\nPessoa mais baixa: %.2f m\n", maior_altura, menor_altura);
    printf("Pessoa mais nova: %d anos\nPessoa mais velha: %d anos\n", menor_idade, maior_idade);

    return 0;
}
