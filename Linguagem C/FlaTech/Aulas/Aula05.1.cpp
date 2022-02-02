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
    //Exercício 01
    
    /*int p,i;
    printf("Digite um número par e outro ímpar\n");
    scanf("%i %i",&p,&i);
    if(p>i)
    {
    	printf("Variável par é maior que ímpar!");
	}
    else if(p<i)
    {
    	printf("Variável ímpar é maior que par!");
	}
	else
	{
		printf("O valor par e ímpar são iguais!");
	}*/
	
	//Exercício 02
	
	/*int refeicao,escovou;
	printf("Informe a quantidade de vezes que você fez refeição hoje: ");
	scanf("%i",&refeicao);
	printf("Irforme a quantidade de vezes que você escovou os dentes hoje: ");
	scanf("%i",&escovou);
	if (escovou>=refeicao)
	{
		printf("Você está escovando os dentes de forma correta");
	}
	else if(escovou<refeicao)
	{
		printf("Você está escovando os dentes de forma errada");
	}
	else
	{
		printf("O valor digitado não é válido!");
	}*/
	
	// Exercício 03
	
	/*int vas,flu,bot;
	printf("Digite a quantidade de títulos de cada um dos times no Estadual: ");
	scanf("%i %i %i",&vas,&flu,&bot);
	if ((vas>flu) && (vas>bot))
	{
		printf("O Vasco tem mais títulos que o Fluminense e o Botafogo!");
	}
	else if ((flu>vas) && (flu>bot))
	{
		printf("O Fluminense tem mais títulos que o Vasco e o Botafogo!");
	}
	else
	{
		printf("O Botafogo tem mais títulos que o Vasco e o Fluminense!");
	}*/
	
	//Exercício 04
	
	/*float fla,vas,flu,bot;
	printf("Digite a quantidade de likes na página de cada um dos times Cariocas: ");
	scanf("%f %f %f %f",&fla,&vas,&flu,&bot);
	if((fla>vas) || (fla>flu) || (fla>bot))
	{
		printf("A página do Flamengo tem mais likes que as páginas de todos os grandes rivais cariocas");
	}
	else
	{
		printf("Alguma das páginas do rivais do Flamengo tem mais likes que a do Flamengo");
	}*/
	
	//Exercício 05
	
	int fla=0,cor=0;
	if(fla!=cor)
	{
		printf("Um dos dois times já foi rebaixado, pois um deles tem valor diferente de zero");
	}
	else if (fla==cor)
	{
		printf("Os dois times nunca foram rebaixados, pois o valor dos dois é zero");
	}
getchar();
printf("\n\n");
system("pause");
return(0);    
}
