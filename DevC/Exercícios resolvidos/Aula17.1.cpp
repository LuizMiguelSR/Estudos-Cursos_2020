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
    int a, b, c, d;
    printf("Digite dois números\n");
    scanf("%i %i",&a,&b);
    c=a/b;
    d=a%b;
    printf("A divisão desses números é igual a: %i",c);
    printf("\nO resto da divisão é igual a %i",d);
getchar();
printf("\n\n");
system("pause");
return(0);    
}
