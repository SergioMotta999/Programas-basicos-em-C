#include <stdio.h>
#include <stdlib.h>

int main()
{
 float num;
 float part;

 printf("Digite um numero: \n");
 scanf("%f", &num);

 part = num / 5;

 printf("A quinta parte do numero %.2f eh: %.2f", num, part);
    return 0;
}
