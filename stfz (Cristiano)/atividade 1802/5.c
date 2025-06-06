#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("Insira um numero: ");
    scanf("%d", &n);

    printf("A raiz quadrada deste numero e: %.2f\n", sqrt(n));
    printf("Esse numero elevado ao quadrado: %f\n", pow(n, 2));
    return 0;
}
