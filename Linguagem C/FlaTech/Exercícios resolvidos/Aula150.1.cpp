/*Escreva um programa em C que leia um vetor de 40 posi��es e atribua valor 0 para todos os elementos que possu�rem valores negativos.*/
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    int vet[40];
    for (int i = 0; i < 40; i++){
        cout << "Digite um n�mero: ";
        cin >> vet[i];
        if(vet[i] < 0){
            vet[i] = 0;
        }
    }
    cout << "Novo vetor sem n�meros negativos: ";
    for(int i = 0; i < 40; i++){
        cout << vet[i];
        if(i == 4){
            cout << ".";
        } else {
            cout << ", ";
        }
    }
    return 0;
}