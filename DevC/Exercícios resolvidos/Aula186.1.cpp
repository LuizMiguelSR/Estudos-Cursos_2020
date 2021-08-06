/*Faça um programa que peça a quantidade de alunos de uma turma, onde a quantidade de alunos serão as linhas de uma matriz A, em seguida o programa deve pedir a leitura das notas de quatro provas de cada um dos alunos, onde cada prova será representada por uma coluna da matriz. Deve também ser mostrando a média do aluno em tempo real a cada vez que a quarta nota for inserida apertando ENTER e se ele está aprovado ou reprovado considerando a média 7. Ao final o programa deve mostrar e média geral da turma, quantos alunos foram aprovados e quantos foram reprovados.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    int l, somalunoaprovado = 0, somaalunoreprovado = 0;
    cout << "Quantidade de alunos: ";
    cin >> l;
    float matA[l][4], somamedia = 0.0, somamediageral = 0.0, mediaaluno = 0.0, mediageral = 0.0;
    for(int i = 0; i < l; i++){
        cout << "\nAluno " << i+1 << endl;
        for(int j = 0; j < 4; j++){
            cout << "Digite a " << j+1 << "º nota: ";
            cin >> matA[i][j];
            somamedia += matA[i][j];
            if(j == 3) {
                mediaaluno = somamedia / 4;
                somamediageral += mediaaluno;
                cout << "\nA média do aluno " << i+1 << " foi " << fixed << setprecision(1) << mediaaluno;
                if(mediaaluno >= 7.0){
                    somalunoaprovado++;
                    cout << "\nO aluno " << i+1 << " foi APROVADO" << endl;
                } else {
                    somaalunoreprovado++;
                    cout << "\nO aluno " << i+1 << " foi REPROVADO" << endl;
                }
                somamedia = 0;
            }
        }
    }
    mediageral = somamediageral / l;
    cout << "\n\nMédia geral da turma = " << fixed << setprecision(1) << mediageral << endl;
    cout << "Quantidade de alunos aprovados: " << somalunoaprovado << endl;
    cout << "Quantidade de alunos reprovados: " << somaalunoreprovado << endl;
    return 0;
}