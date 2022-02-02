/*Crie um programa em C que leia 8 números e armazene-os em um vetor. Após o armazenamento, mostre a média dos números armazenados.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
#include <cstdlib>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    int n, som = 0, vet[8];
    float med = 0;
    for(int i = 0; i < 8; i++){
        cout << "Digite um número: ";
        cin >> n;
        vet[i] = n;
    }
    cout << "Números do vetor: ";
    for(int i = 0; i < 8; i++){
        cout << vet[i];
        som += vet[i];
        if(i == 7){
            cout << ".";
        } else {
            cout << " ";
        }
    }
    cout << "\nSoma do vetor = " << som;
    med = (float) som / 8;
    cout << "\nMédia = " << fixed << setprecision(2) << med << endl;
    return 0;
}