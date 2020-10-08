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
    float va, pr;
    printf ("Digite o preço do produto: ");
    scanf ("%f",&pr);
    va = pr*(1-0.10);
    printf ("O valor do produto com desconto é R$ %.2f",va);
getchar();
printf("\n\n");
system("pause");
return(0);    
}
