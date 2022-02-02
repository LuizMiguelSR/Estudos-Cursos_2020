#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
/*Exercício 27: Elabore um algoritmo que receba a quantidade 
de dinheiro em reais que uma pessoa que vai viajar possui. Essa 
pessoa vai passar por vários países e precisa converter seu dinheiro 
em dólares, marco alemão e libra esterlina. Sabe-se que cotação do 
dólar é de R$ 3,17, do euro é de R$ 3,47 e da libra é de R$ 4,74. 
O algoritmo deve fazer a conversão e mostra-las. */
int main(int argc, char *argv[])
{
setlocale(LC_ALL,"portuguese");
   float dol=3.17, eur=3.47, rea, lib=4.74;
   printf("Digite a quantidade de dinheiro: ");
   scanf("%f", &rea);
   dol=dol*rea;
   eur=eur*rea;
   lib=lib*rea;
   printf("O valor em reais do dólar é R$ %.2f\n", dol);
   printf("O valor em reais do euro é R$ %.2f\n", eur);
   printf("O valor em reais do libra é R$ %.2f\n", lib);
getchar();
printf("\n\n");
system("pause");
return(0);    
}
