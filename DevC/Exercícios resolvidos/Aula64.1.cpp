#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
int main()
/* 
Escreva um programa em linguagem C que recebe dois números reais e 
um símbolo de operação do usuário (+, -, / ou *). O programa deve
 retornar o resultado da operação recebida sobre estes dois números
*/
{
    system("cls");
    float n1, n2;
    char op;
    printf("Digite dois numeros: ");
    scanf("%f %f", &n1, &n2);
    printf("Escolha a operacao: ");
    scanf("%c", &op);
    op = getch();

    if (op == '+'){
        printf("\nO valor e %.0f",n1+n2);
    } else if (op == '-') {
        printf("\nO valor e %.0f",n1-n2);
    } else if (op == '/'){
        printf("\nO valor e %.0f",n1/n2);
    } else if (op == '*') {
        printf("\nO valor e %.0f",n1*n2);
    } else {
        printf("\nCodigo incorreto");
    }
getchar();
printf("\n\n");
system("pause");
return(0);    
}