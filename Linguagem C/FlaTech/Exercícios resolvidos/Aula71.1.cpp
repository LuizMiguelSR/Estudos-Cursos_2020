#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main()
/* 
Fa�a um algoritmo que leia 10 valores e escreva se o valor lido � 
negativo ou positivo.
*/
{
    setlocale(LC_ALL,"");
    system("cls");
    int i, n;
    for (i=0;i<10;i++){
        printf("\nDigite um n�mero: ");
        scanf("%d",&n);
        if (n <= 0) {
            printf("O n�mero %d � negativo\n",n);
        } else {
            printf("O n�mero %d � positivo\n",n);
        }
        
    }
getchar();
printf("\n\n");
system("pause");
return(0);    
}