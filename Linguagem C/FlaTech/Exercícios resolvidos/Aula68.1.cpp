#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main()
/* 
Construa um programa em linguagem C que calcule e apresente o pre�o final da compra 
realizada pelo cliente em uma loja. S�o fornecidos os seguintes dados: o pre�o da 
etiqueta do produto comprado e o c�digo correspondente da condi��o de pagamento 
escolhida pelo cliente. Utilize para os c�lculos a tabela de condi��es de 
pagamento a seguir:
C�digo Condi��o de pagamento
1. � vista em dinheiro ou cheque, com 10% de desconto
2. � vista com cart�o de cr�dito, com 5% de desconto
3. Em 2 vezes, pre�o normal de etiqueta sem juros
4. Em 3 vezes, pre�o de etiqueta com acr�scimo de 10%
*/
{
    setlocale(LC_ALL,"");
    system("cls");
    int op;
    float valor, total;
    printf("Digite a op��o desejada: ");
    scanf("%i", &op);
    printf("Digite o valor da compra: ");
    scanf("%f", &valor);
    if (op == 1){
        total = valor * 0.90;
        printf("\nO valor de compra � R$ %.2f", total);
    } else if (op == 2) {
        total = valor * 0.95;
        printf("\nO valor de compra � R$ %.2f", total);
    } else if (op == 3) {
        printf("\nO valor de compra � R$ %.2f", valor);
    } else if (op == 4) {
        total = valor * 1.10;
        printf("\nO valor de compra � R$ %.2f", total);
    } else {
        printf("\nN�o consta a op��o escolhida");
    }
getchar();
printf("\n\n");
system("pause");
return(0);    
}