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
   int a, b, c, r, s, d;
   printf("Informe os valores de A, B e C\n");
   scanf("%i %i %i", &a, &b, &c);
   r=a+b;
   s=b-c;
   d=(r+s)/2;
   printf("O valor de D é igual a: %i",d);
getchar();
printf("\n\n");
system("pause");
return(0);    
}
