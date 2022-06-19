#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Como comparar duas strings com a função strcamp()
   0 -> as strings são exatamentes iguais
   1 -> a str1 for menor que a str2
  -1 -> a str1 for maior que a srt2
*/

int main()
{
  char palavras1[20] = {"bola"};
  char palavras2[20] = {"abacate"};

    printf("\n\n Resultado: %d \n\n", strcmp(palavras1, palavras2));

}
