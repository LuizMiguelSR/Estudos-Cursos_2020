#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main()
/* 
Escreva um algoritmo que leia o valor para as variáveis M e N, 
calcule e escreva a soma dos números consecutivos a partir de 
M até N inclusive.
*/
{
    setlocale(LC_ALL,"");
    system("cls");
    int i, m, n, som=0;
    printf("Digite o valores de M e N: ");
    scanf("%i %i", &m, &n);
    for (i=m;i<n+1;i++){
        som = som + i;
    }
    printf("A soma dos consecutivos é: %i", som);
getchar();
printf("\n\n");
system("pause");
return(0);    
}