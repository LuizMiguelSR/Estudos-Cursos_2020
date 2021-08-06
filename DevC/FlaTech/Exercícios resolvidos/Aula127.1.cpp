/*Faça um programa em C que simule um Menu de Opções, e que para cada uma das opções abaixo lidas, imprima as seguintes mensagens: 
1 - Executa a rotina de inclusão de Alunos
2 - Executa a rotina de alteração de Alunos
3 - Executa a rotina de exclusão de Alunos
4 - Executa a rotina de consulta de Alunos*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    system("cls");

    int e;

    cout<<"Escolha uma das opções a seguir: ";
    cin>>e;

    switch (e) {
    case 1:
        cout<<"\nAluno incluído com sucesso!";
        break;
    case 2:
        cout<<"\nAluno alterado com sucesso!";
        break;
    case 3:
        cout<<"\nAluno excluído com sucesso!";
        break;
    case 4:
        cout<<"\nAluno consultado com sucesso!";
        break;
    default:
        cout<<"\nOpção inválida";
        break;
    }

    return 0;
}