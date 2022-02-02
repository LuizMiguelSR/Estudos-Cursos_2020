#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main()
/* 
Faça um programa em C que leia um número maior que zero e imprima o quadrado de todos os números entre 0 e o número lido.
*/
{
    setlocale(LC_ALL,"");
    system("cls");
    int n, i=1, res;

    printf("Digite um número: ");
    scanf("%d", &n);

    for (i;i<=n;i++) {
        res = i * i;
        printf("O quadrado de %d é %d\n", i, res);
    } 
    
getchar();
printf("\n\n");
system("pause");
return(0);    
}