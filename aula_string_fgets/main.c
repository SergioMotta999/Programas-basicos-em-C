#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palavras[20];

    printf("Escreva seu nome: ");
    fgets(palavras, 20, stdin);

    printf("\n%s", palavras);
}
