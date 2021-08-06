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
	float a=2.541, b=9.673;
	printf("A multiplicação de %8.2f e %8.2f é igual a %8.2f",a,b,a*b);
    
getchar();
printf("\n\n");
system("pause");
return(0);    
}
