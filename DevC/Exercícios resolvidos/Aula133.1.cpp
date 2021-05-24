/*Desenvolva um programa em linguagem C que calcule o valor de S para um determinado valor de n informado pelo usuário a partir da seguinte expressão: S = 1/2 + 2/3 + 3/4 + ... + n/n+1*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    system("cls");

    float s=0, p=0, n, i;

    cout<<"Digite o valor de n: ";
    cin>>n;

    for(i = 1; i <= n; i++){
        p = i/(i+1);
        s = s + p;
    }

    cout<<"\nS = "<<s;

    return 0;
}