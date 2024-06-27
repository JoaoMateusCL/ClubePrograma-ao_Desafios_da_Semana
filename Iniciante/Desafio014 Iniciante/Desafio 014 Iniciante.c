#include <stdio.h>

void fCalculadorPosto(int o ,int e)
{
	int quantidadeLitros;
	float preco,dinheiro,litros;
	
	if(o == 1)
	{
		if(e == 1)
		{
			printf("Digite quantos litros voce quer: ");
			scanf("%i",&quantidadeLitros);
			preco = quantidadeLitros*6.50;
			printf("Os %i litros custam %.2f",quantidadeLitros,preco);
		}
		if(e == 2)
		{
			printf("Digite quantos dinheiros voce quer gastar: ");
			scanf("%f",&dinheiro);
			litros = dinheiro/6.50;
			printf("Com %.2f reais voce pode abastecer %.2f litros",dinheiro,litros);
		}
	}
	if(o == 2)
	{
		if(e == 1)
		{
			printf("Digite quantos litros voce quer: ");
			scanf("%i",&quantidadeLitros);
			preco = quantidadeLitros*4.30;
			printf("Os %i litros custam %.2f",quantidadeLitros,preco);
		}
		if(e == 2)
		{
			printf("Digite quantos dinheiros voce quer gastar: ");
			scanf("%f",&dinheiro);
			litros = dinheiro/4.30;
			printf("Com %.2f reais voce pode abastecer %.2f litros",dinheiro,litros);
		}
	}
	if(o == 3)
	{
		if(e == 1)
		{
			printf("Digite quantos litros voce quer: ");
			scanf("%i",&quantidadeLitros);
			preco = quantidadeLitros*5.00;
			printf("Os %i litros custam %.2f",quantidadeLitros,preco);
		}
		if(e == 2)
		{
			printf("Digite quantos dinheiros voce quer gastar: ");
			scanf("%f",&dinheiro);
			litros = dinheiro/5.00;
			printf("Com %.2f reais voce pode abastecer %.2f litros",dinheiro,litros);
		}
	}
}

int main()
{
	int opcao=0,escolha=0;
	do
	{
		printf("\nPosto de Gasolina: \n\n1-Gasolina 6.50/Litro\n2-Etanol   4.30/Litro\n3-Diesel   5.00/Litro\nPara sair digite -1\nDigite a opcao: ");
		scanf("%i",&opcao);
		
		switch(opcao)
		{
			case 1:
			{
				printf("\nGosalina:\n1-Por litros\n2-Dinheiro\nDigite sua escolha:");
				scanf("%i",&escolha);
				fCalculadorPosto(opcao,escolha);
				break;
			}
			case 2:
			{
				printf("\nEtanol:\n1-Por litros\n2-Dinheiro\nDigite sua escolha:");
				scanf("%i",&escolha);
				fCalculadorPosto(opcao,escolha);
				break;		
			}
			case 3:
			{
				printf("\nDiesel:\n1-Por litros\n2-Dinheiro\nDigite sua escolha:");
				scanf("%i",&escolha);
				fCalculadorPosto(opcao,escolha);
				break;
			}
			case -1:
			{
				printf("\nPrograma Finalizado!");
				break;
			}
			default:
			{
				printf("\nDigite uma opcao valida");
				continue;
			}
		}
	}while(opcao != -1);
	return 0;
}
