#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
int main()
/* 
Uma empresa concederá um aumento de salário aos seus funcionários, 
variável de acordo com o cargo, conforme a tabela abaixo. Faça um 
programa em linguagem C que leia o salário e o código do cargo de um 
funcionário e calcule o novo salário. Se o cargo do funcionário não 
estiver na tabela, ele deverá, então, receber 40% de aumento. 
Mostre o nome do cargo, salário antigo, o novo salário e a diferença. 
Cargo Código Percentual 
Diretor 001 10% 
Engenheiro 002 20% 
Técnico 003 30% 
Gerente 004 10%
Analista 005 30%
Coordenador 006 20%
*/
{
    system("cls");
    int op;
    float sal, nsal;
    printf("Digite o codigo: ");
    scanf("%i", &op);
    printf("Digite o salario: ");
    scanf("%f", &sal);
    if (op == 1){
        nsal = sal * 1.10;
        printf("\nO novo salario do diretor e R$ %.2f", nsal);
    } else if (op == 2) {
        nsal = sal * 1.20;
        printf("\nO novo salario do engenheiro e R$ %.2f", nsal);
    } else if (op == 3) {
        nsal = sal * 1.30;
        printf("\nO novo salario do tecnico e R$ %.2f", nsal);
    } else if (op == 4) {
        nsal = sal * 1.10;
        printf("\nO novo salario do gerente e R$ %.2f", nsal);
    } else if (op == 5) {
        nsal = sal * 1.30;
        printf("\nO novo salario do analista e R$ %.2f", nsal);
    } else if (op == 6) {
        nsal = sal * 1.20;
        printf("\nO novo salario do coordenador e R$ %.2f", nsal);
    } else {
        nsal = sal * 1.40;
        printf("\nNao consta na lista o novo salario e R$ %.2f", nsal);
    }
getchar();
printf("\n\n");
system("pause");
return(0);    
}