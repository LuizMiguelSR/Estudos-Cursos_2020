#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main()
/* 
Faça um algoritmo que leia 10 valores e escreva se o valor lido é 
negativo ou positivo.
*/
{
    setlocale(LC_ALL,"");
    system("cls");
    int i, n;
    for (i=0;i<10;i++){
        printf("\nDigite um número: ");
        scanf("%d",&n);
        if (n <= 0) {
            printf("O número %d é negativo\n",n);
        } else {
            printf("O número %d é positivo\n",n);
        }
        
    }
getchar();
printf("\n\n");
system("pause");
return(0);    
}