#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;

/*Reescreva o algoritmo que calcula a �rea do c�rculo em linguagem C de modo que ele funcione interruptamente at� o utilizador introduzir o valor zero para o raio. Nessa altura, o programa deve dizer que a �rea � zero, e terminar com um "ByeBye".*/

int main () {
    setlocale(LC_ALL,"");
    system("cls");

    float a, pi=3.14; 
    double r=1;

    while (r!=0) {
        cout<<"Digite o raio do c�rculo: ";
        cin>>r;
        if (r!=0) {
            a = pi * pow(r,2);
            cout<<"A �rea do c�rculo � "<<a<<endl;
        } else {
            cout<<"ByeBye!"<<endl;
        }
    }
    return 0;
}