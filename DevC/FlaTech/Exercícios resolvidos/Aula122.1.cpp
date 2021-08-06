/*Um usu�rio deseja um programa onde possa escolher que tipo de m�dia deseja calcular a partir de 3 notas. Construa um programa em C que leia as notas, a op��o escolhida pelo usu�rio e calcule a m�dia. 
- op��o 1: m�dia aritm�tica;
- op��o 2: m�dia ponderada (pesos 3,3,4).*/

#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

int main(int argc, char** argv){
    setlocale(LC_ALL,"");

    float n1, n2, n3, med, res;

    cout<<"Digite as notas: ";
    cin>>n1>>n2>>n3;

    cout<<"\nEscolha o tipo de média 1-Aritmética 2-Ponderada: ";
    cin>>med;

    if(med == 1){
        res = (n1 + n2 + n3) / 3;
    } else {
        res = ((n1*3)+(n2*3)+(n3*4))/10;
    }

    cout<<"\nA média é de "<<fixed<<setprecision(2)<<res<<endl;
    
    return 0;
}