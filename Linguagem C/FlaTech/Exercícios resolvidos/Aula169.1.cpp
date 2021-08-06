/*Escreva um programa em C que leia um vetor de 16 posições e troque os 8 primeiros valores pelos 8 últimos e vice-versa. Escreva ao final o vetor obtido.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    int vet[16], aux;
    for(int i = 0; i < 16; i++){
        cout << "Digite um número: ";
        cin >> vet[i];
    }
    for(int i = 0; i < 8; i++){
        aux = vet[i];
        vet[i] = vet[i+8];
        vet[i+8] = aux;
    }
    for(int i = 0; i < 16; i++){
        cout << vet[i] << endl;
    }
    return 0;
}