/*Elabore um programa em C que leia a matr�cula e as duas notas de 10 alunos, calcule a m�dia desses alunos e informe no final a seguinte sa�da ordenada pela m�dia: Mostre no final a m�dia da classe, a quantidade de aprovados e a quantidade de reprovados considerando uma m�dia 7,0.*/
#include <iostream>
#include <iomanip>
#include<locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    
    int mat[5], qta = 0, qtr = 0;
    float n1[5], n2[5], med[5], medf, som = 0, auxmed, auxmat;

    for(int i = 0; i < 5; i++){
        cout << "Digite a matr�cula: ";
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
        cout << "N�mero de matr�cula: " << mat[i] << ", m�dia das notas: " << fixed << setprecision(1) << med[i] << endl;
    }
    cout << "M�dia da sala: " << fixed << setprecision(1) << medf << endl;
    cout << "N�mero de alunos aprovados: " << qta << endl;
    cout << "N�mero de alunos reprovados: " << qtr << endl;

    return 0;
}