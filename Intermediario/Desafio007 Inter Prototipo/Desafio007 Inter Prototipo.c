#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int min=8,max=20,tamanhoSenha=0,u=0,z=0,i=0;
	char alfabeto[] = "abcdefghijklmnopqrstuvwxyz",alfabetoMaisculo[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ",numeros[]="0123456789",caracteresEspeciais[] = "!@#$%^&*-+=|?",senhaMuitoBraba[255];
	//printf("%c",alfabeto[]);
	srand(time(NULL));
	
	tamanhoSenha = (rand() % (max-min+1))+min;
	//tamanhoSenha = 8;
	printf("%i\n",tamanhoSenha);
	
	for(i=0;i<tamanhoSenha;i++)
	{
		min = 1, max = 4;
		u = (rand() % (max-min+1))+min;

		printf("Caso: %i ",u);
		
		switch(u)
		{
			case 1:
				//min = 0, max = 26;
				z = (rand() % 26);
				printf("Z:%i ",z);
				senhaMuitoBraba[i] = alfabeto[z];
				printf("Senha: %s\n",senhaMuitoBraba);
				break;
			case 2:
				//min = 0, max = 26;
				z = (rand() % 26);
				printf("Z:%i ",z);
				senhaMuitoBraba[i] = alfabetoMaisculo[z];
				printf("Senha: %s\n",senhaMuitoBraba);
				break;
			case 3:
				//min = 0, max = 10;
				z = (rand() % 10);
				printf("Z:%i ",z);
				senhaMuitoBraba[i] = numeros[z];
				printf("Senha: %s\n",senhaMuitoBraba);
				break;
			case 4:
				//min = 0, max = 13;
				z = (rand() % 13);
				printf("Z:%i ",z);
				senhaMuitoBraba[i] = caracteresEspeciais[z];
				printf("Senha: %s\n",senhaMuitoBraba);
				break;
		}
	}
	senhaMuitoBraba[tamanhoSenha] = '\0';
	printf("%s",senhaMuitoBraba);
	
	return 0;
}
