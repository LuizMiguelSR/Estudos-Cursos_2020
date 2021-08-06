#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main(int argc, char *argv[])
/*Elabore um programa em linguagem c que leia dois números inteiros, e efetue a adição, caso o resultado seja maior que 10 imprima-o*/
{
setlocale(LC_ALL,"portuguese");
    int n1, n2, r;
    printf("Informe um número: ");
    scanf("%i",&n1);
    printf("Informe um número: ");
    scanf("%i",&n2);
    r=n1+n2;
    if (r>10) 
    {
        printf("%i", r);
    }
    else
    {
    }    
getchar();
printf("\n\n");
system("pause");
return(0);    
}