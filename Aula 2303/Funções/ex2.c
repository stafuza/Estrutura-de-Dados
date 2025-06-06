#include <stdio.h>

int somar(int a, int b){
    return a + b; // Retorna a soma
}

int main(){
    int x = 10, y = 5; // Declara duas variáveis inteiras int resultado;
    int resultado;
    
    // Chama a função somar passando x e y
    resultado = somar(x, y);

    // Imprime o resultado da soma
    printf("Resultado da soma: %d\n", resultado);

    return 0;
}