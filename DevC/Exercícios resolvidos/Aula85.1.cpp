#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main()
/* 
Crie um algoritmo que leia um valor M inteiro e leia depois uma lista de 10 elementos, em seguida ache a posição do elemento M na lista. Caso o elemento não exista na lista informe ao usuário.
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
        printf("\nO elemento M esta na posição %i", p);
    } else {
        printf("\nO valor M não existe entre os elementos!");
    }
    
getchar();
printf("\n\n");
system("pause");
return(0);    
}