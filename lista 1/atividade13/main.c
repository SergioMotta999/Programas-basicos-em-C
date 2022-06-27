#include <stdio.h>
#include <stdlib.h>

int main()
{
 float k, convert;

 printf("Digite a distancia em quilometros: \n");
 scanf("%f", &k);

 convert = k / 1.61;

 printf("A distancia em milhas eh: %.2f", convert);
    return 0;
}
