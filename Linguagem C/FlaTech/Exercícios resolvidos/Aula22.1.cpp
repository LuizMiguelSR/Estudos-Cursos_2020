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
    float km, mi;
    printf ("Digite a distância em milhas: ");
    scanf ("%f",&mi);
    km = mi*1.61;
    printf ("A distância entre as duas cidades em quilômetros é: %.2f",km);
    
getchar();
printf("\n\n");
system("pause");
return(0);    
}
