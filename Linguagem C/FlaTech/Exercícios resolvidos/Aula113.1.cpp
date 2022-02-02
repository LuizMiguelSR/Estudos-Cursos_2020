/*Durante uma corrida de autom�veis com 80 voltas de dura��o foram informados para um piloto os tempos registrados em cada volta. Fa�a um programa em linguagem C para ler os tempos de cada volta, calcular e imprimir: 
- o melhor tempo; 
- a volta em que o melhor tempo ocorreu; 
- tempo m�dio das 80 voltas.*/

#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL,"");
    system("cls");

    int seg=0, tempm=0, volt, mtemp=0, soms=0, mins, segu;

    for(int i=1; i < 8+1; i++){
        cout<<"\nDigite o tempo da volta em segundos: ";
        cin>>seg;
        soms+=seg;
        if (i==1){
            mtemp = seg;
            volt = i;
        } else {
            if (seg < mtemp) {
                mtemp = seg;
                volt = i;
            }
        }
    }
    
    tempm = soms/8;
    mins = (tempm%3600)/60;
    segu = (tempm%3600)%60;


    cout<<"\nA m�dia de tempo foi de 00:0"<<mins<<":"<<segu;
    cout<<"\nA melhor volta foi realizada na "<<volt<<"� volta.";
    return 0;
}