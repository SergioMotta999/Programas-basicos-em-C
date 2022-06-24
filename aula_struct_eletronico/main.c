#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Como construir o tipo eletronico com typedef struct

typedef struct{
  char tipo[100];
  char marca[30];
  char modelo[25];
  char energia;
  char descricao[500];
  int quantidade;
  int codigo;
}Eletronico;

void imprimirEletronicos(Eletronico e){
    printf("\n\tTipo: %s\n", e.tipo);
    printf("\tMarca: %s\n", e.marca);
    printf("\tModelo: %s\n",  e.modelo);
    printf("\tEnergia: %c\t Quantidade: %d \n", e.quantidade);
    printf("\tDescricao: %s\n",  e.descricao);
    }

// funçao que le os dados de um eletronico e retorna para quem chamou
Eletronico lerEletronico(){
  Eletronico e;

  printf("\nDigite o tipo: ");
  fgets(e.tipo, 100, stdin);

  printf("Digite a marca: ");
  fgets(e.marca, 30, stdin);

  printf("Digite o modelo: ");
  fgets(e.modelo, 25, stdin);

  printf("\nDigite a eficiencia de energia: ");
  scanf("%c", &e.energia);
  scanf("%c");

  printf("\nDigite a descricao: ");
  fgets(e.descricao, 500, stdin);

  printf("Quantidade e codigo: ");
  scanf("%d%d", &e.quantidade, &e.codigo);


  return e;
}

int main()
{
  Eletronico ele;

  ele = lerEletronico();
  imprimirEletronicos(ele);

}

