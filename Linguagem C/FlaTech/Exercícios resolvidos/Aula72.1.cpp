#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main()
/* 
Construa um algoritmo que leia 20 n�meros inteiros e calcule ao 
final da leitura a soma e a m�dia desses n�meros.
*/
{
    setlocale(LC_ALL,"");
    system("cls");
    int i, n, som=0;
    float med;
    for (i=0;i<20;i++){
        printf("\nDigite um n�mero: ");
        scanf("%d",&n);
        som = som + n;
    }
    med = som/20;
    printf("\nA soma � igual a %d e a m�dia � %.1f", som, med);
getchar();
printf("\n\n");
system("pause");
return(0);    
}