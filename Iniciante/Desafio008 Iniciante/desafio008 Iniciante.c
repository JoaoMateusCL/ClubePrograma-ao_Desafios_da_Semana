#include <stdio.h>

int main()
{
	float valorProduto=0.0,valorFinal=0.0;
	int opcao=0;
	
	printf("Digite o valor do prodto: ");
	scanf("%f",&valorProduto);
	
	printf("\n1 - A Vista em Dinheiro ou Pix, recebe 15%% de desconto.\n2 - A Vista no cartao de credito, recebe 10%% de desconto.\n3 - Parcelado no cartao em duas vezes, preco normal do produto sem juros.\n4 - Parcelado no cartao em tres vezes ou mais, preco normal do produto mais juros de 10%%.\n\nEscolha uma opcao: ");
	scanf("%i",&opcao);
	
	switch(opcao)
	{
		case 1:
			valorFinal = valorProduto - (valorProduto*0.15);
			printf("O valor a ser pago e %.2f",valorFinal);
			break;
		case 2:
			valorFinal = valorProduto - (valorProduto*0.10);
			printf("O valor a ser pago e %.2f",valorFinal);
			break;
		case 3:
			valorFinal = valorProduto;
			printf("O valor a ser pago e %.2f",valorFinal);
			break;
		case 4:
			valorFinal = valorProduto + (valorProduto*0.10);
			printf("O valor a ser pago e %.2f",valorFinal);
			break;
		default:
			printf("Digite uma opcao valida");
			break;
	}
	return 0;
}
