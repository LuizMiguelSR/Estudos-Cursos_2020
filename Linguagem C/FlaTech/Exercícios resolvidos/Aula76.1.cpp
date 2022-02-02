#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main()
/* 
Escreva um algoritmo que leia o valor para uma variável n e calcule 
a tabuada de n. Mostre a tabuada na forma: 
1 x n = n 
2 x n = 2n 
3 x n = 3n 
....... 
n x n = n2
*/
{
    setlocale(LC_ALL,"");
    system("cls");
    int i, n, s=0;
    printf("\nDigite um número: ");
    scanf("%d",&n);
    for (i=1;i<10+1;i++){
        s = i * n;
        printf("\n%i X %i = %i", i, n, s);
    }
getchar();
printf("\n\n");
system("pause");
return(0);    
}