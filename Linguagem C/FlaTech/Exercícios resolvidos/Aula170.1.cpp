/*Crie um programa em C que leia um vetor contendo 40 números inteiros. Retirar os números negativos do vetor e depois escreva os elementos do vetor na tela.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    
    int v[5], x, c = 0;
    for(int i = 0; i < 5; i++){
        cout << "Digite um número: ";
        cin >> x;
        if(x > 0){
            v[c] = x;
            c++;
        }
    }
    cout << "\nVetor sem os números negativos: ";
    for(int i = 0; i < c; i++){
        cout << v[i] << " ";
    }
    return 0;
}