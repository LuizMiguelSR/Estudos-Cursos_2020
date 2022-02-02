#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main(int argc, char *argv[])
/*Desenvolva um programa em linguagem c que classique um número 
de entrada fornecido pelo usuário entre par ou ímpar*/
{
setlocale(LC_ALL,"portuguese");
    system("cls");
    int n1;
    printf("Digite um n�mero: ");
    scanf("%i", &n1);
    if (n1%2==0)
    {
        printf("O n�mero %i � par",n1);
    }
    else
    {
        printf("O n�mero %i � �mpar",n1);
    }    
getchar();
printf("\n\n");
system("pause");
return(0);    
}