#include <stdio.h>
#include <stdlib.h>

int main()
{
   float rad, convert;

      printf("Digite o valor do angulo em radianos: \n");
      scanf("%f", &rad);

      convert = rad * (180 / 3.14);

      printf("O valor do angulo em graus eh: %f", convert);
    return 0;
}
