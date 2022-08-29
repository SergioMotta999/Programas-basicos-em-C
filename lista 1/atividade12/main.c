#include <stdio.h>
#include <stdlib.h>

int main()
{
 float m, convert;

 printf("Digite a distancia em milhas: \n");
 scanf("%f", &m);

 convert = 1.61 * m;

 printf("A distancia em quilometros eh: %.2f", convert);
    return 0;
}
