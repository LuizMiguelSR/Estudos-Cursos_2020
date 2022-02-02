/*Uma companhia de teatro planeja dar uma s�rie de espet�culos. Para cada espet�culo ser�o vendidos 120 ingressos e as despesas fixas somam R$ 2000,00. A dire��o precisa calcular o valor a ser pago por ingresso. Para isso, escreva um programa em C que leia o valor que ele pretende cobrar no ingresso e informe se esse valor cobrir� as despesas e, caso ele cubra, quanto restar� de lucro para companhia.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    system("cls");

    float vi, vt;

    cout<<"Dgite o valor do ingresso R$";
    cin>>vi;

    vt= vi * 120;

    if (vt>2000){
        cout<<"\nO valor total das vendas � de R$"<<fixed<<setprecision(2)<<vt<<" e sobrou de lucro R$";
        vt = vt-2000;
        cout<<vt;
    } else if(vt==2000){
        cout<<"\nO valor cobre as despesas por�m n�o rende lucro.";
    } else {
        cout<<"\nO valor de R$"<<fixed<<setprecision(2)<<vt<<" n�o cobre as despesas.";
    }
    
    return 0;
}