/*Exercício 10: Faça uma função `parOuImpar(int numero)` que retorna 1 se for par e 0 se for ímpar. 
Leia 5 números do usuário e informe se são pares ou ímpares, utilizando a função.*/

#include <stdio.h>

int parOuImpar(int numero) {
    return numero % 2 == 0;
}

int main() {
    int num;

    for (int i = 0; i < 5; i++) {
        printf("Digite um número: ");
        scanf("%d", &num);
        if (parOuImpar(num)) {
            printf("%d é par\n", num);
        } else {
            printf("%d é ímpar\n", num);
        }
    }

    return 0;
}
