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
	//Comando for
	/*int x;
	for(x=0;x<10;x++) //1ºinicialização da variável 2ºcondição 3ºatribuição
	{
		printf("\nIndice na posição %i",x);
	}*/
	
	//Exercício 01
	/*int x=3,y,z;
	for(y=1;y<=10;y++)
	{
		z=x*y;
		printf("\n%i X %i = %i",x,y,z);
	}*/
	
	//Comando for dentro de outro for
	/*int x,y;
	for(x=1;x<=10;x++)
	{
		printf("\n");
		for(y=1;y<=5;y++)
		{
			printf("\nElemento %i testado",y);
		}
		printf("\nCinco elementos foram testados na etapa %i",x);
	}*/
	
	//Leitura e somatório
	int x,y=0,s=0;
	printf("Digite Valores para somar!\n");
	for(x=0;x<10;x++)
	{
		printf("Digite um valor para somar: ");
		scanf("%i",&y);
		s=s+y;
	}
	printf("\nA soma geral da variável s = %i",s);
getchar();
printf("\n\n");
system("pause");
return(0);    
}
