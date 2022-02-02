#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
int main()
/* 
Escreva um programa em linguagem C que leia o número correspondente 
de um mês e apresente quantos dias tem esse mês (31, 30 ou 28).
*/
{
    system("cls");
    int m;
    printf("Digite o número do mês de 1 a 12 ");
    scanf("%i",&m);

    if ((m<1) || (m>12)){
        printf("O número digitado não faz parte de um dos 12 meses!");
    } else if (m==2) {
        printf("\nMês com 28 dias. Verifique se o ano é bissexto, se for temos 29 dias.");
    } else if ((m == 4) || (m == 6) || (m == 9) || (m == 11)){
        printf("\nMês com 30 dias.")
    } else if ((m == 1) || (m == 3) || (m == 5) || (m == 7) || (m == 8) || (m == 10) || (m == 12)) {
        print("\nMê com 31 dias.")
    }
getchar();
printf("\n\n");
system("pause");
return(0);    
}