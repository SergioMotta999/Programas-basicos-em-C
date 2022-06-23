#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Posso ter struct de struct

typedef struct{
int dia, mes, ano;
}Nascimento;

typedef struct{
   Nascimento nascimento;
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

  printf("Digite sua data de nascimento no formato dd mm aaaa : ");
  scanf("%d%d%d", &pessoa1.nascimento.dia, &pessoa1.nascimento.mes, &pessoa1.nascimento.ano);



    printf("Nome: %s \nIdade: %d \nSexo: %c \n", pessoa1.nome, pessoa1.idade, pessoa1.sexo);
    printf("Data de nascimento: %d/%d/%d \n", pessoa1.nascimento.dia, pessoa1.nascimento.mes, pessoa1.nascimento.ano);

}
