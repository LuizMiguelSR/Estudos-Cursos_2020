#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main(int argc, char *argv[])
/*Elabore um programa em linguagem c que leia um número, e se ele for maior do que 20 imprima esse número na tela*/
{
setlocale(LC_ALL,"portuguese");
    int n;
    printf("Informe um número: ");
    scanf("%i",&n);
    if (n>20) 
    {
        printf("Este número é maior que 20");
    }
    else
    {
        printf("Este número não é maior que 20");
    }    
getchar();
printf("\n\n");
system("pause");
return(0);    
}