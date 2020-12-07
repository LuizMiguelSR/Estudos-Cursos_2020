#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main()
/* 
Construa um algoritmo que leia 20 números inteiros e calcule ao 
final da leitura a soma e a média desses números.
*/
{
    setlocale(LC_ALL,"");
    system("cls");
    int i, n, som=0;
    float med;
    for (i=0;i<20;i++){
        printf("\nDigite um número: ");
        scanf("%d",&n);
        som = som + n;
    }
    med = som/20;
    printf("\nA soma é igual a %d e a média é %.1f", som, med);
getchar();
printf("\n\n");
system("pause");
return(0);    
}