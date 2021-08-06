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
    int a=10, b=5, c;
    c=a+b;
    printf("A soma do valor %d mais %d é igual a %d",a,b,c); //pode ser feito assim
    printf("\nA soma do valor %d mais %d é igual a %d",a,b,a+b); //ou pode ser feito assim
    
getchar();
printf("\n\n");
system("pause");
return(0);    
}
