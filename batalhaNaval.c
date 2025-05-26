#include <stdio.h>

void criarCone(int cone[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i >= 3) {
                cone[i][j] = 0;
            } else if (j >= 2 - i && j <= 2 + i) {
                cone[i][j] = 3;
            } else {
                cone[i][j] = 0;
            }
        }
    }
}

void criarCruz(int cruz[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 0 || i == 4) {
                cruz[i][j] = 0;
            } else if (i == 2 || j == 2) {
                cruz[i][j] = 3;
            } else {
                cruz[i][j] = 0;
            }
        }
    }
}

void criarOctaedro(int octaedro[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 0 || j == 0 || i == 4 || j == 4) {
                octaedro[i][j] = 0;
            } else if (i == 2 || j == 2) {
                octaedro[i][j] = 3;
            } else {
                octaedro[i][j] = 0;
            }
        }
    }
}

// Correção: Agora percorremos a matriz da figura corretamente (5x5)
void copiarParaTabuleiro(int tabuleiro[10][10], int figura[5][5], int linhaInicio, int colunaInicio) {
    for (int i = 0; i < 5; i++) {  
        for (int j = 0; j < 5; j++) {  
            if (linhaInicio + i < 10 && colunaInicio + j < 10) {  
                tabuleiro[linhaInicio + i][colunaInicio + j] = figura[i][j];  
            }
        }
    }
}

void exibirTabuleiro(int tabuleiro[10][10]) {
    printf("   A B C D E F G H I J\n");
    for (int i = 0; i < 10; i++) {  
        printf("%2d ", i + 1);  

        for (int j = 0; j < 10; j++) {  
            printf("%d ", tabuleiro[i][j]);  
        }

        printf("\n");  
    }  
}

int main() {
    // Tabuleiro principal
    int tabuleiro[10][10] = {0};  

    // Matrizes das figuras
    int cone[5][5], cruz[5][5], octaedro[5][5];

    // Criando as figuras
    criarCone(cone);
    criarCruz(cruz);
    criarOctaedro(octaedro);

    // Copiando as figuras para o tabuleiro principal
    copiarParaTabuleiro(tabuleiro, cone, 0, 5);    
    copiarParaTabuleiro(tabuleiro, cruz, 5, 5);
    copiarParaTabuleiro(tabuleiro, octaedro, 2, 0);

    // Exibindo o tabuleiro atualizado
    exibirTabuleiro(tabuleiro);

    return 0;
}