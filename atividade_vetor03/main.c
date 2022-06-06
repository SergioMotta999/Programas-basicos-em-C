#include <stdio.h>
#include <stdlib.h>

/*Utilizando o mesmo vetor da questão anterior, determine o menor elemento do vetor e a respectiva
posição dele nesse vetor */

int main()
{
  int i, menor = 1000, posicao = 0;
  int Q[5];
  int invalido(){
   printf("impossivel realizar operacao");
  }

  printf("Digite o valor dos vetores \n");

  for(i = 0 ; i < 20 ; i++){
    scanf("%d", &Q[i]);
  }
 for(i = 0 ; i < 20 ; i++){
    if(Q[i] < 0){
    invalido();
    }
  }
 for(i = 0 ; i < 20 ; i++){
    if(menor > Q[i]){
      menor = Q[i];
      posicao = i + 1;
    }
 }

printf("O menor valor eh: %d \n", menor);
printf("A posicao eh: %d", posicao);
}
