/*Exercício 2: Crie uma função `dobro(int x)` que recebe um número inteiro como parâmetro 
e retorna o seu dobro. Use a função na `main()` e mostre o resultado.*/

#include <stdio.h>

int dobro(int x) {
    return x * 2;
}

int main() {
    int num = 5;
    printf("Dobro de %d é %d\n", num, dobro(num));
    return 0;
}
