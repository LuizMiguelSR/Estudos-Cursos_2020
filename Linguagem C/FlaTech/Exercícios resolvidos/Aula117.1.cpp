/*O custo ao consumidor de um carro novo � a soma do custo de f�brica com a percentagem do distribuidor e dos impostos (aplicados ao custo de f�brica). Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%, escreva um programa em C que leia o custo de f�brica de um carro e escreva o custo ao consumidor.*/

#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    system("cls");

    float ct, cf, pi, pd;

    cout<<"Qual o custo de f�brica: R$ ";
    cin>>cf;
    pi = cf*0.45;
    pd = cf*0.28;
    ct = cf+pi+pd;
    cout<<"\nO custo de f�brica � de R$"<<fixed<<setprecision(2)<<cf;
    cout<<"\nO valor do imposto � de R$"<<fixed<<setprecision(2)<<pi;
    cout<<"\nO valor ao distribuidor � de R$"<<fixed<<setprecision(2)<<pd;
    cout<<"\nO custo ao consumidor � de R$"<<fixed<<setprecision(2)<<ct<<endl;
    return 0;
}