#include <stdio.h>
#include <math.h>

int main(){
    float n;
    int parteInteira;

    printf("Insira um numero real: ");
    scanf("%g", &n);

    parteInteira = n;
    printf("Parte inteira do numero inserido: %d\n", parteInteira);
    printf("Parte fracionaria do numero inserido: %g\n", n - parteInteira);
    printf("Numero arredondado: %lf\n", round(n));
    return 0;

    /*
    printf("Insira um numero real: ");
    scanf("%g", &n);

    parteInteira = n;
    printf("Parte inteira do numero inserido: %g\n", parteInterira;
    printf("Parte fracionaria do numero inserido: %g\n", n - parteInteira;
    printf("Numero arredondado: %g\n", round(n));
    */
}
