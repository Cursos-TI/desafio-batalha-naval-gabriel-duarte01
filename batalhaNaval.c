#include <stdio.h>

#define tamanho  10
   

void iniciandoTabuleiro (int tabuleiro[tamanho][tamanho]){

    for (int i = 0; i < tamanho; i++){
        for (int j = 0; j < tamanho; j++){

            tabuleiro[i][j] = 0;
        }
    
    }
//navio 1
tabuleiro [1][0] = 3;
tabuleiro [2][0] = 3;
tabuleiro [3][0] = 3;

//navio 2
tabuleiro [5][6] = 3;
tabuleiro[6][6] = 3;
tabuleiro[7][6] = 3;

}


void exibirTabuleiro(int tabuleiro[tamanho][tamanho]){
    printf("    A B C D E F G H I J \n");
    for (int i = 0; i < tamanho; i++){
        printf("%2d  ", i + 1);

        for (int j = 0; j < tamanho; j++){
            printf("%d ", tabuleiro[i][j] );
        }
        printf("\n");
    }

}

int main (){

    int tabuleiro[tamanho][tamanho];
    
    iniciandoTabuleiro(tabuleiro);
    exibirTabuleiro(tabuleiro);
}