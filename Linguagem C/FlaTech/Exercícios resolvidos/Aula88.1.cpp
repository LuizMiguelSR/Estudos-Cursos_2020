#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>
int main()
/* 
Construa um algoritmo para calcular o sal�rio l�quido dos funcion�rios de uma empresa com 40 funcion�rios. Deve-se ler o nome de cada funcion�rio e seu sal�rio bruto e apresentar o sal�rio l�quido calculado que � igual ao sal�rio bruto menos os descontos de INSS e IRRF. O desconto de INSS e IRRF � calculado conforme a tabela abaixo:

Sal�rio Bruto R$        % INSS % IRRF
At� 3000,00                 8     15
De 3000,01 at� 4500,00      9     20
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
        printf("Informe o sal�rio bruto R$ ");
        scanf("%f", &salb);
        setbuf(stdin,NULL);
        if (salb <= 3000.00) {
            sall = salb - (salb*0.08) - (salb*0.15);
        } else if (salb >= 3000.01 && salb <= 4500.00) {
            sall = salb - (salb*0.09) - (salb*0.20);
        } else {
            sall = salb - (salb*0.10) - (salb*0.25);
        }
        printf("O sal�rio l�quido de %s � de R$ %.2f", nome, sall);
        i++;
        printf("\n");
    }
    
getchar();
printf("\n\n");
system("pause");
return(0);    
}