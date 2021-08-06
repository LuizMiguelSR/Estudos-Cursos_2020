#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
int main()
/* 
Um usuário deseja um programa em linguagem C onde possa escolher 
que tipo de média deseja calcular a partir de 3 notas. Construa um 
programa que leia as notas, a opção escolhida pelo usuário e calcule 
a média.
Opção 1: média aritmética;
Opção 2: ponderada (pesos 3,3,4).
*/
{
    system("cls");
    float n1, n2, n3, med;
    int op;
    printf("Digite a notas numeros: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("Escolha a operacao: ");
    scanf("%i", &op);

    if (op == 1){
        med=(n1+n2+n3)/3;
        printf("\nA media Aritmetica e: %.1f", med);
    } else if (op == 2) {
        med=((n1*3)+(n2*3)+(n3*4))/10;
        printf("\nA media ponderada e: %.1f", med);
    } else {
        printf("\nCodigo incorreto");
    }
getchar();
printf("\n\n");
system("pause");
return(0);    
}