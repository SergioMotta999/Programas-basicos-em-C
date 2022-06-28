#include <stdio.h>
#include <stdlib.h>

int main()
{
  float c, convert;

    printf("Digite a temperatura em Celsius: \n");
    scanf("%f", &c);

    convert = c + 273.15;
    printf("O valor da temperatura em Celsius eh: %.2f", convert);

    return 0;
}
