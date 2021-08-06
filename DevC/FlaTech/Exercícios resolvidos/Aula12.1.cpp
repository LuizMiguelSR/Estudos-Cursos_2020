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
    float a=10,b=20,c=30,d=40,n1;
    n1=(a+b+c+d)/4;
    printf("A média aritmetica é %.2f",n1);
getchar();
printf("\n\n");
system("pause");
return(0);    
}
