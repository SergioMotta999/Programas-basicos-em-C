#include <stdio.h>
#include <stdlib.h>

int main()
{
int num;
float num2;

    printf("Digite um numero inteiro e um real: \n");
    scanf("%d", &num);
    scanf("%f", &num2);
    printf("%d , %.2f", num, num2);

    return 0;
}
