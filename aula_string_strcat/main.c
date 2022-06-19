#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
 char palavras1[20] = {"Oi."};
 char palavras2[20] = {" Bom dia"};

 strcat(palavras1, palavras2);

 printf("\n\t%s \n", palavras1);

}
