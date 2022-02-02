#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main(int argc, char *argv[])
{
setlocale(LC_ALL,"portuguese");
   int paes, broas;
   float total, conta;
   printf("Digite a quantidade de pães vendidos: ");
   scanf("%i", &paes);
   printf("Digite a quantidade de broas vendidas: ");
   scanf("%i", &broas);
   total=(paes*0.12)+(broas*1.50);
   conta=total*0.10;
   printf("A soma de pães e broas vendidas equivale a R$ %.2f\n", total);
   printf("A quantia que deve ir para conta é de R$ %.2f\n", conta);
getchar();
printf("\n\n");
system("pause");
return(0);    
}
