#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
int main()
/* 
O cardápio de uma lanchonete é o seguinte:
Especificação Código Preço
Cachorro quente 100 1,20
Bauru simples 101 1,30
Bauru com ovo 102 1,50
Hambúrger 103 1,20
Cheeseburguer 104 1,30
Refrigerante 105 1,00
Escreva um programa em linguagem C que leia o código do item pedido, 
a quantidade e calcule o valor a ser pago por aquele lanche. 
Considere que a cada execução somente será calculado um item.
*/
{
    system("cls");
    int cp, qtde;
    float valor;
    printf("Digite o codigo do produto e quantidade: ");
    scanf("%i %i",&cp,&qtde);

    if (cp == 100){
        valor = 1.20 * qtde;
    } else if (cp == 101) {
       valor = 1.30 * qtde;
    } else if (cp == 102){
        valor = 1.50 * qtde;
    } else if (cp == 103) {
        valor = 1.20 * qtde;
    } else if (cp == 104) {
        valor = 1.30 * qtde;
    } else if (cp == 105) {
        valor = 1.00 * qtde;
    } else {
        printf("Código incorreto");
    }
    printf("O valor da compra foi R$ %.2f",valor);
getchar();
printf("\n\n");
system("pause");
return(0);    
}