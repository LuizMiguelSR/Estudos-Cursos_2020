#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main()
/* 
Construa um programa em linguagem C que calcule e apresente o preço final da compra 
realizada pelo cliente em uma loja. São fornecidos os seguintes dados: o preço da 
etiqueta do produto comprado e o código correspondente da condição de pagamento 
escolhida pelo cliente. Utilize para os cálculos a tabela de condições de 
pagamento a seguir:
Código Condição de pagamento
1. À vista em dinheiro ou cheque, com 10% de desconto
2. À vista com cartão de crédito, com 5% de desconto
3. Em 2 vezes, preço normal de etiqueta sem juros
4. Em 3 vezes, preço de etiqueta com acréscimo de 10%
*/
{
    setlocale(LC_ALL,"");
    system("cls");
    int op;
    float valor, total;
    printf("Digite a opção desejada: ");
    scanf("%i", &op);
    printf("Digite o valor da compra: ");
    scanf("%f", &valor);
    if (op == 1){
        total = valor * 0.90;
        printf("\nO valor de compra é R$ %.2f", total);
    } else if (op == 2) {
        total = valor * 0.95;
        printf("\nO valor de compra é R$ %.2f", total);
    } else if (op == 3) {
        printf("\nO valor de compra é R$ %.2f", valor);
    } else if (op == 4) {
        total = valor * 1.10;
        printf("\nO valor de compra é R$ %.2f", total);
    } else {
        printf("\nNão consta a opção escolhida");
    }
getchar();
printf("\n\n");
system("pause");
return(0);    
}