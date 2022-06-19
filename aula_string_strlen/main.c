#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Descobrindo o tamanho de uma string com a função strlenO()*/

int main(){
    int tam;
    char palavras[20] = {"Oi vamos aprender!"};
    fgets(palavras, 20, stdin);

    tam = strlen(palavras);

    printf("Tamanho: %d \n", tam);
    // printf("Tamanho: %d \n", strlen(palavras));


}
