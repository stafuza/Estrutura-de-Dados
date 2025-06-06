#include <stdio.h>

int main() {
    char horarios[5][20];

    printf("Digite a grade de horários da semana:\n");
    for (int i = 0; i < 5; i++) {
        printf("Dia %d: ", i + 1);
        scanf(" %[^\n]", horarios[i]); //Lê uma string com espaços
    }

    printf("Grade de horários:\n");
    for (int i = 0; i < 5; i++) {
        printf("Dia %d: %s\n", i + 1, horarios[i]);
    }

    return 0;
}
