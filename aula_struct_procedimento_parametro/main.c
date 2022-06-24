#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Como criar um procedimento que recebe uma struct como parâmetro

typedef struct{
int dia, mes, ano;
}Nascimento;

typedef struct{
   Nascimento nascimento;
   int idade;
   char sexo;
   char nome[30];
}Pessoa;

void imprimirPessoa(Pessoa p){
    printf("\tNome: %s\n", p.nome);
    printf("\tIdade: %d\n", p.idade);
    printf("\tSexo: %c\n",  p.sexo);
    printf("\t Data de nasc.: %d/%d/%d\n", p.nascimento.dia, p.nascimento.mes, p.nascimento.ano);
    }

int main()
{
  Pessoa pessoa1;
  Nascimento nascimento;

  printf("%d \n", sizeof(pessoa1));

  printf("Digite seu nome: ");
  fgets(pessoa1.nome, 100, stdin);

  printf("Digite sua idade: ");
  scanf("%d", &pessoa1.idade);
  scanf("%c");

  printf("Digite f para feminino ou m para masculino: ");
  scanf("%c", &pessoa1.sexo);

  printf("Digite sua data de nascimento no formato dd mm aaaa : ");
  scanf("%d%d%d", &pessoa1.nascimento.dia, &pessoa1.nascimento.mes, &pessoa1.nascimento.ano);

  imprimirPessoa(pessoa1);

}
