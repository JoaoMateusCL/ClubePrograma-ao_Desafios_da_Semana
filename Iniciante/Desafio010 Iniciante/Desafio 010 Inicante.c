#include <stdio.h>
#include <string.h>

int main()
{
	int i=0,iInvertido=0,tamanhoPalavra=0,contadorIgualdades=0;
	char palavraMuitoZika[255],palavraInvertida[255];
	
	printf("Digite uma palavra muito zika: ");
	scanf(" %s",palavraMuitoZika);
	
	//printf("\npalavra:%s tamanho da palavra: %i\n",palavraMuitoZika,strlen(palavraMuitoZika)); debug
	tamanhoPalavra = strlen(palavraMuitoZika);
	iInvertido = tamanhoPalavra-1;
	
	for(i=0;i<tamanhoPalavra;i++) //inversor
	{
		palavraInvertida[i] = palavraMuitoZika[iInvertido]; 
		iInvertido--;
	}
	
	palavraInvertida[tamanhoPalavra] = '\0';
	//printf("Palavra Invertida: %s",palavraInvertida); //debug
	
	for(i=0;i<tamanhoPalavra;i++)
	{
		if(palavraMuitoZika[i]==palavraInvertida[i])
		{
			contadorIgualdades++;
		}
	}
	//printf("\nLetrasIguais: %i",contadorIgualdades); debug
	
	if(contadorIgualdades == tamanhoPalavra) //verificando se a palavra é um palindromo
	{
		printf("\nA palavra e um palindromo!\nPalavra: %s \nPalavraInvertida: %s",palavraMuitoZika,palavraInvertida);
	}
	else
	{
		printf("\nA palavra nao e um palindromo!\nPalavra: %s \nPalavraInvertida: %s",palavraMuitoZika,palavraInvertida);
	}
	
	return 0;
}
