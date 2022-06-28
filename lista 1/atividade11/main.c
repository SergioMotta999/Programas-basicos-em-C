#include <stdio.h>
#include <stdlib.h>

int main()
{
 float ms, convert;

    printf("Digite a velocidade em km/h: \n");
    scanf("%f", &ms);

    convert = ms * 3.6;

    printf("A velocidade em Km/h eh: %.2f", convert);

    return 0;
}
