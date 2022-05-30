#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand( (unsigned)time(NULL) ); // função aleatória apartir de um ponto de partida
    int tabuleiro[3][3] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    int i, x, linhaUser, colunaUser, marcPc, colunaPc, fimdejogo = 0, turnoUser, turnoPc;

    while (fimdejogo == 0) //Roda o código até alguém vencer...
    {
        turnoUser = 0; //Reset das jogadas
        turnoPc = 0;

         for (i=0; i<3; i++)
         {
         for (x=0; x<3; x++)
         {
             printf("%d ", tabuleiro[i][x]); // mostra o Tabuleiro
         }
         printf("\n");
         }

     while (turnoUser == 0) //Confirmação de Jogada , trava enquanto não fizer uma jogada valida
{
     printf("Player digite sua jogada?\n");
     scanf("%d %d", &linhaUser, &colunaUser);

     if (tabuleiro[linhaUser-1][colunaUser-1] !=0)
    {
         printf("Posicao ja selecionada \n");
    }
     else
    {
        tabuleiro[linhaUser-1][colunaUser-1] = -1;
        turnoUser = 1;
    }
}
if (tabuleiro[0][0] != 0 && tabuleiro[0][1] != 0 && tabuleiro[0][2] != 0 &&
    tabuleiro[1][0] != 0 && tabuleiro[1][1] != 0 && tabuleiro[1][2] != 0 &&
    tabuleiro[2][0] != 0 && tabuleiro[2][1] != 0 && tabuleiro[2][2] != 0)
    {
    printf("Deu velha \n");
    fimdejogo = 1;
    // Confirmação de EMPATE e Finalização do Código
    }

    while(turnoPc == 0) //Jogada do Computador
    {
        marcPc = rand()%3; //Seta um numeros aleatorios de 0 a 2;
        colunaPc = rand()%3;

    if (tabuleiro[marcPc][colunaPc]==0) {
        tabuleiro[marcPc][colunaPc] = 1;
        turnoPc = 1;
    }
    }
    if (tabuleiro[0][0] + tabuleiro[0][1] + tabuleiro[0][2] ==3 ||
        tabuleiro[1][0] + tabuleiro[1][1] + tabuleiro[1][2] == 3||
        tabuleiro[2][0] + tabuleiro[2][1] + tabuleiro[2][2] == 3){
            printf("Voce perdeu \n");
            //Confirmar Derrota
            fimdejogo = 1;
        }
        if (tabuleiro[0][0] + tabuleiro[1][0] + tabuleiro[2][0] ==3 ||
        tabuleiro[0][1] + tabuleiro[1][1] + tabuleiro[2][1] == 3||
        tabuleiro[0][2] + tabuleiro[1][2] + tabuleiro[2][2] == 3){
            printf("Voce perdeu \n");
            //Confirmar Derrota
            fimdejogo = 1;
        }
         if (tabuleiro[0][0] + tabuleiro[1][1] + tabuleiro[2][2] ==3 ||
        tabuleiro[2][0] + tabuleiro[1][1] + tabuleiro[0][2] == 3){
            printf("Voce perdeu \n");
            //Confirmar Derrota
            fimdejogo = 1;
        }
        if (tabuleiro[0][0] + tabuleiro[0][1] + tabuleiro[0][2] == -3 ||
        tabuleiro[1][0] + tabuleiro[1][1] + tabuleiro[1][2] == -3||
        tabuleiro[2][0] + tabuleiro[2][1] + tabuleiro[2][2] == -3){
            printf("Voce venceu \n");
            //Confirmar Vitoria
            fimdejogo = 1;
        }
        if (tabuleiro[0][0] + tabuleiro[1][0] + tabuleiro[2][0] == -3 ||
        tabuleiro[0][1] + tabuleiro[1][1] + tabuleiro[2][1] == -3||
        tabuleiro[0][2] + tabuleiro[1][2] + tabuleiro[2][2] == -3){
            printf("Voce venceu \n");
            //Confirmar Vitoria
            fimdejogo = 1;
        }
         if (tabuleiro[0][0] + tabuleiro[1][1] + tabuleiro[2][2] == -3 ||
        tabuleiro[2][0] + tabuleiro[1][1] + tabuleiro[0][2] == -3){
            printf("Voce venceu \n");
            //Confirmar Vitoria
            fimdejogo = 1;
        }
}
return 0;
}
