#include <stdio.h>
#include <stdlib.h>

int main()
{
    float grau, convert;

      printf("Digite o valor do angulo em graus: \n");
      scanf("%f", &grau);

      convert = grau * (3.14 / 180);

      printf("O valor do angulo em radianos eh: %f", convert);
    return 0;
}
