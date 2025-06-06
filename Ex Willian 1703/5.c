#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int i = 1;
    float a, b;

    while (i != 0)
    {

        printf("Informe o primeiro valor: \n");
        scanf("%f", &a);

        printf("informe o segundo valor: \n");
        scanf("%f", &b);

        printf("a soma dos valores: %g\n", a + b);
        printf("o produto do primeiro pelo quadrado do segundo: %g\n", a * pow(b,2));
        printf("o quadrado do primeiro numero: %g\n", pow(a,2));
        printf("a raiz da soma dos quadrados: %g\n", sqrt(pow(a,2) + pow(b,2)));
        printf("seno da diferenca do primeiro pelo segundo: %g\n", sin(a - b) );
        printf("o modulo do primeiro: %g\n", fabs(a));

        printf("Deseja continuar? 0 - Nao | 1 - Sim\n");
        scanf("%d", &i);
    }
    
    return 0;
}
