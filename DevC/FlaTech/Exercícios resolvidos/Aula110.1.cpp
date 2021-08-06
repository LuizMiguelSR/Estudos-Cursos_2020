/*Desenvolva um programa em linguagem C que calcule o valor de S para um determinado valor de N informado pelo usuário a partir da seguinte expressão: 
S  =  1 + 2 + 3 + ... +   N_  
      2   3   4           N+1*/

#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL,"");
    system("cls");

    int n, x, y;
    float a=0, b=0, c=0, d=0, e=0, f=0, g=0;

    cout<<"Digite o número N: ";
    cin>>n;

    for(x=1; x<=n; x++) {
        y=x+1;
        a=a+x;
        b=b+y;
        c=a/b;
        cout<<"\nSoma dos dividendos = "<<fixed<<setprecision(3)<<a<<"\tSoma dos divisores = "<<fixed<<setprecision(3)<<b;
    }

    cout<<"\nA divisão de "<<a<<" por "<<b<<" = "<<fixed<<setprecision(3)<<c;

    for (x=1; x<=n; x++) {
        y=x+1;
        d=x;
        e=y;
        f=d/e;
        g=g+f;
        cout<<"\nValor de x = "<<d<<"\tValor de y = "<<e<<"\tValor Atual de x dividido por y = "<<fixed<<setprecision(3)<<f;
    }

    cout<<"\nResultado final da soma dos termos =  "<<fixed<<setprecision(3)<<g;
    
    getchar();
    return 0;
}

