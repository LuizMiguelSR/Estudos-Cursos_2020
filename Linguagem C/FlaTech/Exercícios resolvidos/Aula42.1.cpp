#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main(int argc, char *argv[])
/*Faça um programa em C que leia dois números e imprima-os em ordem decrescente na tela*/
{
setlocale(LC_ALL,"portuguese");
    int n1, n2;
    printf("Informe um número: ");
    scanf("%i",&n1);
    printf("Informe outro número: ");
    scanf("%i",&n2);
    if (n1>n2) 
    { printf("\n%i %i",n2,n1); }
    else if (n1<n2)
    { printf("\n%i %i",n1,n2); }
    else
    {
        printf("\nOs números são iguais");
    }    
getchar();
printf("\n\n");
system("pause");
return(0);    
}