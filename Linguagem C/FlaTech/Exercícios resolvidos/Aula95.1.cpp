#include <stdio.h>
#include <locale.h>
#include <iostream>
using namespace std;
int main(){
    setlocale(LC_ALL,"");
    system ("cls");
    /*Fa�a um programa em C que leia n�meros inteiros at� que o n�mero 0 seja digitado e que indique: quantos s�o pares, quantos s�o �mpares, quantos s�o positivos e quantos s�o negativos.*/
    int n, somp=0, somi=0, sompos=0, somneg=0;
    do {
        cout<<"Digite um n�mero: ";
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
    cout<<"A quatidade de pares �: "<<somp<<endl;
    cout<<"A quatidade de �mpares �: "<<somi<<endl;
    cout<<"A quatidade de positivos �: "<<sompos<<endl;
    cout<<"A quatidade de negativos �: "<<somneg<<endl;
    return 0;
}