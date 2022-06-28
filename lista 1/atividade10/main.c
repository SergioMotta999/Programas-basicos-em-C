#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km, convert;

    printf("Digite a velocidade em km/h: \n");
    scanf("%f", &km);

    convert = km / 3.6;

    printf("A velocidade em m/s eh: %.2f", convert);


    return 0;
}
