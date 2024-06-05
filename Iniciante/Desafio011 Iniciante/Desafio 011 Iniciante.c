#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numeros[255], i=0,u=0,opcao=0,contadorPrimos=0,tamanhoVetor=0,quatidadeDivisores=0;
	
	do
	{
		printf("\nVerificador de Numeros Primos\n\n1- Inserir Valores\n2- Verificar se os valores sao primos\n3- encerrar o programa\nopcao:");
		scanf("%i",&opcao);
		
		switch(opcao)
		{
			case 1:
			{
				printf("\nDigite um numero inteiro: ");
				scanf("%i",&numeros[i]);
				i++;
				tamanhoVetor++;
				continue;
			}
			case 2:
			{
				printf("Verificando se os numeros sao primos");
				
				for(i=0;i<tamanhoVetor;i++)
				{
					quatidadeDivisores = 0;
					for(u=1;u<=numeros[i];u++)
					{
						if(numeros[i]%u==0)
						{
							quatidadeDivisores++;	
						}
					}
					if(quatidadeDivisores == 2)
					{
						printf("\nO numero %i e primo \n",numeros[i]);	
					}
					else
					{
						printf("\nO numero %i nao e primo\n",numeros[i]);
					}	
				}
				
				continue;	
			}
			case 3:
			{
				printf("Programa Encerrado");
				break;
			}
			default:
			{
				printf("Digite um valor valido\n");
				continue;
			}	
		}
	}while(opcao != 3);
	
	return 0;
}
