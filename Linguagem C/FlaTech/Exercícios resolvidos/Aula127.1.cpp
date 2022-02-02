/*Fa�a um programa em C que simule um Menu de Op��es, e que para cada uma das op��es abaixo lidas, imprima as seguintes mensagens: 
1 - Executa a rotina de inclus�o de Alunos
2 - Executa a rotina de altera��o de Alunos
3 - Executa a rotina de exclus�o de Alunos
4 - Executa a rotina de consulta de Alunos*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    system("cls");

    int e;

    cout<<"Escolha uma das op��es a seguir: ";
    cin>>e;

    switch (e) {
    case 1:
        cout<<"\nAluno inclu�do com sucesso!";
        break;
    case 2:
        cout<<"\nAluno alterado com sucesso!";
        break;
    case 3:
        cout<<"\nAluno exclu�do com sucesso!";
        break;
    case 4:
        cout<<"\nAluno consultado com sucesso!";
        break;
    default:
        cout<<"\nOp��o inv�lida";
        break;
    }

    return 0;
}