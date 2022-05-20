#include <stdio.h>
#include <stdlib.h>

void tabuleiro(char posicoes2[3][3]){// função para mostrar o tabuleiro;
        printf("\t %c | %c | %c \n", posicoes2[0][0], posicoes2[0][1], posicoes2[0][2]);
        printf("\t------------\n");
        printf("\t %c | %c | %c \n", posicoes2[1][0], posicoes2[1][1], posicoes2[1][2]);
        printf("\t------------\n");
        printf("\t %c | %c | %c \n", posicoes2[2][0], posicoes2[2][1], posicoes2[2][2]);
}
int main()
{
    char posicoes[3][3] = {{'1','2','3'},
                           {'4','5','6'},
                           {'7','8','9'},};


    char repost;
    int contjogadas, linha, coluna, vez = 0, i, j;
    do{
            contjogadas = 1;
            for(i = 0; i <= 2 ; i++){
                for(j = 0 ; j <= 2 ; j++){
                    posicoes[i][j] = ' ';
                }
            }
       do{
          tabuleiro(posicoes);
          if(vez%2==0){
            printf("Jogador X \n");
          }else{
            printf("Jogador O \n");
          }

          printf("Digite a linha: ");
          scanf("%i", &linha);
          printf("Digite a coluna: ");
          scanf("%i", &coluna);

          if(linha < 1 || linha > 3 || coluna < 1 || coluna > 3 ){
            linha = 0;
            coluna = 0;
          }else if(posicoes[linha - 1][coluna - 1] != ' '){
            linha = 0;
            coluna = 0;
          }else{
            if(vez%2==0) {
                posicoes[linha - 1][coluna - 1] = 'X';
            }else{
                posicoes[linha - 1][coluna - 1] = 'O';
            }
            vez++;
            contjogadas++;
          }
          if(posicoes[0][0]=='X' && posicoes [0][1]=='X' && posicoes[0][2]=='X'){contjogadas = 11;}
          if(posicoes[1][0]=='X' && posicoes [1][1]=='X' && posicoes[1][2]=='X'){contjogadas = 11;}
          if(posicoes[2][0]=='X' && posicoes [2][1]=='X' && posicoes[2][2]=='X'){contjogadas = 11;}
          if(posicoes[0][0]=='X' && posicoes [1][0]=='X' && posicoes[2][0]=='X'){contjogadas = 11;}
          if(posicoes[0][1]=='X' && posicoes [1][1]=='X' && posicoes[2][1]=='X'){contjogadas = 11;}
          if(posicoes[0][2]=='X' && posicoes [1][2]=='X' && posicoes[2][2]=='X'){contjogadas = 11;}
          if(posicoes[0][0]=='X' && posicoes [1][1]=='X' && posicoes[2][2]=='X'){contjogadas = 11;}
          if(posicoes[0][2]=='X' && posicoes [1][1]=='X' && posicoes[2][0]=='X'){contjogadas = 11;}

          if(posicoes[0][0]=='O' && posicoes [0][1]=='O' && posicoes[0][2]=='O'){contjogadas = 12;}
          if(posicoes[1][0]=='O' && posicoes [1][1]=='O' && posicoes[1][2]=='O'){contjogadas = 12;}
          if(posicoes[2][0]=='O' && posicoes [2][1]=='O' && posicoes[2][2]=='O'){contjogadas = 12;}
          if(posicoes[0][0]=='O' && posicoes [1][0]=='O' && posicoes[2][0]=='O'){contjogadas = 12;}
          if(posicoes[0][1]=='O' && posicoes [1][1]=='O' && posicoes[2][1]=='O'){contjogadas = 12;}
          if(posicoes[0][2]=='O' && posicoes [1][2]=='O' && posicoes[2][2]=='O'){contjogadas = 12;}
          if(posicoes[0][0]=='O' && posicoes [1][1]=='O' && posicoes[2][2]=='O'){contjogadas = 12;}
          if(posicoes[0][2]=='O' && posicoes [1][1]=='O' && posicoes[2][0]=='O'){contjogadas = 12;}

       }while(contjogadas <= 9);
       tabuleiro(posicoes);
       if(contjogadas == 10){
          printf("Jogo empatado \n");
       }if(contjogadas == 11){
        printf("Vencedor X \n");
       }if(contjogadas == 12){
        printf("Vencedor O \n");
       }

        printf("Deseja jogar novamente? (s) para SIM e (n) para NAO \n");
        scanf("%s", &repost);
        }while(repost == 's');

}
