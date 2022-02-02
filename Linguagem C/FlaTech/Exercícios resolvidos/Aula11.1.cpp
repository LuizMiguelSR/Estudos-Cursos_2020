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
    float a=0.75, b=45.00;
    printf("O valor a ser pago é de R$ %2.2f",a*b);
    
getchar();
printf("\n\n");
system("pause");
return(0);    
}
