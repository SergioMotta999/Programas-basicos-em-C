#include <stdio.h>
int main()
{
    int i, kaesimo;
    char caractere;
    char palavras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

printf("Digite a palavra: ");
fgets(palavras, 100, stdin);

printf("Quantidade de casas que ira pular: ");
scanf("%d", &kaesimo);

for(i = 0 ; palavras[i] != '\0'; i++){
    caractere = palavras[i];

    if(caractere >= 'A' && caractere <= 'Z'){
        caractere = caractere + kaesimo;

        if(caractere > 'Z'){
            caractere = caractere - 'Z' + 'A'-1;
        }   palavras[i] = caractere;
    }
}

printf("\n Mensagem codificada: %s \n", palavras);
return 0;
}

