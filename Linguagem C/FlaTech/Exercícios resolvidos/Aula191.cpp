/*Crie uma matriz bidimensional quadrada com n�mero �mpar de posi��es atribuindo em ordem crescente os valores de 1 at� o valor m�ximo de posi��es da matriz, em seguida realize a soma da diagonal principal com a diagonal secund�ria, fa�a tamb�m a multiplica��o da linha do meio da matriz com a coluna do meio, e para finalizar realize a divis�o do resultado da multiplica��o pelo resultado da soma das diagonais imprimindo a conclus�o de todas as opera��es.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(){
    setlocale(LC_ALL,"");
    int mat[3][3], soma = 0, somp = 0, soms = 0, mult = 1, multl = 1, multc = 1, tot = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j ++){
            cout << "Digite o valor da posi��o: "; 
            cin >> mat[i][j]; 
            if(i == j){
                somp += mat[i][j];
            }
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j ++){
            if ((i+j) == 2){
                soms += mat[i][j];
            }
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j ++){
            if (j == 1){
                multl *= mat[i][j];
                mult *=mat[i][j];
            }
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j ++){
            if (i == 1){
                multc *= mat[i][j];
                mult *=mat[i][j];
            }
        }
    }
    cout << "\nValor da soma da diagonal principal = " << somp << endl;
    cout << "Valor da soma da diagonal secund�ria = " << soms << endl;
    cout << "Valor da multiplica��o da linha do meio = " << multl << endl;
    cout << "Valor da multiplica��o da coluna do meio = " << multc << endl;
    soma = somp + soms;
    tot = mult / soma;
    cout << "Valor da divis�o da soma com multiplica��o = " << tot << endl;
    return 0;
}