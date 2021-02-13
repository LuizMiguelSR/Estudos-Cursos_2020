#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main()
/* 
Escreva um algoritmo que leia um número inteiro e determine se ele é ou não um número primo (um número primo é aquele que só é divisível por 1 e por ele próprio).
*/
{
    setlocale(LC_ALL,"");
    system("cls");
    int n, i=1, r=0;
    printf("Digite número: ");
    scanf("%i", &n);

    while (i<=n) {
        if (i%n==0) {
            r=r+1;
        } else {

        }
        i++;
    }
    if (r==2) {
        printf("\nO número é primo!");
    } else {
        printf("\nO número não é primo!");
    }
    
getchar();
printf("\n\n");
system("pause");
return(0);    
}