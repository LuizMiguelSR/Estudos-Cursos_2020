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
    int h, m, sm;
    printf("Digite as horas e os minutos com dois digitos: ");
    scanf("%i",&h);
    scanf("%i",&m);
    sm=(h*60)+m;
    printf("\nA quantidade de minutos é: %i",sm);
getchar();
printf("\n\n");
system("pause");
return(0);    
}
