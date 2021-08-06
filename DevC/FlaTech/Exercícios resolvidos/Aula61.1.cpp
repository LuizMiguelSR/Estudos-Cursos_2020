#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
int main()
/* 
Crie um programa em linguagem C que leia o código de um produto e 
imprima na tela o seu nome. Considere os seguintes códigos:
001 → Parafuso
002 → Porca
003 → Prego
Para qualquer outro código indicar o produto como “Diversos”.
*/
{
    system("cls");
    int cp;
    printf("Digite o codigo do produto");
    scanf("%i",&cp);

    if (cp == 001){
        printf("Parafuso");
    } else if (cp == 002) {
        printf("\nPorca");
    } else if (cp == 003){
        printf("\nPrego");
    } else {
        printf("\nDiversos");
    }
getchar();
printf("\n\n");
system("pause");
return(0);    
}