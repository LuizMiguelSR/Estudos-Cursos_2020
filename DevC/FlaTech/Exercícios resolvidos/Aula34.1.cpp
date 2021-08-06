#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>

/*Exercício 26: Uma empresa paga R$ 60,00 por hora normal trabalhada, 
e R$ 75,00 por hora extra. Elabore um algoritmo para ler a 
quantidade de horas normais e extras trabalhadas por um determinado 
funcionário e em seguida calcular e imprimir o seu salário bruto e o 
seu salário líquido. Considere que o salário líquido é igual ao salário 
bruto descontando-se 10% de impostos*/

int main(int argc, char *argv[])
{
setlocale(LC_ALL,"portuguese");
   float hn, he, sb, sl;
   printf("Digite a quantidade de horas normais: ");
   scanf("%f", &hn);
   printf("Digite a quantidade de horas extras: ");
   scanf("%f", &he);
   sb=(hn*60.00)+(he*75.00);
   sl=sb*(1-0.10);
   printf("O salário bruto deste funcionário é R$ %.2f\n", sb);
   printf("O salário líquido deste funcionário é R$ %.2f\n", sl);
     
getchar();
printf("\n\n");
system("pause");
return(0);    
}
