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
    float vd, qd, vr;
    printf ("Digite a cotação do dólar: ");
    scanf ("%f",&vd);
    printf ("Digite a quantidade de dólares a ser convertido: ");
    scanf ("%f",&qd);
    vr = vd*qd;
    printf ("O valor de U$ %.2f é de R$ %.2f",qd,vr);
    
getchar();
printf("\n\n");
system("pause");
return(0);    
}
