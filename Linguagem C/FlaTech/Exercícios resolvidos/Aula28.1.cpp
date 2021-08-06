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
   float peso, valor;
   printf("Digite o peso do prato: ");
   scanf("%f",&peso);
   valor=peso*12.00;
   printf("O valor do prato é R$ %.2f",valor);
getchar();
printf("\n\n");
system("pause");
return(0);    
}
