#include <stdio.h>

int main()
{
	int i=0,x=0,entrada=0,tamanhoNumerosI=0,tamanhoZeros=0,tamanhoNumeros=0,numerosI[255],zeros[255],numeros[255];
	
	do
	{
		printf("Digite um número inteiro: (-1 para sair): ");
		scanf("%i",&entrada);
		if(entrada != -1)
		{
			numerosI[i]=entrada;
		}
		else
		{
			break;
		}
		i++;
		tamanhoNumerosI++;
	}while(entrada != -1);
	
	for(i=0;i<tamanhoNumerosI;i++)
	{
		if(numerosI[i]==0)
		{
			zeros[tamanhoZeros]=numerosI[i];
			tamanhoZeros++;
		}
		else
		{
			numeros[tamanhoNumeros]=numerosI[i];
			tamanhoNumeros++;
		}
	}

	for(i=0;i<tamanhoNumeros;i++)
	{
		numerosI[i]=numeros[i];
	}
	
	for(i=tamanhoNumeros;i<tamanhoZeros+tamanhoNumeros;i++)
	{
		numerosI[i]=zeros[x];
		x++;
	}
	
	printf("Vetor organizado: ");
	for(i=0;i<tamanhoNumerosI;i++)
	{
		printf("%i, ",numerosI[i]);
	}
	
	return 0;
} 
