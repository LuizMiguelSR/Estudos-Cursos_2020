#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main(int argc, char *argv[])
/*Exercício 30: Crie um algoritmo que leia um número inteiro de 
três dígitos e mostre esse valor e mostre esse valor da seguinte 
forma: CENTENA=X DEZENA=X UNIDADE=X*/
{
setlocale(LC_ALL,"portuguese");
     int n, c, d, u;
     printf("Digite um inteiro valor de três digitos: ");
     scanf("%i",&n);
     c=n/100;
     d=n%100;
     u=d%10;
     d=d/10;
     printf("CENTENA = %i \nDEZENA = %i \nUNIDADE = %i",c, d, u);     
getchar();
printf("\n\n");
system("pause");
return(0);    
}