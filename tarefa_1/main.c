#include <stdio.h>
#include <stdlib.h>

/*Preencha dois vetores (A e B) de tamanhos definidos pelo usuário com números inteiros no intervalo
de 0 a 100. Depois, coloque em um terceiro vetor (C) todos os números que apareceram em apenas
um dos vetores. Ou seja, o vetor C deverá ter os elementos que aparecem somente em A junto com os
elementos que aparecem somente em B. */

int main()
{
    int t, *A, *C, aux, i, j, f=1;

    A = (int *)(malloc(t * sizeof(int)));
    C = (int *)(malloc(t * sizeof(int)));

    printf("Digite o tamanho dos vetores \n ");
    scanf("\n %d", &t);
    if(t<= 100 && t>0){
          printf("Digite os valores do vetor A \n");
    for(i = 1; i<=t; i++){
        scanf("\n %d", &A[i]);
    }
          printf("Digite os valores do vetor B \n ");


        for(i = 1; i<=t; i++){
        scanf("\n %i", &aux);

         for(j=1; j<=t; j++){
            if(A[j] == aux){
                break;
            }
            else if(A[j] != aux && j==t){
                C[f] = aux;
                f++;
            }
        }

    }
    printf("Diferença entre os dois Conjuntos, O corresponde a vazio");
    for(i =1; i<=t; i++){
            printf("| %d | \n ", C[i]);
        }
    }else {
        printf("Tamanho inválido");
    }
    return 0;
}
