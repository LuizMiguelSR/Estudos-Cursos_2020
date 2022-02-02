#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
int main()
/* 
Faça um programa em linguagem C que leia um número entre 0 e 10, 
e escreva este número por extenso.
*/
{
    system("cls");
    int n;
    printf("Digite um numero entre 0 e 10: ");
    scanf("%i", &n);
    if (n < 0 || n > 10){
        printf("Valor invalido");
    } else {
        if (n == 0) {
            printf("Zero");
        } else if (n == 1) {
            printf("Um");
        } else if (n == 2) {
            printf("Dois");
        } else if (n == 3) {
            printf("Três");
        } else if (n == 4) {
            printf("Quatro");
        } else if (n == 5) {
            printf("Cinco");
        } else if (n == 6) {
            printf("Seis");
        } else if (n == 7) {
            printf("Sete");
        } else if (n == 8) {
            printf("Oito");
        } else if (n == 9) {
            printf("Nove");
        } else if (n == 10) {
            printf("Dez");
        }
    }
getchar();
printf("\n\n");
system("pause");
return(0);    
}