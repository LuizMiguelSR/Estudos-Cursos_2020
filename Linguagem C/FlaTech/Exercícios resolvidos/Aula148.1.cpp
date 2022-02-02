/*Desenvolva um programa em C que leia 15 n�meros e armazene-os em um vetor. Ap�s o armazenamento, mostre a soma dos n�meros positivos armazenados.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
#include <cstdlib>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    int vet[15], som=0;
    for(int i = 0; i < 15; i++){
        cout << "Digite um n�mero: ";
        cin >> vet[i];
        if(vet[i] > 0){
            som+=vet[i];
        }
    }
    cout << "A soma dos n�meros positivos = " << som << endl;
    return 0;
}