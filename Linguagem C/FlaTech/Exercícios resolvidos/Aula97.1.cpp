#include <stdio.h.>
#include <iostream>
#include <locale.h>
using namespace std;

/*Elabore um programa em C que leia n�meros inteiros at� que o n�mero 0 seja digitado e depois mostre quais foram o maior e o menor valor fornecido.*/
int main () {
    setlocale(LC_ALL,"");
    system("cls");

    int i=0, mai, men, n;

    do {
        cout<<"Digite um n�mero: ";
        cin>>n;
        if (n!=0) {
            if (i==0){
                mai = n;
                men = n;
            } else {
                if (n > mai) {
                    mai = n;
                } else if (n < men) {
                    men = n;
                }
            }
        i++;
        } else {
            cout<<"Preparando resultados..."<<endl;
        }
    } while (n!=0);
    if (i==0) {
        cout<<"N�o houve leitura de valores."<<endl;
    } else {
        cout<<"O maior n�mero � "<<mai<<endl;
        cout<<"O menor n�mero � "<<men<<endl; 
    }

    return 0;
 }