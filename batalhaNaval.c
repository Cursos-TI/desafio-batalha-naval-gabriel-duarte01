#include <stdio.h>

int main(){

    char *tabuleiro[10][10] = {{"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"}, {"1","2","3","4","5","6","7","8","9","10"} };

    int linha = 0;
    int coluna = 0;

        while(linha <= 9){

            printf("%s \n", tabuleiro[1]);

            for(coluna; coluna <= 9; coluna++){
                printf("%s ", tabuleiro[0][0]);
            }
            
            linha++;
        }



    return 0;
}