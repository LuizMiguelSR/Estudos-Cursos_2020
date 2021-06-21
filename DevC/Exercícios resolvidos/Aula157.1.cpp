/*Faça um programa em C que leia um vetor de 20 elementos e em seguida ache a posição do elemento M (dado pelo usuário) no vetor. Caso o elemento não exista no vetor informe ao usuário.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    int vet[5], m, c=0;
    for(int i = 0; i < 5; i++){
        cout << "Digite um numero: ";
        cin >> vet[i];
    }
    cout << "Digite o elemento a ser encontrado: ";
    cin >> m;
    for(int i = 0; i < 5; i++){
        if(m==vet[i]){
            cout << "Elemento encontrado na posição " << i << "\n";
            c++;
        }
        if(i==4&&c==0){
            cout << "Elemento não encontrado\n";
        }
    }
    return 0;
}