#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n1, n2, n3;

    printf("Digite a primeira nota: ");
    scanf("%d", &n1);
    printf("Digite a segunda nota: ");
    scanf("%d", &n2);
    printf("Digite a terceira nota: ");
    scanf("%d", &n3);

    printf("A media do aluno e: %g\n", ((float)n1 + n2 + n3) / 3);
    return 0;
}
