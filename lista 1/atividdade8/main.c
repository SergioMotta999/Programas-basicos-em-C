#include <stdio.h>
#include <stdlib.h>

int main()
{
    float k, convert;

    printf("Digite a temperatura em Kelvin: \n");
    scanf("%f", &k);

    convert = k - 273.15;
    printf("O valor da temperatura em Celsius eh: %.2f", convert);

    return 0;
}
