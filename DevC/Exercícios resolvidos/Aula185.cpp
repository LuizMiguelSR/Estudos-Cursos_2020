/*Escreva um programa em C que pe�a ao usu�rio um n�mero C e um L, onde C ser� a quantidade de colunas e L a quantidade de Linhas em uma matriz M. A seguir, o programa dever� pedir a leitura de valores para todas as posi��es da matriz e ao final apresentar a soma de todos os valores informados.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argcv){
    setlocale(LC_ALL,"");
    int c, l, som = 0;
    cout << "Digite o n�mero de colunas: ";
    cin >> c;
    cout << "Digite o n�mero de linhas: ";
    cin >> l;
    int m[c][l];
    for(int i = 0; i < c; i++){
        for(int j = 0; j < l; j++){
            cout << "Digite um valor: ";
            cin >> m[i][j];
            som += m[i][j];
        }
    }
    cout << "\nMatriz\n";
    for(int i = 0; i < c; i++){
        for(int j = 0; j < l; j++){
            cout << m[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "\nSoma de todas as posi��es: " << som;

    return 0;
}