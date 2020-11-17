#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
int main()
/* Faça um programa em linguagem C que indique se um número digitado 
está compreendido entre 20 e 90, ou não.*/
{
    system("cls");
    int n1;
    printf("Infome um número: ");
    scanf("%d",&n1);
    if (n1 >= 20 && n1 <= 90) {
        printf("O numero esta dentro do escopo");
    } else {
        printf("O numero nao esta dentro do escopo");
    }
getchar();
printf("\n\n");
system("pause");
return(0);    
}