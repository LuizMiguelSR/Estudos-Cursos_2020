#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>

/*Exerc�cio 26: Uma empresa paga R$ 60,00 por hora normal trabalhada, 
e R$ 75,00 por hora extra. Elabore um algoritmo para ler a 
quantidade de horas normais e extras trabalhadas por um determinado 
funcion�rio e em seguida calcular e imprimir o seu sal�rio bruto e o 
seu sal�rio l�quido. Considere que o sal�rio l�quido � igual ao sal�rio 
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
   printf("O sal�rio bruto deste funcion�rio � R$ %.2f\n", sb);
   printf("O sal�rio l�quido deste funcion�rio � R$ %.2f\n", sl);
     
getchar();
printf("\n\n");
system("pause");
return(0);    
}
