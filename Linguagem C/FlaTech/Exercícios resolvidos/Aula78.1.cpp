#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main()
/* 
Escreva um algoritmo que leia o valor para as vari�veis M e N, 
calcule e escreva a soma dos n�meros consecutivos a partir de 
M at� N inclusive.
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
    printf("A soma dos consecutivos �: %i", som);
getchar();
printf("\n\n");
system("pause");
return(0);    
}