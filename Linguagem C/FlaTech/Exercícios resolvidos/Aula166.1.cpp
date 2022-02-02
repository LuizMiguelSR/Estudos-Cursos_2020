/*Um escola deseja saber se existem alunos cursando, simultaneamente, as disciplinas de Lógica e Linguagem de Programação. Escreva um programa em C que coloque os números das matrículas dos alunos que cursam Lógica em um vetor, no máximo 15 alunos e coloque os números das matrículas dos alunos que cursam Linguagem de Programação em outro vetor, no máximo 20 alunos. O programa deve mostrar o número da matricula que aparece nos dois vetores ordenados de forma crescente.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");

    int lp[5], lo[3], ord[] = {}, c = 0, auxord;
    cout << "Alunos de Lógica da Programação\n";
    for(int i = 0; i < 5; i++){
        cout << "Digite o número de matrícula: ";
        cin >> lp[i];
    }
    cout << "\nAlunos de Lógica\n";
    for(int i = 0; i < 3; i++){
        cout << "Digite o número de matrícula: ";
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
    cout << "\nAlunos que cursam ambas as matérias\n";
    for(int i = 0; i < c; i++){
        cout << "A matrícula nº " << ord[i] << " cursa ambas as matérias" << endl;
    }
    return 0;
}