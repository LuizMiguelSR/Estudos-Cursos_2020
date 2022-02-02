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
    float n1, n2;
    printf("Digite seu peso em quilos: ");
    scanf("%f",&n1);
    n2=n1*1000;
    printf("Seu peso em gramas é %.0f gramas",n2);
getchar();
printf("\n\n");
system("pause");
return(0);    
}
