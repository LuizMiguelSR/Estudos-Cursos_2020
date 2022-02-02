/*Crie um programa em C que leia 8 n�meros e armazene-os em um vetor. Ap�s o armazenamento, mostre a m�dia dos n�meros armazenados.*/
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
        cout << "Digite um n�mero: ";
        cin >> n;
        vet[i] = n;
    }
    cout << "N�meros do vetor: ";
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
    cout << "\nM�dia = " << fixed << setprecision(2) << med << endl;
    return 0;
}