#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
int main()
/* 
Faça um programa em linguagem C que leia quatro numeros inteiros e 
verifique quantos sao pares e quantos sao impares.
*/
{
    system("cls");
    int n1, n2, n3, n4;
    float contp, conti;
    printf("Informe os valores de N1, N2, N3 e N4: ");
    setbuf(stdin,NULL);
    scanf("%i %i %i %i", &n1, &n2, &n3, &n4);
    if (n1%2==0) {
        contp = contp + 1;
    } else {
        conti = conti + 1;
    }
    if (n2%2==0) {
        contp = contp + 1;
    } else {
        conti = conti + 1;
    }
    if (n3%2==0) {
        contp = contp + 1;
    } else {
        conti = conti + 1;
    }
    if (n4%2==0) {
        contp = contp + 1;
    } else {
        conti = conti + 1;
    }
    printf("Ao todo temos %.0f pares e %.0f impares",contp, conti);
getchar();
printf("\n\n");
system("pause");
return(0);    
}