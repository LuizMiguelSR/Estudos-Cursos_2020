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
    printf ("Digite a dist�ncia em milhas: ");
    scanf ("%f",&mi);
    km = mi*1.61;
    printf ("A dist�ncia entre as duas cidades em quil�metros �: %.2f",km);
    
getchar();
printf("\n\n");
system("pause");
return(0);    
}
