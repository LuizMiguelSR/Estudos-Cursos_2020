#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main()
/* 
Fa�a um programa em C que leia um n�mero maior que zero e imprima o quadrado de todos os n�meros entre 0 e o n�mero lido.
*/
{
    setlocale(LC_ALL,"");
    system("cls");
    int n, i=1, res;

    printf("Digite um n�mero: ");
    scanf("%d", &n);

    for (i;i<=n;i++) {
        res = i * i;
        printf("O quadrado de %d � %d\n", i, res);
    } 
    
getchar();
printf("\n\n");
system("pause");
return(0);    
}