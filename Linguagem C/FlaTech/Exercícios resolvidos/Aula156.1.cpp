/*Elabore um programa em C que armazene as notas da Prova 1 e Prova 2 de 15 alunos, calcule e armazene a m�dia de cada aluno. O programa deve armazenar tamb�m a situa��o do aluno: 0 - APROVADO ou 1 - REPROVADO considerando uma m�dia 7,0. Ao final, o programa dever� imprimir uma listagem contendo a m�dia e a situa��o de cada aluno.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    float p1[15], p2[15], med[15];
    string sit[15];
    for(int i = 0; i < 15; i++){
        cout << "Digite a notas do " << i+1 << "� aluno: ";
        cin >> p1[i] >> p2[i];
        med[i] = (p1[i] + p2[i]) / 2;
        if(med[i] < 7.0){
            sit[i] = "REPROVADO";
        } else {
            sit[i] = "APROVADO";
        }
    }
    cout << "\nListagem\n";
    for(int i = 0; i < 15; i++){
        cout << "O " << i+1 << "� aluno obteve m�dia = " << fixed << setprecision(2) << med[i] << " e a situa��o dele � " << sit[i] << endl;
    }
    return 0;
}