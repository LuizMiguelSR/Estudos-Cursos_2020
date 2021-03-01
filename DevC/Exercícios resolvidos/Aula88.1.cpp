#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main()
/* 
Construa um algoritmo para calcular o salário líquido dos funcionários de uma empresa com 40 funcionários. Deve-se ler o nome de cada funcionário e seu salário bruto e apresentar o salário líquido calculado que é igual ao salário bruto menos os descontos de INSS e IRRF. O desconto de INSS e IRRF é calculado conforme a tabela abaixo:

Salário Bruto R$        % INSS % IRRF
Até 3000,00                 8     15
De 3000,01 até 4500,00      9     20
Acima de 4500,01            10    25
*/
{
    setlocale(LC_ALL,"");
    system("cls");
    int i=1;
    float salb, sall;
    char nome[20];

    while (i<=40){
        printf("Digite o seu nome: ");
        scanf("%s", &nome);
        setbuf(stdin,NULL);
        printf("Informe o salário bruto R$ ");
        scanf("%f", &salb);
        setbuf(stdin,NULL);
        if (salb <= 3000.00) {
            sall = salb - (salb*0.08) - (salb*0.15);
        } else if (salb >= 3000.01 && salb <= 4500.00) {
            sall = salb - (salb*0.09) - (salb*0.20);
        } else {
            sall = salb - (salb*0.10) - (salb*0.25);
        }
        printf("O salário líquido de %s é de R$ %.2f", nome, sall);
        i++;
        printf("\n");
    }
    
getchar();
printf("\n\n");
system("pause");
return(0);    
}