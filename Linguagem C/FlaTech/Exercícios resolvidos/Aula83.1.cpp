#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main()
/* 
Uma loja tem 50 clientes cadastrados e deseja mandar uma correspondência  a cada um deles anunciando um bônus especial. Escreva um algoritmo que leia o valor das compras do cliente no ano passado e calcule um bônus de 10% se o valor das compras for menor que 500.000 e de 15 %, caso contrário. Imprima os valores calculados.
*/
{
    setlocale(LC_ALL,"");
    system("cls");
    float i, n;

    for (i=1;i<5+1;i++){
        printf("Digite o valor da compra: ");
        scanf("%f", &n);
        if (n>500000) {
            n = n * 1.15;
        } else {
            n = n * 1.10;
        }
        printf("Valor da compra do %.0fº cliente: R$ %.2f\n", i, n);
    }
getchar();
printf("\n\n");
system("pause");
return(0);    
}