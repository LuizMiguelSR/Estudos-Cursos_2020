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
    printf("Digite dois n�meros\n");
    scanf("%i %i",&a,&b);
    c=a/b;
    d=a%b;
    printf("A divis�o desses n�meros � igual a: %i",c);
    printf("\nO resto da divis�o � igual a %i",d);
getchar();
printf("\n\n");
system("pause");
return(0);    
}
