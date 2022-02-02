/* Faça um programa em C que receba o valor do salário mínimo, o número de horas trabalhadas, o número de dependentes do funcionário e a quantidade horas extras trabalhadas. Calcule e mostre o salário a receber do funcionário seguindo as regras abaixo.
- o valor da hora trabalhada é igual a 1/5 do salário mínimo;
- salário do mês é igual ás horas trabalhadas vezes o valor da hora trabalhada;
- para cada dependente acrescentar R$ 32,00;
- para cada hora extra calcular o valor da hora trabalhada acrescida de 50%;
- salário bruto é o salário mais o valor dos dependentes e o valor das horas extras;
- valor do imposto de renda retido na fonte seguindo a tabela abaixo:
IRRF Salário Bruto
Isento Até R$ 1700,00
15%         Entre R$ 1800,00 e R$ 3500,00
25%         Acima de R$ 3500,00
? o salário líquido é igual ao salário bruto menos IRRF.*/

#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    system("cls");
    
    int ht, nd, he;
    float sm, vht, salm, slb, sll;

    cout<<"Digite o valor do salário minimo R$ ";
    cin>>sm;
    vht = sm / 5;

    cout<<"\nDigite a quantidade de horas trabalhadas: ";
    cin>>ht;
    salm = ht * vht;

    cout<<"\nQuantos dependente possui: ";
    cin>>nd;

    cout<<"\nNúmero de horas extras: ";
    cin>>he;
    he = (vht * 1.50) * he;
    slb = salm + (nd*32) + he;

    if(slb<=1700){
        sll = slb;
    } else if(slb>=1800 || slb <= 3500){
        sll = slb * 0.85;
    } else if(slb > 3500){
        sll = slb * 0.75;
    }

    cout<<"\nO salário bruto é de R$ "<<fixed<<setprecision(2)<<slb;
    cout<<"\nO salário líquido é de R$ "<<fixed<<setprecision(2)<<sll<<endl;

    return 0;
}