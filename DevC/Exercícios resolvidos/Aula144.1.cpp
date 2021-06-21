/*Faça um programa em C que leia 6 números e armazene-os em um vetor. Após o armazenamento, mostre a soma dos números armazenados.*/
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");

    int vet[6], n=0;
    for(int i = 0; i < 6; i++){
        cout << "Digite o valor da primeira posição do vetor: ";
        cin >> vet[i];
        n+=vet[i];
    }
    cout << "\nVetor preenchido: ";
    for(int i = 0; i < 6; i++){
        cout << vet[i];
        if(i == 5){
            cout << "";
        } else {
            cout << " + ";
        }
    }
    cout << "\nSoma dos valores: " << n << endl;

    return 0;
}