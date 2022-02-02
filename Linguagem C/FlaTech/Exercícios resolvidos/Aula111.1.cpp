/*Desenvolva um programa em linguagem C que calcule o valor de S para um determinado valor de N informado pelo usuário a partir da seguinte expressão: S = 1^1 + 2^2 + 3^3 + 4^4 + ... + N^n */
#include <iostream>
#include <iomanip>
#include <locale.h>
#include <math.h>
using namespace std;

int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    system("cls");

    int s=0, n=0, e=0, i=0, r=0;

    cout<<"Informe o valor de N: ";
    cin>>n;

    for (i=1; i<=n; i++) {
        e=i;
        s=pow(i,e);
        r=r+s;
    }
    cout<<"\nResultado final da expressão = "<<r;
    return 0;
}