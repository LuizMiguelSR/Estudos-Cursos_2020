/*Escreva um programa em C que armazene 15 n�meros inteiros em um vetor NUM e em seguida imprima uma listagem contendo o n�mero e a informa��o indicando se o n�mero � par ou �mpar.*/
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    int num[15];
    for(int i = 0; i < 15; i++){
        cout << "Digite um n�mero: ";
        cin >> num[i];
    }
    for(int i = 0; i < 15; i++){
        if(num[i] % 2 == 0){
            cout << num[i] << " � par!" << endl;
        } else {
            cout << num[i] << " � �mpar!" << endl;
        }
    }
    return 0;
}