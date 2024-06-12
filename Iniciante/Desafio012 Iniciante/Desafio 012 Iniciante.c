#include <stdio.h>
#include <string.h>

int main()
{
	int tamanhoPalavra1=0,tamanhoPalavra2=0,i=0,u=0,soma=0,limite=0,diferenca=0;
	char palavra1[255],palavra2[255],palavraMesclada[255];
	
	printf("Digite uma palavra: ");
	scanf("%s",palavra1);
	
	printf("Digite outra palavra: ");
	scanf("%s",palavra2);
	
	tamanhoPalavra1 = strlen(palavra1);
	tamanhoPalavra2 = strlen(palavra2);
	soma = tamanhoPalavra1 + tamanhoPalavra2;
	
	if(tamanhoPalavra1 == tamanhoPalavra2)
	{
		for(i=0;i<soma;i++)
		{
			if(i%2==0)
			{
				palavraMesclada[i] = palavra1[u];
			}
			else
			{
				palavraMesclada[i] = palavra2[u];
				u++;
			}
		}
		palavraMesclada[soma] = '\0';
		printf("\nPalavra Mesclada: %s\n",palavraMesclada);
	}
	else
	{
		if(tamanhoPalavra1 > tamanhoPalavra2)
		{			
			limite = soma-(tamanhoPalavra1-tamanhoPalavra2);
			diferenca = tamanhoPalavra1-tamanhoPalavra2;
			for(i=0;i<limite;i++)
			{
				if(i%2==0)
				{
					palavraMesclada[i] = palavra1[u];
				}
				else
				{
					palavraMesclada[i] = palavra2[u];
					u++;
				}
			}
			strncat(palavraMesclada, palavra1 + tamanhoPalavra1 - diferenca, diferenca);
			palavraMesclada[soma] = '\0';
			printf("\nPalavra Mesclada: %s\n",palavraMesclada);
		}
		else
		{
			limite = soma-(tamanhoPalavra2-tamanhoPalavra1);
			diferenca = tamanhoPalavra2-tamanhoPalavra1;
			for(i=0;i<limite;i++)
			{
				if(i%2==0)
				{
					palavraMesclada[i] = palavra1[u];
				}
				else
				{
					palavraMesclada[i] = palavra2[u];
					u++;
				}
			}
			strncat(palavraMesclada, palavra2 + tamanhoPalavra2 - diferenca, diferenca);
			palavraMesclada[soma] = '\0';
			printf("\nPalavra Mesclada: %s\n",palavraMesclada);
		}
	}
	
	return 0;
}
