#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Como criar uma struct com dados lidos do teclado

typedef struct{
   int idade;
   char sexo;
   char nome[30];
}Pessoa;


int main()
{
  Pessoa pessoa1;

  printf("Digite seu nome: ");
  fgets(pessoa1.nome, 100, stdin);

  printf("Digite sua idade: ");
  scanf("%d", &pessoa1.idade);
  scanf("%c");

  printf("Digite f para feminino ou m para masculino: ");
  scanf("%c", &pessoa1.sexo);


     printf("Nome: %s \nIdade: %d \nSexo: %c \n", pessoa1.nome, pessoa1.idade, pessoa1.sexo);

}
