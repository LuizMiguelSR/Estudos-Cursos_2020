#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main(int argc, char *argv[])
/*Exercício 29: Escreva um algoritmo que leia a idade de uma 
pessoa expressa em dias e mostre-o expressa em anos, meses e dias.*/
{
setlocale(LC_ALL,"portuguese");
     int dias, meses=30, anos=365, qtanos, sdias, qtmeses, qtdias;
     printf("Digite a quantidade total de dias: ");
     scanf("%i",&dias);
     qtanos=dias/anos; //Obtemos a quantidade de anos.
     sdias=dias%anos; //Sobra de dias após obter quantos anos.

     qtmeses=sdias/meses;//Obtemos a quantidade de meses.
     qtdias=sdias%meses;//Obtemos a quantidade de dias.

     printf("\nEm %i dias, temos %i anos, %i meses e %i dias.",dias,qtanos,qtmeses,qtdias);

getchar();
printf("\n\n");
system("pause");
return(0);    
}