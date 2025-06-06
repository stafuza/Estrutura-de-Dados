#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float baseMaior, baseMenor, alturaTrapezio;
    printf("Digite a base maior do trapézio: \n");
    scanf("%f", &baseMaior);
    printf("Digite a base menor do trapézio: \n");
    scanf("%f", &baseMenor);
    printf("Digite a altura do trapézio: \n");
    scanf("%f", &alturaTrapezio);

    printf("Área do trapézio: %.2f\n", ((baseMaior + baseMenor) / 2) * alturaTrapezio);

    return 0;
}
