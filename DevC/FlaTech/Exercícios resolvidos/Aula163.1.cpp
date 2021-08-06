/*Elabore um programa em C que leia a matrícula e as duas notas de 10 alunos, calcule a média desses alunos e informe no final a seguinte saída ordenada pela média: Mostre no final a média da classe, a quantidade de aprovados e a quantidade de reprovados considerando uma média 7,0.*/
#include <iostream>
#include <iomanip>
#include<locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    
    int mat[5], qta = 0, qtr = 0;
    float n1[5], n2[5], med[5], medf, som = 0, auxmed, auxmat;

    for(int i = 0; i < 5; i++){
        cout << "Digite a matrícula: ";
        cin >> mat[i];
        cout << "Digite as notas: ";
        cin >> n1[i] >> n2[i];
        med[i] = (n1[i] + n2[i]) / 2;

        if(med[i] >= 7.0){
            qta++;
        } else {
            qtr++;
        }

        som += med[i];
    }

    medf = som / 5;

    for(int i = 0; i < 5; i++){
        for(int j = i+1; j < 5; j++){
            if(med[i] < med[j]){
                if(j < 5){
                    auxmed = med[i];
                    med[i] = med[j];
                    med[j] = auxmed;

                    auxmat = mat[i];
                    mat[i] = mat[j];
                    mat[j] = auxmat;
                }
            }
        }
    }

    cout << "\nListagem de notas" << endl;
    for(int i = 0; i < 5; i++){
        cout << "Número de matrícula: " << mat[i] << ", média das notas: " << fixed << setprecision(1) << med[i] << endl;
    }
    cout << "Média da sala: " << fixed << setprecision(1) << medf << endl;
    cout << "Número de alunos aprovados: " << qta << endl;
    cout << "Número de alunos reprovados: " << qtr << endl;

    return 0;
}