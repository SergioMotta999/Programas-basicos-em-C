#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1, num2, num3;
   int soma;

   printf("Digite o primeiro valor: \n");
   scanf("%d", &num1);

   printf("Digite o segundo valor: \n");
   scanf("%d", &num2);

   printf("Digite o terceiro valor: \n");
   scanf("%d", &num3);

   soma = num1 + num2 + num3;

   printf("O valor da soma e: %d \n", soma);

    return 0;
}
