/*Crie um programa em C que armazene 8 n�meros em um vetor e, ao final, exiba a quantidade de n�meros que eram m�ltiplos de 3.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
#include <cstdlib>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    int vet[8], som=0;
    for(int i = 0; i < 8; i++){
        cout << "Digite um n�mero: ";
        cin >> vet[i];
        if(vet[i]%3==0){
            som++;
        }
    }
    cout << "A quantidade de n�meros m�ltiplos de 3 s�o " << som << endl;
    return 0;
}