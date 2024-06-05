#include <stdio.h>

int main()
{
	float nota1=0.0,nota2=0.0,mediaBraba=0.0;
	int i=0;
	for(i=1;i<=10;i++)
	{
		printf("Digite as notas do %i aluno: \n",i,i);
		scanf("%f%f",&nota1,&nota2);
		mediaBraba = ((nota1*4)+(nota2*6))/10;
		
		if(mediaBraba<5)
		{
			printf("INSUFICIENTE com a media final de %.2f o Aluno %i esta reprovado \n",mediaBraba,i);
		}
		else if(mediaBraba >=5 && mediaBraba < 7)
		{
			printf("REGULAR com a media final de %.2f o Aluno %i esta aprovado \n",mediaBraba,i);
		}
		else if(mediaBraba >=7 && mediaBraba < 9)
		{
			printf("BOM com a media final de %.2f o Aluno %i esta aprovado \n",mediaBraba,i);
		}
		else if(mediaBraba >=9 && mediaBraba <= 10)
		{
			printf("EXCELENTE com a media final de %.2f o Aluno %i esta aprovado \n",mediaBraba,i);
		}
	}
	return 0;
}
