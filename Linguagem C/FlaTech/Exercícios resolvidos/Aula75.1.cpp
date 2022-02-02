#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main()
/* 
Crie um algoritmo que leia um número maior que zero e 
imprima o quadrado de todos os números entre 0 e o número lido.
*/
{
    setlocale(LC_ALL,"");
    system("cls");
    int i, n, s=0;
    printf("\nDigite um número: ");
    scanf("%d",&n);
    for (i=0;i<n+1;i++){
        s = i * i;
        printf("\nQuadrado > %d = %d", i, s);
    }
getchar();
printf("\n\n");
system("pause");
return(0);    
}