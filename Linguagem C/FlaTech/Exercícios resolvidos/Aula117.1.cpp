/*O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%, escreva um programa em C que leia o custo de fábrica de um carro e escreva o custo ao consumidor.*/

#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    system("cls");

    float ct, cf, pi, pd;

    cout<<"Qual o custo de fábrica: R$ ";
    cin>>cf;
    pi = cf*0.45;
    pd = cf*0.28;
    ct = cf+pi+pd;
    cout<<"\nO custo de fábrica é de R$"<<fixed<<setprecision(2)<<cf;
    cout<<"\nO valor do imposto é de R$"<<fixed<<setprecision(2)<<pi;
    cout<<"\nO valor ao distribuidor é de R$"<<fixed<<setprecision(2)<<pd;
    cout<<"\nO custo ao consumidor é de R$"<<fixed<<setprecision(2)<<ct<<endl;
    return 0;
}