/*Faça um programa em C que leia os valores necessários e efetue o seguinte cálculo: D = (X2 - X1)2 + (Y2 – Y1)2*/

#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    system("cls");

    float x, y, d;

    cout<<"Digite os valores de x e y: ";
    cin>>x>>y;

    d = (((x*2)-(x*1))*2)+(((y*2)-(y*1))*2);

    cout<<"\nO resultado de D é "<<d<<endl;

    return 0;
}