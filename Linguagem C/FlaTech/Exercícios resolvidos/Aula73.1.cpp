#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main()
/* 
Fa�a um algoritmo que imprima todos os n�meros inteiros de 1 a N, 
onde N � um n�mero fornecido pelo usu�rio.
*/
{
    setlocale(LC_ALL,"");
    system("cls");
    int i, n;
    printf("\nDigite um n�mero: ");
    scanf("%d",&n);
    for (i=1;i<n+1;i++){
        printf("\nN�mero = %d", i);
    }
getchar();
printf("\n\n");
system("pause");
return(0);    
}