#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
int main()
/*Elabore um programa em linguagem C que leia um numero e, se 
ele for positivo imprima a metade desse número, se ele for negativo 
imprima o número ao quadrado e se ele for nulo apenas imprima o 
próprio número na tela.*/
{
    system("cls");
    int n1, n2;
    printf("Digite um numero: \n");
    scanf("%d",&n1);
    if (n1>0) {
        n2 = n1 / 2;
        printf("A metade de %i e igual a %i",n1,n2);
    }
    else if (n1 < 0) {
        n2 = n1^n2;
        printf("A potencia de %i e igual a %i",n1,n2);
    }
    else {
        printf("O numero e igual a zero");
    }
getchar();
printf("\n\n");
system("pause");
return(0);    
}