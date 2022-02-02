#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main()
/* 
Faça um algoritmo que imprima todos os números inteiros de 1 a N, 
onde N é um número fornecido pelo usuário.
*/
{
    setlocale(LC_ALL,"");
    system("cls");
    int i, n;
    printf("\nDigite um número: ");
    scanf("%d",&n);
    for (i=1;i<n+1;i++){
        printf("\nNúmero = %d", i);
    }
getchar();
printf("\n\n");
system("pause");
return(0);    
}