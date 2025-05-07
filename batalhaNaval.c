#include <stdio.h>

#define tamanho  10
   

void iniciandoTabuleiro (int tabuleiro[tamanho][tamanho]){

    for (int i = 0; i < tamanho; i++){
        for (int j = 0; j < tamanho; j++){

            tabuleiro[i][j] = 0; //inicia o tabuleiro com zero
        }
    
    }
//navio 1
tabuleiro [1][0] = 3;
tabuleiro [2][0] = 3;
tabuleiro [3][0] = 3;

//navio 2
tabuleiro [4][6] = 3;
tabuleiro[4][7] = 3;
tabuleiro[4][8] = 3;

}


void exibirTabuleiro(int tabuleiro[tamanho][tamanho]){
    printf("    A B C D E F G H I J \n");
    for (int i = 0; i < tamanho; i++){
        printf("%2d  ", i + 1); //%2d faz os números ficarem alinhados 
                                //os nº devem ser expressos com pelo menos 2 espaços de largura
                                //se não tiver, quando chegasse na linha '10', eles desalinhariam

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