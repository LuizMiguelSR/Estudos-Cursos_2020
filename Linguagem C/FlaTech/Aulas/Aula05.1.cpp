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
    //Exerc�cio 01
    
    /*int p,i;
    printf("Digite um n�mero par e outro �mpar\n");
    scanf("%i %i",&p,&i);
    if(p>i)
    {
    	printf("Vari�vel par � maior que �mpar!");
	}
    else if(p<i)
    {
    	printf("Vari�vel �mpar � maior que par!");
	}
	else
	{
		printf("O valor par e �mpar s�o iguais!");
	}*/
	
	//Exerc�cio 02
	
	/*int refeicao,escovou;
	printf("Informe a quantidade de vezes que voc� fez refei��o hoje: ");
	scanf("%i",&refeicao);
	printf("Irforme a quantidade de vezes que voc� escovou os dentes hoje: ");
	scanf("%i",&escovou);
	if (escovou>=refeicao)
	{
		printf("Voc� est� escovando os dentes de forma correta");
	}
	else if(escovou<refeicao)
	{
		printf("Voc� est� escovando os dentes de forma errada");
	}
	else
	{
		printf("O valor digitado n�o � v�lido!");
	}*/
	
	// Exerc�cio 03
	
	/*int vas,flu,bot;
	printf("Digite a quantidade de t�tulos de cada um dos times no Estadual: ");
	scanf("%i %i %i",&vas,&flu,&bot);
	if ((vas>flu) && (vas>bot))
	{
		printf("O Vasco tem mais t�tulos que o Fluminense e o Botafogo!");
	}
	else if ((flu>vas) && (flu>bot))
	{
		printf("O Fluminense tem mais t�tulos que o Vasco e o Botafogo!");
	}
	else
	{
		printf("O Botafogo tem mais t�tulos que o Vasco e o Fluminense!");
	}*/
	
	//Exerc�cio 04
	
	/*float fla,vas,flu,bot;
	printf("Digite a quantidade de likes na p�gina de cada um dos times Cariocas: ");
	scanf("%f %f %f %f",&fla,&vas,&flu,&bot);
	if((fla>vas) || (fla>flu) || (fla>bot))
	{
		printf("A p�gina do Flamengo tem mais likes que as p�ginas de todos os grandes rivais cariocas");
	}
	else
	{
		printf("Alguma das p�ginas do rivais do Flamengo tem mais likes que a do Flamengo");
	}*/
	
	//Exerc�cio 05
	
	int fla=0,cor=0;
	if(fla!=cor)
	{
		printf("Um dos dois times j� foi rebaixado, pois um deles tem valor diferente de zero");
	}
	else if (fla==cor)
	{
		printf("Os dois times nunca foram rebaixados, pois o valor dos dois � zero");
	}
getchar();
printf("\n\n");
system("pause");
return(0);    
}
