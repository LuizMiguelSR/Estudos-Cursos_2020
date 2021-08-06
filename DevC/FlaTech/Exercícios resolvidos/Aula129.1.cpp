/*Elabore um programa em C, utilizando o switch, que leia dois valores A e B, calcule e imprima o resultado da operação escolhida pelo usuário conforme a lista a seguir :
- 1 : some os valores de A e B
- 2 : subtraia os valores de A e B
- 3 : multiplique os valores de A e B
- 4: divida os valores de A e B
- 5 : calcule o quociente da divisão de A por B
- 6 : calcule o resto da divisão de A por B
- 7 : calcule o resultado de A elevado a B
- 8 : calcule o resultado de raiz Aésima de B, ou seja, B elevado a (1/A)*/
#include <iostream>
#include <iomanip>
#include <locale.h>
#include <math.h>
using namespace std;
int main(int argc, char** argv) {
    setlocale(LC_ALL,"");
    system("cls");

    float res,a,b;
    int op;

    cout<<"Digite os valores da expresão e escolha uma opção: ";
    cin>>a>>b>>op;
    switch (op) {
    case 1:
        res = a + b;
        cout<<"\nResultado: "<<fixed<<setprecision(2)<<res;
        break;
    case 2:
        res = a - b;
        cout<<"\nResultado: "<<fixed<<setprecision(2)<<res;
        break;
    case 3:
        res = a * b;
        cout<<"\nResultado: "<<fixed<<setprecision(2)<<res;
        break;
    case 4:
        res = a / b;
        cout<<"\nResultado: "<<fixed<<setprecision(2)<<res;
        break;
    case 5:
        res = a / b;
        cout<<"\nResultado: "<<fixed<<setprecision(2)<<res;
        break;
    case 6:
        res = (int) a % (int) b;
        cout<<"\nResultado: "<<res;
        break;
    case 7:
        res = pow(a, b);
        cout<<"\nResultado: "<<fixed<<setprecision(2)<<res;
        break;
    case 8:
        res = pow(b,(1/a));
        cout<<"\nResultado: "<<fixed<<setprecision(2)<<res;
        break;    
    default:
        cout<<"\nOpção inválida!";
        break;
    }
    return 0;
}