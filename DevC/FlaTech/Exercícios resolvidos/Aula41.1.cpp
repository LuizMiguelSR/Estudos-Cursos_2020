#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main(int argc, char *argv[])
/*Elabore um programa em linguagem c que leia um número e diga se ele é positvo ou negativo*/
{
setlocale(LC_ALL,"portuguese");
    int n;
    printf("Informe um número: ");
    scanf("%i",&n);
    if (n>0) 
    { printf("\nO número é positivo!"); }
    else if (n<0)
    { printf("\nO número é negativo"); }
    else
    {
        printf("\nO número é 0 ou inválido");
    }    
getchar();
printf("\n\n");
system("pause");
return(0);    
}