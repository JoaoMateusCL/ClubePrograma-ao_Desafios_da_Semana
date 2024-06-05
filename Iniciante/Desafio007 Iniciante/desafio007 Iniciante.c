#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int opcao=0,i=0,min=0,max=0,qtdeDados=0,rolada=0;
	srand(time(NULL));
	
	do
	{
		printf("\nMenu:\n\n1-Lancar uma moeda\n2-Dado de 6 faces\n3-Dado de 8 faces\n4-Dado de 12 faces\n5-Dado de 20 faces\n6-Finalizar o programa\n\nDigite uma opcao: ");
		scanf("%i",&opcao);
	
		printf("Quantos dados voce quer sortear: ");
		scanf("%i",&qtdeDados);
		
		switch(opcao)
		{
			case 1:
				min = 1, max =2;
				for(i=0;i<qtdeDados;i++)
				{
					rolada = (rand() % max-min+1)+min;
					if(rolada == 1)
					{
						printf("%i coroa\n",rolada); 	
					}
					else if(rolada == 2)
					{
						printf("%i cara\n",rolada);	
					}	
				}
				break;
				
			case 2:
				min =1,max=6;
				for(i=0;i<qtdeDados;i++)
				{
					rolada = (rand() % max-min+1)+min;
					printf("D6: %i\n",rolada);
				}
				break;
				
			case 3:
				min =1,max=8;
				for(i=0;i<qtdeDados;i++)
				{
					rolada = (rand() % max-min+1)+min;
					printf("D8: %i\n",rolada);
				}
				break;
				
			case 4:
				min =1,max=12;
				for(i=0;i<qtdeDados;i++)
				{
					rolada = (rand() % max-min+1)+min;
					printf("D12: %i\n",rolada);
				}
				break;
				
			case 5:
				min =1,max=20;
				for(i=0;i<qtdeDados;i++)
				{
					rolada = (rand() % max-min+1)+min;
					printf("D20: %i\n",rolada);
				}
				break;
				
			case 6:
				printf("Programa Finalizado");
				break;
				
			default:
				printf("digite uma opcao valida");
				break;
		}
		
	}while(opcao != 6);

	return 0;
}
