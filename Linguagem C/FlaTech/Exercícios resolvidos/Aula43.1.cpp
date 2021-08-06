#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main(int argc, char *argv[])
/*Faça um programa em C que leia dois números e responda se a divisão do primeiro pelo segundo é exato (o resto da divisão deve ser igual a 0). Se for o programa deve imprimir a mensagem "A divisão de 1º número por 2º número é exato*/
{
setlocale(LC_ALL,"portuguese");
    int n1, n2;
    printf("Digite um número: ");
    scanf("%i",&n1);
    printf("Digite outro número: ");
    scanf("%i",&n2);
    if (n1%n2==0) {
        printf("\nA divisão de %i por %i é exata",n1,n2);
    }
    else {
        printf("A divisão de %i por %i não é exata",n1,n2);
    }  
getchar();
printf("\n\n");
system("pause");
return(0);    
}