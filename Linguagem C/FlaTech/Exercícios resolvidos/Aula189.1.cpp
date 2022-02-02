/*Crie uma matriz quadrada bidimensional que receba valores digitados pelo usu�rio e em seguida mostre os valores da diagonal principal e da diagonal secund�ria. Uma matriz quadrada � aquela que tem a quantidade de linhas e colunas iguais, uma diagonal principal � uma linha que tra�a a primeira posi��o da matriz e termina na �ltima, j� a diagonal secund�ria faz a dire��o contr�ria, come�a no canto superior direito e termina no inferior esquerdo.*/
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
            cout << "Digite o valor da posi��o ";
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
    cout << "\nDiagonal secund�ria: ";
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            if(i+j==tam-1){
                cout <<mat[i][j] << " ";
            }                 
        }
    }
    return 0;
}