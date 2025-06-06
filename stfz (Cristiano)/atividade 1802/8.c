#include <stdio.h>

int main(int argc, char const *argv[])
{
    float raio;
    printf("Digite o raio do círculo:\n");
    raio = lerNumeroRealNaoNegativo();
    printf("Área do círculo: %.2f\n", M_PI * pow(raio, 2));
    return 0;
}
