#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int escolha, parar;
    float valor1, valor2,valor3,resultado, resultado2,delta;

    while(parar != 0)
    {
        printf("Calculadora Muito Braba:\n[1]Adição:\n[2]Subtração:\n[3]Multiplicação:\n[4]Divisão:\n[5]Exponenciação:\n[6]Raiz Quadrada:\n[7]Equação do Segundo Grau:\nEscolha uma operação: ");
        scanf("%i",&escolha);

        if((escolha >= 1)&&(escolha <=7))
        {
            if(escolha == 1)
            {
                printf("\nDigite dois valores para realizar a soma:\n");
                scanf("%f%f",&valor1,&valor2);
                resultado = valor1+valor2;
                printf("%.2f + %.2f = %.2f",valor1,valor2,resultado);
            }
            else if(escolha == 2)
            {
                printf("\nDigite dois valores para realizar a subtração:\n");
                scanf("%f%f",&valor1,&valor2);
                resultado = valor1-valor2;
                printf("%.2f - %.2f = %.2f",valor1,valor2,resultado);
            }
            else if(escolha == 3)
            {
                printf("\nDigite dois valores para realizar a multiplicação:\n");
                scanf("%f%f",&valor1,&valor2);
                resultado = valor1*valor2;
                printf("%.2f * %.2f = %.2f",valor1,valor2,resultado);
            }
            else if(escolha == 4)
            {
                printf("\nDigite dois valores para realizar a divisão:\n");
                scanf("%f%f",&valor1,&valor2);
                resultado = valor1/valor2;
                printf("%.2f / %.2f = %.2f",valor1,valor2,resultado);
            }
            else if(escolha == 5)
            {
                printf("\nDigite dois valores para realizar a potenciação:\n");
                scanf("%f%f",&valor1,&valor2);
                resultado = pow(valor1,valor2);
                printf("%.2f ^ %.2f = %.2f",valor1,valor2,resultado);
            }
            else if(escolha == 6)
            {
                printf("\nDigite um valor para realizar a sua raiz quadrada:\n");
                scanf("%f",&valor1);
                resultado = sqrt(valor1);
                printf("Raiz Quadrada de:%.2f = %.2f",valor1,resultado);
            }
            else if(escolha == 7)
            {
                printf("\nDigite os valores a, b e c de uma equação do segundo grau:\n");
                scanf("%f%f%f",&valor1,&valor2,&valor3);

                delta = ((valor2*valor2)-4*valor1*valor3);
                resultado = ((-valor2 + sqrt(delta))/(2*valor1));
                resultado2 = ((-valor2 - sqrt(delta))/(2*valor1));

                printf("Equação:%.2fx² + %.2fx + %.2f = 0\nDelta = %.2f \nRaizes: X1 = %.2f e X2 = %.2f\n",valor1,valor2,valor3,delta,resultado,resultado2);
            }
        }
        else
        {
            printf("Digite um valor valido");
        }
        printf("\nVocê quer parar o programa ? \nse sim digite 0 se quiser continuar usando a calculadora digite 1:\n");
        scanf("%i",&parar);
    }
    
    printf("Programa Finalizado");
    return 0;
}