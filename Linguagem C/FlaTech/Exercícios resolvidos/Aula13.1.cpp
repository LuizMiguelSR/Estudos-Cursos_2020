#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main(int argc, char *argv[])
{
	float pi=3.14, r=2;
	int a, e=2;
	a=pow(r,e);
	printf("%.2f Cm",a*pi);
    setlocale(LC_ALL,"portuguese");
getchar();
printf("\n\n");
system("pause");
return(0);    
}
