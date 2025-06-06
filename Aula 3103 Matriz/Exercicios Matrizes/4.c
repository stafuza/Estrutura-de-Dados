#include <stdio.h>

void exibirTabuleiro(char tabuleiro[3][3]) {
    printf("\nTabuleiro atual:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", tabuleiro[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("---+---+---\n");
    }
}

int main() {
    char tabuleiro[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    int linha, coluna, jogadas = 0;
    char jogador = 'X';

    while (jogadas < 9) {
        exibirTabuleiro(tabuleiro);
        printf("\nJogador %c, escolha a linha e a coluna (0-2): ", jogador);
        scanf("%d %d", &linha, &coluna);

        if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2 || tabuleiro[linha][coluna] != ' ') {
            printf("Jogada inválida! Tente novamente.\n");
            continue;
        }

        tabuleiro[linha][coluna] = jogador;
        jogadas++;

        // Alterna o jogador
        jogador = (jogador == 'X') ? 'O' : 'X';
    }

    exibirTabuleiro(tabuleiro);
    printf("\nFim do jogo!\n");

    return 0;
}
