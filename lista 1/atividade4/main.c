#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;
    float quad;

    printf("Digite um numero: \n");
    scanf("%f", &num);

    quad = num * num;

    printf("O quadrado do numero %.2f eh: %.2f", num, quad);

    return 0;
}
