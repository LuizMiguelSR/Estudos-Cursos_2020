/*Crie uma matriz quadrada bidimensional que receba valores digitados pelo usuário e em seguida mostre os valores da diagonal principal e da diagonal secundária. Uma matriz quadrada é aquela que tem a quantidade de linhas e colunas iguais, uma diagonal principal é uma linha que traça a primeira posição da matriz e termina na última, já a diagonal secundária faz a direção contrária, começa no canto superior direito e termina no inferior esquerdo.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    int tam;
    cout << "Qual tamanho da matriz: ";
    cin >> tam;
    int mat[tam][tam];
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            cout << "Digite o valor da posição ";
            cin >> mat[i][j];
        }
    }
    cout << "\nDiagonal principal: ";
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            if(i == j){
                cout <<mat[i][j] << " ";               
            }
        }
    }
    cout << "\nDiagonal secundária: ";
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            if(i+j==tam-1){
                cout <<mat[i][j] << " ";
            }                 
        }
    }
    return 0;
}