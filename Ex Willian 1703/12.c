#include <stdio.h>

int main() {
    int opcao;
    float temp, convertida;

    printf("Escolha a escala de entrada:\n1 - Celsius para Fahrenheit\n2 - Fahrenheit para Celsius\n");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &temp);
        convertida = (temp * 9 / 5) + 32;
        printf("Temperatura em Fahrenheit: %.2f°F\n", convertida);
    } else if (opcao == 2) {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%f", &temp);
        convertida = (temp - 32) * 5 / 9;
        printf("Temperatura em Celsius: %.2f°C\n", convertida);
    } else {
        printf("Opção inválida.\n");
    }

    return 0;
}
