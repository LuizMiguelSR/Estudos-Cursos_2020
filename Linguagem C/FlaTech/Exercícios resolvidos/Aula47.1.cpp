#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main(int argc, char *argv[])
/*Um comerciante comprou um produto e quer vend�-lo com um lucro 
de 45% se o valor da compra for menor que R$ 20,00; caso contr�rio, 
o lucro ser� de 30%. Escreva um programa em linguagem C que leia o 
valor do produto e imprima o valor de venda para o produto.*/
{
setlocale(LC_ALL,"portuguese");
    system("cls");
    float p, l;
    printf("Digite a idade das pessoas 1 e 2: \n");
    scanf("%f",&p);
    if (p>20) {
        l=p*(1+0.30);
        printf("O pre�o de venda do produto ser� de R$%.2f",l);
    }
    else {
        l=p*(1+0.45);
        printf("O pre�o de venda do produto ser� de R$%.2f",l);
    }
getchar();
printf("\n\n");
system("pause");
return(0);    
}