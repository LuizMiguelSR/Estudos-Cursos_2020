#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main()
/* 
Crie um programa em C que leia números do teclado e escreva o valor da soma de todos os números digitados, até que seja digitado um número negativo.
*/
{
    setlocale(LC_ALL,"");
    system("cls");
    int n, som=0;

    do {
        printf("Digite um número: ");
        scanf("%d", &n);
        som = som + n;
        printf("Soma = %d", som);
    } while (n != -1);
    
getchar();
printf("\n\n");
system("pause");
return(0);    
}