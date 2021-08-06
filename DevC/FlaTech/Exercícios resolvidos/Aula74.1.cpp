#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main()
/* 
Ler um n�mero maior que 0 e imprimir a soma de todos os n�meros 
menores que o n�mero lido.
*/
{
    setlocale(LC_ALL,"");
    system("cls");
    int i, n, s=0;
    printf("\nDigite um n�mero: ");
    scanf("%d",&n);
    for (i=1;i<n;i++){
        printf("\nSomando > %d", i);
        s = s + i;
    }
    printf("\nSoma total = %d", s);
getchar();
printf("\n\n");
system("pause");
return(0);    
}