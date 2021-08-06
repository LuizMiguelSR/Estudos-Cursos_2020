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
   float d=4.0/3.0, pi=3.14, r, e=3, re, v;
   printf("Digite o valor do raio: ");
   scanf("%f",&r);
   re=pow(r,e);
   v=(d*pi*re);
   printf("\nO volume da esfera é: %.1f cm",v);   
getchar();
printf("\n\n");
system("pause");
return(0);    
}
