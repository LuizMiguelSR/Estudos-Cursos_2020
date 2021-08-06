#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main(int argc, char *argv[])
/*Exercício 28: Três amigos decidiram rachar igualmente a conta de um bar. 
Faça um algoritmo para ler o valor da conta e imprimir quanto cada um deve 
pagar, mas faça com que apenas um deles pague centavos. Ex uma conta de R$ 101,53 
resulta em R$ 33,00 para o primeiro, R$ 33,00 para o segundo e R$ 35,53 para o terceiro.*/
{
setlocale(LC_ALL,"portuguese");
   float vl, a1, a2, a3, r1, r2;
   printf("Informe o valor da cont: ");
   scanf("%f",&vl);
   a1=vl/3;
   a2=vl/3;
   a3=vl/3;
   
   r1=a1-floor(a1);
   a1=a1-r1;
   
   r2=a2-floor(a2);
   a2=a2-r2;
   
   a3=a3+r1+r2;
   printf("\nConta amigo 1: R$ %.2f",a1);
   printf("\nConta amigo 2: R$ %.2f",a2);
   printf("\nConta amigo 3: R$ %.2f",a3);   
getchar();
printf("\n\n");
system("pause");
return(0);    
}
