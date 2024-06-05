#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float notas[255],porcentagemFaltas[255],totalAulas,faltas[255],porcentagemPresenca[255],porcentagemReprovadosFalta,porcentagemReprovadosNota,qtdeReprovadosFalta=0,qtdeReprovadosNota=0,soma,media,menor,maior;
	int i=0,tamanhoVetor,opcao;
	char conceitos[255][4];
	
	printf("Digite a quantidade de dias de aulas: ");
	scanf("%i",&totalAulas);
	
	do
	{
		i++;
		printf("Digite a nota final e a quantidade de faltas respectivamente do %iº aluno:(Digite -1 para acabar com a leitura)\n",i);
		scanf("%f%i",&notas[i],&faltas[i]);
		
		if(notas[i] == -1)
		{
			tamanhoVetor = i-1;
			break;
		}
		else if((notas[i] < 0 || notas[i] > 10)||faltas[i]>totalAulas)
		{
			printf("\ndigite um valor valido!!\n");
			i--;
			continue;
		}
		porcentagemFaltas[i] = (faltas[i]/totalAulas)*100;
		porcentagemPresenca[i] = 100 - porcentagemFaltas[i];
		
		if (porcentagemPresenca[i] < 75)
		{
			strcpy(conceitos[i], "SFR");
			qtdeReprovadosFalta++;
		}
		else if(notas[i] >= 0 && notas[i] < 5)
		{
			strcpy(conceitos[i], "INS");
			qtdeReprovadosNota++;
		}
		else if(notas[i] >= 5 && notas[i] < 7)
		{
			strcpy(conceitos[i],"REG");	
		}
		else if(notas[i] >= 7 && notas[i] < 9)
		{
			strcpy(conceitos[i],"BOM");	
		}
		else if(notas[i] >= 9 && notas[i] <= 10)
		{
			strcpy(conceitos[i],"EXC");	
		}
		
	}while(notas[i] != -1);
	
	for (i = 1; i <= tamanhoVetor; i++) 
	{
    	if (strcmp(conceitos[i], "SFR") == 0 || strcmp(conceitos[i], "INS") == 0) 
		{
        	printf("\n%iºAluno:REPROVADO\nNota Final:%.2f Porcentagem de Presença:%.2f porcento Conceito:%s\n", i, notas[i], porcentagemPresenca[i], conceitos[i]);
    	}
    	else
    	{
    		printf("\n%iºAluno:APROVADO\nNota Final:%.2f Porcentagem de Presença:%.2f porcento Conceito:%s\n", i, notas[i], porcentagemPresenca[i], conceitos[i]);
		}
	}
	do
	{
		printf("\n\nMENU INTERATIVO VERY ZIKA:\n\n1- Imprimir o total de alunos lidos;\n2- Imprimir a maior nota da turma;\n3- Imprimir a menor nota da turma;\n4- Imprimir a média das notas da turma;\n5- Imprimir a porcentagem de alunos reprovados por falta;\n6- Imprimir a porcentagem de alunos reprovados por média;\n7- Encerrar programa.\nDigite uma das opções:");
		scanf("%i",&opcao);
		
		switch (opcao)
		{
			case 1:
				printf("Total de alunos lidos: %i",tamanhoVetor);
				continue;
			case 2:
				maior = notas[1];
				for(i=1;i<=tamanhoVetor;i++)
				{
					if(notas[i] > maior)
					{
						maior = notas[i];
					}
				}
				printf("A maior nota da turma:%.2f",maior);
				continue;
			case 3:
				menor = notas[1];
				for(i=1;i<=tamanhoVetor;i++)
				{
					if(notas[i] < menor)
					{
						menor = notas[i];
					}
				}
				printf("A menor nota da turma:%.2f",menor);
				continue;
			case 4:
				for(i=1;i<=tamanhoVetor;i++)
				{
					soma+=notas[i];
				}
				media=soma/tamanhoVetor;
				printf("A nota media da turma:%.2f",media);
				continue;
			case 5:
				porcentagemReprovadosFalta = (qtdeReprovadosFalta/tamanhoVetor)*100;
				printf("Porcentagem de alunos reprovados por falta: %.2f\n",porcentagemReprovadosFalta);
				continue;
			case 6:
				porcentagemReprovadosNota = (qtdeReprovadosNota/tamanhoVetor)*100;
				printf("Porcentagem de alunos reprovados por media: %.2f\n",porcentagemReprovadosNota);
				continue;
			case 7:
				printf("Programa Encerrado");
				break;
		}
	}while(opcao != 7);
	
	return 0;
}
