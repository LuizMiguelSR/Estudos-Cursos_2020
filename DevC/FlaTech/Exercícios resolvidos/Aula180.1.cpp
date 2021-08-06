/*Faça um programa em C que leia a idade que 5 alunos irão completar esse ano, leia o ano em que estamos, armazene a idade na linha 1 de uma matriz 2x5, calcule e guarde o ano de nascimento dos alunos na linha 2 e imprima apenas a segunda linha da matriz.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    int m[2][5], ano;
    cout << "Digite o ano atual: ";
    cin >> ano;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 5; j++){
            if(i == 0){
                cout << "Digite a idade do " << j+1 << "º aluno: ";
                cin >> m[i][j];
            } else {
                m[i][j] = ano - m[0][j];
            }
            
        }
    }
    cout << "\nAno de nascimento dos alunos" << endl;
    for(int i = 1; i < 2; i++){
        for(int j = 0; j < 5; j++){
            cout << "O ano de nascimento do " << j+1 << "º aluno foi em " << m[i][j] << "\n";
        }
    }
    return 0;
}