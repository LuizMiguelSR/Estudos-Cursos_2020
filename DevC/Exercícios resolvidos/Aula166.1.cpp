/*Um escola deseja saber se existem alunos cursando, simultaneamente, as disciplinas de L�gica e Linguagem de Programa��o. Escreva um programa em C que coloque os n�meros das matr�culas dos alunos que cursam L�gica em um vetor, no m�ximo 15 alunos e coloque os n�meros das matr�culas dos alunos que cursam Linguagem de Programa��o em outro vetor, no m�ximo 20 alunos. O programa deve mostrar o n�mero da matricula que aparece nos dois vetores ordenados de forma crescente.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");

    int lp[5], lo[3], ord[] = {}, c = 0, auxord;
    cout << "Alunos de L�gica da Programa��o\n";
    for(int i = 0; i < 5; i++){
        cout << "Digite o n�mero de matr�cula: ";
        cin >> lp[i];
    }
    cout << "\nAlunos de L�gica\n";
    for(int i = 0; i < 3; i++){
        cout << "Digite o n�mero de matr�cula: ";
        cin >> lo[i];
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            if(lp[i] == lo[j]){
                ord[c] = lp[i];
                c++;
            }
        }
    }
    for(int i = 0; i < c; i++){
        for(int j = i + 1; j < c; j++){
            if(ord[i] > ord[j]){
                if(j < c){
                    auxord = ord[i];
                    ord[i] = ord[j];
                    ord[j] = auxord;                
                }
            }
        }
    }
    cout << "\nAlunos que cursam ambas as mat�rias\n";
    for(int i = 0; i < c; i++){
        cout << "A matr�cula n� " << ord[i] << " cursa ambas as mat�rias" << endl;
    }
    return 0;
}