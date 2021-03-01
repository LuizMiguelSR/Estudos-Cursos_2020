#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main()
/* 
Escreva um programa em C que leia vários números e imprima:
	- 0(zero) se o número não for múltiplo de 2,3, 5 nem 7;
	- 1(um) se o número for múltiplo de 2 ou 3;
	- 2(dois) se o número for múltiplo de 5 e 7. 
	- Sair do programa quando for digitado o valor -1
*/
{
    setlocale(LC_ALL,"");
    system("cls");
    int n;

    do {
        printf("Digite um número: ");
        scanf("%d", &n);
        if (n%2!=0 && n%3!=0 && n%5!=0 && n%7!=0) {
            printf("0\n");
        } else if (n%2==0 || n%3==0) {
            printf("1\n");
        } else if (n%5==0 || n%7==0) {
            printf("2\n");
        } else {
            printf("ENCERRANDO...\n");
        }
    } while (n != -1);
    
getchar();
printf("\n\n");
system("pause");
return(0);    
}