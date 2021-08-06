/*Escreva um programa em C que leia um vetor de 10 posições e verifique se existem valores iguais e os escreva.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    int veta[10];
    bool c = false;
    for(int i = 0; i < 10; i++){
        cout << "Digite um número: ";
        cin >> veta[i];
    }
    for(int i = 0; i < 10; i++){
        for(int j = i+1; j < 10; j++){
            if(veta[i] == veta[j]){
                cout << "O valor " << veta[i] << " se repete." << endl;
                c = true;
            }
        }
    }
    if(c==false){
        cout << "Nenhum valor se repete." << endl;
    }
    return 0;
}