#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
int main()
/*Crie um programa em linguagem C que leia dois números e imprima
 qual é maior, qual é menor, ou se são iguais.*/
{
    system("cls");
    int n1, n2, mai, men;
    printf("Digite o 1 numero: \n");
    scanf("%d",&n1);
    printf("Digite o 2 numero: \n");
    scanf("%d",&n2);
    if (n1>n2) {
        printf("O primeiro numero e maior");
    }
    else if (n1 < n2) {
        printf("O segundo numero e maior");
    }
    else {
        printf("Os numeros sao iguais");
    }
getchar();
printf("\n\n");
system("pause");
return(0);    
}