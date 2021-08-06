/*Crie um programa em C que leia o n�mero de inscri��o e as notas de 10 candidatos de um concurso e exiba a inscri��o dos candidatos pela ordem de classifica��o no concurso (ou seja ordenados pelas notas).*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    int ni[5], auxni;
    float nt[5], auxnt;
    for(int i = 0; i < 5; i++){
        cout << "Digite o n�mero de inscri��o: ";
        cin >> ni[i];
        cout << "Digite a nota: ";
        cin >> nt[i];
    }
    for(int i = 0; i < 5; i++){
        for(int j = i+1; j < 5; j++){
            if(nt[i] < nt[j]){
                if(j < 5){
                    auxnt = nt[i];
                    nt[i] = nt[j];
                    nt[j] = auxnt;

                    auxni = ni[i];
                    ni[i] = ni[j];
                    ni[j] = auxni;
                }
            }
        }
    }
    cout << "\nListagem de notas" << endl;
    for(int i = 0; i < 5; i++){
        cout << "N�mero de inscri��o: " << ni[i] << ", nota: " << fixed << setprecision(1) << nt[i] << endl;
    }
    return 0;
}