/*Desenvolva um programa em C que leia 15 números e armazene-os em um vetor. Após o armazenamento, mostre a soma dos números positivos armazenados.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
#include <cstdlib>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    int vet[15], som=0;
    for(int i = 0; i < 15; i++){
        cout << "Digite um número: ";
        cin >> vet[i];
        if(vet[i] > 0){
            som+=vet[i];
        }
    }
    cout << "A soma dos números positivos = " << som << endl;
    return 0;
}