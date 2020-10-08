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
	
	float a, b, c, d;
	printf("Digite três números\n");
	scanf("%f %f %f", &a, &b, &c);
	d=a*b*c;
	printf("A multiplicação desses números é igual a: %.2f",d);
    
getchar();
printf("\n\n");
system("pause");
return(0);    
}
