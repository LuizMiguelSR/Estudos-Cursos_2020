/*Fa�a um programa em C que leia o n�mero de matr�cula e a idade de 15 alunos e exiba os n�meros de matr�cula e as idades deles ordenados pela idade.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    int nm[5], aux1, aux2, id[5];

    for(int i = 0; i < 5; i++){
        cout << "Digite o n�mero de matr�cula: ";
        cin >> nm[i];
        cout << "Digite sua idade: ";
        cin >> id[i];
    }
    for(int i = 0; i < 5; i++){
        for(int j = i+1; j < 5; j++){
            if(id[i] > id[j]){
                if(j < 5){
                    aux1 = id[i];
                    id[i] = id[j];
                    id[j] = aux1;

                    aux2 = nm[i];
                    nm[i] = nm[j];
                    nm[j] = aux2;
                }
            }
        }
    }
    cout << "\nLista por ordem crescente" << endl;
    for(int i = 0; i < 5; i++){
        cout << "Matricula n� " << nm[i] << ", com idade de " << id[i] << " anos." << endl;
    }
    return 0;
}