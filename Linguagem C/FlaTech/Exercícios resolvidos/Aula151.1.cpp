/*Elabore um programa em C que leia 10 elementos e armazene-os em um vetor. Em seguida outro vetor deve ser criado, cujos componentes s�o o triplo dos respectivos componentes do primeiro vetor.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
#include <cstdlib>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    int veta[10], vetb[10];
    for(int i = 0; i < 10; i++){
        cout << "Digite um n�mero: ";
        cin >> veta[i];
        vetb[i] = veta[i] * 3;
    }
    cout << "O vetor m�ltiplicado por 3 � : ";
    for(int i = 0; i < 10; i++){
        cout << vetb[i];
        if (i == 4){
            cout << ".\n";
        } else {
            cout << " - ";
        }
    }
    return 0;
}