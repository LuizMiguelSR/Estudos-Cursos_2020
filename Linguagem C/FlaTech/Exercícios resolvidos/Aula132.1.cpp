/*Escreva um programa em linguagem C que leia a temperatura m�nima registrada em cada um dos 30 dias do m�s de junho/12, leia o valor de T que � a menor temperatura registrada durante o ano de 2012, e indique :
- Quais foram os dias do m�s que houve uma temperatura igual ao valor de T; e
- A quantidade de dias que a temperatura m�nima de junho foi maior que T.*/
#include <iostream>
#include <iomanip>
#include <random>
#include <locale.h>
using namespace std;
int main(int argc, char** argv) {
    setlocale(LC_ALL,"");
    system("cls");

    float t, tm; 
    int c=0;

    cout<<"Qual a menor temperatura do ano? ";
    cin>>t;

    cout<<"\nDigite as temperaturas do m�s de junho\n";
    for(int i = 1; i<=30; i++) {
        tm = rand() % 40;
        if(t==tm){
            cout<<"\nO dia "<<i<<" teve temperatura igual a "<<t<<"�.";
        } else if (tm < t) {
            c++;
        }
    }
    cout<<"\nO n�mero de dias que a temperatura foi menor que "<<t<<"� foi de "<<c<<" dias.";
    return 0;
}