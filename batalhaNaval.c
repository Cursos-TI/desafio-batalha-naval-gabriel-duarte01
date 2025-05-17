#include <stdio.h>

#define tamanho 10

void iniciandoTabuleiro(int tabuleiro[tamanho][tamanho]) {
    for (int linha = 0; linha < tamanho; linha++) {
        for (int coluna = 0; coluna < tamanho; coluna++) {
            // Preenchendo diagonal principal
            if (linha == coluna) {
                tabuleiro[linha][coluna] = 3;
            }
            // Preenchendo diagonal secundária
            else if (linha + coluna == 9
        ) {
                tabuleiro[linha][coluna] = 3;
            }
            // Preenchendo o restante com água
            else {
                tabuleiro[linha][coluna] = 0;
            }
        }
    }
}

void exibirTabuleiro(int tabuleiro[tamanho][tamanho]) {
    printf("   A B C D E F G H I J\n");
    for (int linha = 0; linha < tamanho; linha++) {
        printf("%2d ", linha + 1);
        for (int coluna = 0; coluna < tamanho; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[tamanho][tamanho];

    iniciandoTabuleiro(tabuleiro);
    exibirTabuleiro(tabuleiro);

    return 0;
}