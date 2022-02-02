/*Crie uma matriz bidimensional de cinco linhas por cinco colunas que receba valores digitados pelo usu�rio em todas as suas posi��es, em seguida realize a soma de todos os valores da diagonal principal, a multiplica��o de todos os valores da diagonal secund�ria e fa�a com que o programa imprima os dois resultados.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    int mat[5][5], som = 0, mult = 1;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j ++){
            cout << "Digite o valor da posi��o: ";
            cin >> mat[i][j];
            if(i == j){
                som += mat[i][j];
            }
        }
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j ++){
            if ((i+j) == 2){
                mult *= mat[i][j];
            }
        }
    }
    cout << "\nValor da soma da diagonal principal = " << som << endl;
    cout << "Valor da multiplica��o da diagonal secund�ria = " << mult << endl;
    return 0;
}