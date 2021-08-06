#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
int main()
/* Uma empresa qualquer decidiu conceder um aumento de salários a 
seus funcionários de acordo com a tabela abaixo:
Salário Atual Aumento 
0 – 400,00 15%
400,01 – 700,00 12%
700,01 – 1.000,00 10%
1.000,01 – 1.800,00 7%
1.800,01 – 2.500,00 4%
acima de 2.500,00 Sem aumento
Escreva um programa em linguagem C que leia o salário atual de um 
funcionário e escreva o percentual de seu aumento e o valor do salário
 corrigido a partir desse aumento.*/
{
    system("cls");
    float sal, aum;
    printf("Digite seu salario atual: R$ \n");
    scanf("%f",&sal);
    if (sal <= 400.00) {
        aum = sal*1.15;
        printf("O novo salario e R$ %.2f",aum);
    } else if (sal >= 400.01 && sal <= 700.00) {
        aum = sal*1.12;
        printf("O novo salario e R$ %.2f",aum);
    } else if (sal >= 700.01 && sal <= 1000.00) {
        aum = sal*1.10;
        printf("O novo salario e R$ %.2f",aum);
    } else if (sal >= 1000.01 && sal <= 1800.00) {
        aum = sal*1.07;
        printf("O novo salario e R$ %.2f",aum);
    } else if (sal >= 1800.01 && sal <= 2500.00) {
        aum = sal*1.04;
        printf("O novo salario e R$ %.2f",aum);
    } else {
        printf("Sem aumento!");
    }
getchar();
printf("\n\n");
system("pause");
return(0);    
}