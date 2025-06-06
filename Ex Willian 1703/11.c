#include <stdio.h>

int main() {
    float tereza = 1.70, lola = 1.10;
    int anos = 0;

    while (lola <= tereza) {
        tereza += 0.02;
        lola += 0.03;
        anos++;
    }

    printf("Lola será maior que Tereza em %d anos.\n", anos);
    return 0;
}
