#include <stdio.h>

#define TAMANHO  10;

int tabuleiro[i][j];

i = TAMANHO;
j = TAMANHO;    

void iniciandoTabuleiro (int tabuleiro[i][j]){

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){

            tabuleiro[i][j] = 0;
        }
    }

}

//navio 1
tabuleiro [1][0];
tabuleiro [2][0];
tabuleiro [3][0];

//navio 2
tabuleiro [5][6];
tabieiro[6][6];
tabuleiro[7][6];

void exibirTabuleiro(int tabuleiro[i][j]){

    for (int i = 0; i < 10; i++){
        printf("%2d", tabuleiro[i]);

        for (int j = 0; j < 10; j++){
            printf("%d", tabuleiro[j]);
        }
    }

}

int main (){

    iniciandoTabuleiro(tabuleiro[i][j]);
    exibirTabuleiro(tabuleiro[i][j]);
}