/*Crie um programa em C para gerar o invertido de um n�mero com tr�s algarismos. Por exemplo: o invertido de 498 � 894.*/

#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    system("cls");

    int alg, c, d, u;

    cout<<"Dgite o n�mero que deseja inverter: ";
    cin>>alg;

    c=alg/100;
    d=alg%100;
    u=d%10;
    d=d/10;

    cout<<"O valor invertido � "<<u<<d<<c;
    
    return 0;
}