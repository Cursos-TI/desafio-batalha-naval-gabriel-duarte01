#include <stdio.h>

#define tamanho  10
//tentar criar variáveis diagonais prin. e sec.
//em vez de igualar os i e j, iguala elas
   

void iniciandoTabuleiro (int tabuleiro[tamanho][tamanho]){

    for (int i = 0; i < tamanho; i++){
        for (int j = 0; j < tamanho; j++){

            tabuleiro[i][j] = 0; //inicia o tabuleiro com zero
            
        }
    
    }

}


void exibirTabuleiro(int tabuleiro[tamanho][tamanho]){
    printf("    A B C D E F G H I J \n");
    for (int i = 0; i < tamanho; i++){

        
        printf("%2d  ", i + 1); //%2d faz os números ficarem alinhados 
                                //os nº devem ser expressos com pelo menos 2 espaços de largura
                                //se não tiver o %2d, quando chegasse na linha '10', eles desalinhariam

        for (int j = 0; j < tamanho; j++){
            printf("%d ", tabuleiro[i][j] );
        if(i == j){
            printf("3");
        } else if(i + j == 9){
            printf("3");
        }
        }
        printf("\n");
    }

}

int main (){

    int tabuleiro[tamanho][tamanho];
    
    iniciandoTabuleiro(tabuleiro);
    exibirTabuleiro(tabuleiro);
}
