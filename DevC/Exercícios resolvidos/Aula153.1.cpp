/*Desenvolva um programa em C que leia um vetor de 30 elementos e gere um segundo vetor cujas posições pares são o dobro do vetor original e as ímpares o triplo.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
#include <cstdlib>
using namespace std;
int main (int argc, char** argv){
    setlocale(LC_ALL,"");
    int veta[30], vetb[30];
    for(int i = 0; i < 30; i++){
        cout << "Digite um número: ";
        cin >> veta[i];
        if(veta[i]%2==0){
            vetb[i] = veta[i] * 2;
        } else if (veta[i]%2!=0) {
            vetb[i] = veta[i] * 3;
        }
    }
    cout << "\nValor do vetor calculado" << endl;
    for(int i = 0; i < 30; i++){
        if(vetb[i]%2==0){
            cout << "Este valor de " << veta[i] << " tem o dobro = " << vetb[i] << endl;
        } else if (vetb[i]%2!=0) {
            cout << "Este valor de " << veta[i] << " tem o triplo = " << vetb[i] << endl;
        }
    }
    return 0;
}