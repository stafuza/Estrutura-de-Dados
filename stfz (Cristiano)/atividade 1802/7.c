#include <stdio.h>

int main(int argc, char const *argv[])
{
    float l1, l2;

    printf("Insira o comprimento primeiro lado: ");
    scanf("%g", &l1);
    printf("Insira o comprimento segundo lado: ");
    scanf("%g", &l2);

    printf("A area do triangulo e de: %g\n", (l1 * l2) / 2);

    return 0;
}
