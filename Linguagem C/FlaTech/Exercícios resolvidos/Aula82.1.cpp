#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main()
/* 
Escreva um algoritmo que lê um valor n inteiro e positivo e que 
calcula a seguinte expressão:   S = 1 + 2 + 3 + 4 + ... + n
*/
{
    setlocale(LC_ALL,"");
    system("cls");
    int i, n, s=0;
    printf("Digite um número: ");
    scanf("%i", &n);
    for (i=1;i<n+1;i++){
        printf("Somando %i\n",i);
        s = s + i;
    }
    printf("O valor final foi: %i\n", s);
getchar();
printf("\n\n");
system("pause");
return(0);    
}