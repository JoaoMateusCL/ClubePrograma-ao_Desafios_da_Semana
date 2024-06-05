#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    char palavra[30], vogais[] = {"aeiou"};
    int tamanhoPalavra, qtdeVogais,i;
    
    printf("Digite uma palavra qualquer: ");
    scanf("%s",palavra);
    
    tamanhoPalavra = strlen(palavra);
    
    for(i = 0;i < tamanhoPalavra;i++)
    {
        if((palavra[i]==vogais[0])||(palavra[i]==vogais[1])||(palavra[i]==vogais[2])||(palavra[i]==vogais[3])||(palavra[i]==vogais[4]))
        {
            qtdeVogais++;
        }
    }
    printf("A quantidade de vogais foi %i",qtdeVogais);
}