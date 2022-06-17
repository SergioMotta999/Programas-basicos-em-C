#include <stdio.h>
#include <stdlib.h>

/* Identificar o fim de uma string*/

int main()
{
    int i;
    char palavras[20] = {"Oi vamos aprender!"};
    printf("Digite seu nome: ");
    fgets(palavras, 20, stdin);


i = 0;
while(palavras[i] != '\0'){
    printf("%d = %c\n", i, palavras[i]); // %d mostra o valor do caractere em decimal, na tabela ASCII
    i++;
}
}
