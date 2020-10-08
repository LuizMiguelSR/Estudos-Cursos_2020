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
    float si, sf, cm, vd;
    printf ("Digite o seu salário: ");
    scanf ("%f",&si);
    printf ("Digite o valor das vendas: ");
    scanf ("%f",&vd);
    cm = vd*0.5;
    sf=si+cm;
    printf ("O valor da comissão é de R$ %.2f e o salário final é de R$ %.2f",cm,sf);
getchar();
printf("\n\n");
system("pause");
return(0);    
}
