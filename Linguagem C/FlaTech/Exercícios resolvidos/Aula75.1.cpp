#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main()
/* 
Crie um algoritmo que leia um n�mero maior que zero e 
imprima o quadrado de todos os n�meros entre 0 e o n�mero lido.
*/
{
    setlocale(LC_ALL,"");
    system("cls");
    int i, n, s=0;
    printf("\nDigite um n�mero: ");
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