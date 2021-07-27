/*Implemente um programa em C que leia 10 números quaisquer e os imprima em ordem crescente.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    int vet[10], aux = 0;
    for(int i = 0; i < 10; i++){
        cout << "Digite um número: ";
        cin >> vet[i];

    }
    for(int i = 0; i < 10; i++){
        for(int j = i+1; j < 10; j++){
            if(vet[i] > vet[j]){
                if(j < 10){
                    aux = vet[i];
                    vet[i] = vet[j];
                    vet[j] = aux;
                }
            }
        }
    }
    cout << "\nOrdem crescente: ";
    for(int i = 0; i < 10; i++){
        if(i==9){
            cout << vet[i] << ".";
        } else {
            cout << vet[i] << " - ";
        }        
    }
    return 0;
}