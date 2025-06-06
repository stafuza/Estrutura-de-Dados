/*Exercício 5: Leia 5 valores inteiros do teclado e armazene-os em um vetor. 
Depois, mostre os valores lidos.*/

#include <stdio.h>

int main() {
    int v[5];
    printf("Digite 5 números inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &v[i]);
    }
    printf("Valores digitados:\n");
    for (int i = 0; i < 5; i++) {
        printf("v[%d] = %d\n", i, v[i]);
    }
    return 0;
}
