#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main()
/* 
Escreva um algoritmo que leia um n�mero inteiro e determine se ele � ou n�o um n�mero primo (um n�mero primo � aquele que s� � divis�vel por 1 e por ele pr�prio).
*/
{
    setlocale(LC_ALL,"");
    system("cls");
    int n, i=1, r=0;
    printf("Digite n�mero: ");
    scanf("%i", &n);

    while (i<=n) {
        if (i%n==0) {
            r=r+1;
        } else {

        }
        i++;
    }
    if (r==2) {
        printf("\nO n�mero � primo!");
    } else {
        printf("\nO n�mero n�o � primo!");
    }
    
getchar();
printf("\n\n");
system("pause");
return(0);    
}