#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
int main()
/* 
Considerando o sistema de avaliação das médias colocado a seguir, 
escreva um programa em linguagem C que avalie a média de um aluno, 
o seu conceito correspondente e escreva a mensagem: “APROVADO” se o 
conceito for A, B, ou C e “REPROVADO” se o conceito for D ou E.
Média - Conceito
Maior ou Igual a 9.0 A
Maior ou Igual 7.5 e menor que 9.0 B
Maior ou Igual 6.0 e menor que 7.5 C
Maior ou Igual 4.0 e menor que 6.0 D
Menor que 4.0 E
*/
{
    system("cls");
    float n1;
    printf("Infome a média: ");
    scanf("%f",&n1);
    if (n1 >= 9.0) {
        printf("Conceito A - Aprovado");
    } else if (n1 >= 7.5 && n1 < 9.0) {
        printf("Conceito B - Aprovado");
    } else if (n1 >= 6.0 && n1 < 7.5) {
        printf("Conceito C - Aprovado");
    } else if (n1 >= 4.0 && n1 < 6.0) {
        printf("Conceito D - Reprovado");
    } else {
        printf("Conceito E - Reprovado");
    }
getchar();
printf("\n\n");
system("pause");
return(0);    
}