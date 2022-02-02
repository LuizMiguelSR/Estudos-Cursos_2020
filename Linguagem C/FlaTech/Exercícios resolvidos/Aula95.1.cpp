#include <stdio.h>
#include <locale.h>
#include <iostream>
using namespace std;
int main(){
    setlocale(LC_ALL,"");
    system ("cls");
    /*Faça um programa em C que leia números inteiros até que o número 0 seja digitado e que indique: quantos são pares, quantos são ímpares, quantos são positivos e quantos são negativos.*/
    int n, somp=0, somi=0, sompos=0, somneg=0;
    do {
        cout<<"Digite um número: ";
        cin>>n;
        if (n!=0) {
            if(n>0) {
                sompos = sompos + 1;
                if (n%2==0) {
                    somp = somp + 1;
                } else {
                    somi = somi + 1;
                }
            } else {
                somneg = somneg + 1;
                if (n%2==0) {
                    somp = somp + 1;
                } else {
                    somi = somi + 1;
                }
            }
        } else {
            cout<<"Divulgando resultados..."<<endl;
        }
    } while (n!=0);
    cout<<"A quatidade de pares é: "<<somp<<endl;
    cout<<"A quatidade de ímpares é: "<<somi<<endl;
    cout<<"A quatidade de positivos é: "<<sompos<<endl;
    cout<<"A quatidade de negativos é: "<<somneg<<endl;
    return 0;
}