#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main()
/* 
Escreva um algoritmo que imprima os m�ltiplos de 5, no intervalo de 
1 at� 500.
*/
{
    setlocale(LC_ALL,"");
    system("cls");
    int i;
    for (i=0;i<500+1;i+=5){
        printf("\nM�ltiplo %i",i);
    }
getchar();
printf("\n\n");
system("pause");
return(0);    
}