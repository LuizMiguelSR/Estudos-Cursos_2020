#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
int main()
/* 
 Escreva um programa em linguagem C que leia 3 números inteiros e 
 mostre o maior deles.
*/
{
    system("cls");
    int n1, n2, n3;
    printf("Informe os valores de N1, N2 e N3: ");
    scanf("%d %d %d",&n1, &n2, &n3);
    if (n1 > n2 && n2 > n3) {
        printf("N1 é maior");
    } else if (n1 > n3 && n3 > n2) {
        printf("N1 é maior");
    }else if (n2 > n1 && n1 > n3) {
        printf("N2 é maior");
    } else if (n2 > n3 && n3 > n1) {
        printf("N2 é maior");
    } else if (n3 > n1 && n1 > n2) {
        printf("N3 é maior");
    } else if (n3 > n2 && n2 > n1) {
        printf("N3 é maior");
    } else {
        printf("Iguais");
    }
getchar();
printf("\n\n");
system("pause");
return(0);    
}