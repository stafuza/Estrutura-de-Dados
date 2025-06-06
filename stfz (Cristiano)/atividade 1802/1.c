#include <stdio.h>

int main(){
    int numero1, numero2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    //subtração primeiro pelo segundo
    printf("A subtracao do primeiro numero pelo segundo e: %d\n", numero1 - numero2);

    //subtração do segundo pelo primeiro
    printf("A subtracao do segundo numero pelo primeiro e: %d\n", numero2 - numero1);

    //multiplicação
    printf("A multiplicacação do primeiro numero pelo segundo e: %d\n", numero1 * numero2);

    //divisão do primeiro pelo segundo (resultado em real)
    printf("A divisao do primeiro pelo segundo em real e: %f\n", (float)numero1 / numero2);

    //divisão do segundo pelo primeiro (resultado em real)
    printf("A divisao do segundo pelo primeiro em real e: %f\n", (float)numero2 / numero1);

    //quociente inteiro da divisão do primeiro pelo segundo
    printf("A divisao do primeiro pelo segundo inteiro e: %d\n", numero1 / numero2);

    //quociente inteiro da divisão do segundo pelo primeiro
    printf("A divisao do segundo pelo primeiro inteiro e: %d\n", numero2 / numero1);

    //resto da divisão do primeiro pelo segundo
    printf("O resto da divisao do primeiro pelo segundo e: %d\n", numero1 % numero2);

    //resto da divisão do segundo pelo primeiro
    printf("O resto da divisao do segundo pelo primeiro e: %d\n", numero2 % numero1);
}