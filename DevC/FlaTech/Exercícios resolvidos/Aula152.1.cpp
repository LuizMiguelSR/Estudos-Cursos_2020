/*Faça um programa em C que entre com números inteiros em um vetor A[50] e um vetor B[50]. O programa deve ainda gerar e imprimir o vetor C[50] que será a soma dos vetores A e B.*/
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    int veta[50], vetb[50], vetc[50];
    cout << "Valores do vetor A e B" << endl;
    for(int i = 0; i < 50; i++){
        cout << "Digite o valor do vetor A: ";
        cin >> veta[i];
        cout << "Digite o valor do vetor B: ";
        cin >> vetb[i];
        vetc[i] = veta[i] + vetb[i];
    }
    cout << "\nSoma dos vetores A e B: ";
    for(int i = 0; i < 50; i++){
        cout << vetc[i];
        if(i==4){
            cout << ".";
        } else {
            cout << " - ";
        }
    }
    return 0;
}