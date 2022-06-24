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

// funçao que le os dados de uma pessoa e retorna para quem chamou
Pessoa lerPessoa(){
  Pessoa p1;
  printf("Digite seu nome: ");
  fgets(p1.nome, 100, stdin);

  printf("Digite sua idade: ");
  scanf("%d", &p1.idade);
  scanf("%c");

  printf("Digite f para feminino ou m para masculino: ");
  scanf("%c", &p1.sexo);

  printf("Digite sua data de nascimento no formato dd mm aaaa : ");
  scanf("%d%d%d", &p1.nascimento.dia, &p1.nascimento.mes, &p1.nascimento.ano);

  return p1;
}

int main()
{
  Pessoa pessoa1;


  pessoa1 = lerPessoa();
  imprimirPessoa(pessoa1);

}
