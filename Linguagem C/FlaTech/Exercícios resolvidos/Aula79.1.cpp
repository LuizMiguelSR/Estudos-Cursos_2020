#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main()
/* 
Faça um algoritmo que leia 10 valores e escreva a quantidade de valores negativos e quantidade de valores positivos lidos.
*/
{
    setlocale(LC_ALL,"");
    system("cls");
    int i, n, pos=0, neg=0;
    for (i=1;i<3+1;i++){
        printf("Digite umnúmero: ");
        scanf("%i", &n);
        if (n > 0) {
            pos = pos + 1;
        } else {
            neg = neg + 1;
        }
    }
    printf("A qtde de números positivos foi: %i\n", pos);
    printf("A qtde de números negativos foi: %i\n", neg);
getchar();
printf("\n\n");
system("pause");
return(0);    
}