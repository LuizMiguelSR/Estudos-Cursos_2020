#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main()
/* 
Faça um algoritmo que lê um valor N inteiro e positivo e que calcula e escreve o fatorial de N (N!). N! = 1 x 2 x 3 x 4 x ... x N
*/
{
    setlocale(LC_ALL,"");
    system("cls");
    int v, f, n;
    printf("Digite um número N para ver seu fatorial: ");
    scanf("%i", &v);

    f = 1;
    n = v;

    while (n>0)
    {
        f = f * n;
        n--;
    }
    
    printf("\nO fatorial de %i é: %i", v, f);
    
getchar();
printf("\n\n");
system("pause");
return(0);    
}