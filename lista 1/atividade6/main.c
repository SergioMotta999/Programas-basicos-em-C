#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c;
    float convert;

    printf("Digite a temperatura em celsius: \n");
    scanf("%f", &c);

    convert = (c * 9 / 5) + 32;
    printf("A temperatura em Fahrenheit eh: %f", convert);

    return 0;
}
