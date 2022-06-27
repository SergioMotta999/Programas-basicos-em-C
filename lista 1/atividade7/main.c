#include <stdio.h>
#include <stdlib.h>

int main()
{
  float fah, convert;

  printf("Digite a temperatura em Fahrenheit: \n");
  scanf("%f", &fah);

  convert = (fah - 32) * 5/9;

printf("O valor da Temperatura em Celsius eh: %.2f", convert);
    return 0;
}
