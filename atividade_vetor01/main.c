#include <stdio.h>
#include <stdlib.h>

int main()
{
 int i, acimadamedia = 0;
 int nota[20];
 int media = 0;
 int soma = 0;

printf("Digite as notas dos alunos: \n");

 for(i = 0 ; i < 20 ; i++){
    scanf("%d", &nota[i]);
 }


 for(i = 0 ; i < 20 ; i++){
    soma += nota[i];
 }

   media = soma / 20;

 for(i = 0 ; i < 20 ; i++){
 if(nota[i] > media){
   acimadamedia++;
}
}
   printf("A media das notas foram: %d \n", media);
   printf("Numero de alunos que tiraram acima da media: %d", acimadamedia);
}
