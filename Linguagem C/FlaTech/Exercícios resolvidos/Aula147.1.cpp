/*Escreva um programa em C que armazene 15 números inteiros em um vetor NUM e em seguida imprima uma listagem contendo o número e a informação indicando se o número é par ou ímpar.*/
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    int num[15];
    for(int i = 0; i < 15; i++){
        cout << "Digite um número: ";
        cin >> num[i];
    }
    for(int i = 0; i < 15; i++){
        if(num[i] % 2 == 0){
            cout << num[i] << " é par!" << endl;
        } else {
            cout << num[i] << " é ímpar!" << endl;
        }
    }
    return 0;
}