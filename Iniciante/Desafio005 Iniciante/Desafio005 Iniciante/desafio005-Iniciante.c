#include <stdio.h>

int main()
{
    int entrada,restos[6],quantidadesCedulas[6];

    printf("Digite algum numero inteiro: \n");
    scanf("%i",&entrada);
    
    quantidadesCedulas[0] = entrada/100;
    restos[0] = entrada%100;

    quantidadesCedulas[1] = restos[0]/50;
    restos[1] = restos[0]%50;

    quantidadesCedulas[2] = restos[1]/20;
    restos[2] = restos[1]%20;

    quantidadesCedulas[3] = restos[2]/10;
    restos[3] = restos[2]%10;

    quantidadesCedulas[4] = restos[3]/5;
    restos[4] = restos[3]%5;

    quantidadesCedulas[5] = restos[4]/2;
    restos[5] = restos[4]%2;

    quantidadesCedulas[6] = restos[5]/1;
    restos[6] = restos[5]%1;

    printf("%i nota(s) de 100$\n%i nota(s) de 50$\n%i nota(s) de 20$\n%i nota(s) de 10$\n%i nota(s) de 5$\n%i nota(s) de 2$\n%i nota(s) de 1$\n",quantidadesCedulas[0],quantidadesCedulas[1],quantidadesCedulas[2],quantidadesCedulas[3],quantidadesCedulas[4],quantidadesCedulas[5],quantidadesCedulas[6]);

    return 0;
}