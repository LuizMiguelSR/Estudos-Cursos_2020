#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main()
/* 
Crie um algoritmo que leia um valor M inteiro e leia depois uma lista de 10 elementos, em seguida ache a posi��o do elemento M na lista. Caso o elemento n�o exista na lista informe ao usu�rio.
*/
{
    setlocale(LC_ALL,"");
    system("cls");
    int m, i=1, e, p=0;
    printf("Digite o vlaor de M: ");
    scanf("%i", &m);

    printf("\nAgora digite dez elementos: ");

    while (i<=10)
    {
        scanf("%i", &e);
        if (e==m) {
            p=i;
        }
        else {
            
        }
        i++;
    }
    if (p!=0) {
        printf("\nO elemento M esta na posi��o %i", p);
    } else {
        printf("\nO valor M n�o existe entre os elementos!");
    }
    
getchar();
printf("\n\n");
system("pause");
return(0);    
}