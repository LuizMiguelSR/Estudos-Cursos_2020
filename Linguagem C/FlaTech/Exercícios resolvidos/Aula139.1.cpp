/*Foi feita uma pesquisa para determinar o índice de mortalidade infantil em um certo período. Elabore um programa em C que leia a quantidade de crianças nascidas no período, o sexo de uma criança que morreu (0-masculino, 1-feminino) e o número de meses que a criança viveu, calcule e imprima:
- a porcentagem de crianças mortas no período;
- a porcentagem de crianças do sexo masculino mortas no período;
- a porcentagem de crianças que viveram 24 meses ou menos no período.
A cada nova leitura deve-se perguntar ao usuário se ele deseja encerrar a entrada de dados ou não.*/
#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    system("cls");
    int c=1, sex, mes;
    float pcm = 0.0, pcmm = 0.0, pcv = 0.0, cn, cmm=0, somm=0, som;

    cout<<"Crianças nascidas: ";
    cin>>cn;
    while(c!=0){
        cout<<"\nSexo: ";
        cin>>sex;
        if(sex==1){
            cmm += 1;
        }
        cout<<"Quantos meses: ";
        cin>>mes;
        if(mes <= 24){
            somm += 1;
        }
        som += 1;
        cout<<"Quer continuar? ";
        cin>>c;
    }
    pcm = ((float)som / (float)cn) * 100;
    cout<<"\nA porcentagem de crianças mortas no período: "<<fixed<<setprecision(2)<<pcm<<"%";
    pcmm = ((float)cmm / (float)cn) * 100;
    cout<<"\nA porcentagem de crianças masculinas mortas no período: "<<fixed<<setprecision(2)<<pcmm<<"%";
    pcv = ((float)somm / (float)cn) * 100;
    cout<<"\nA porcentagem de crianças que viveram 24 meses ou menos no período: "<<fixed<<setprecision(2)<<pcv<<"%";
    
    return 0;
}