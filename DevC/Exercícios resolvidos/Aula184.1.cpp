/*Realize a criação em C de uma matriz M1 3x3 que receba valores para todas as suas posições, em seguida uma matriz M2 3x3 deve armazenar da M1 o dobro dos valores dos cantos, o triplo dos valores dos meios e a soma de todos os valores das posições da M1 na posição central da M2, imprima tudo na mesma ordem visual obedecendo a tabulação. Pensei na matriz visual do jogo da velha para facilitar e não considere a posição central da M1 como triplo na M2, apenas a soma de todas as posições da M1.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    int m1[3][3], m2[3][3], som = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> m1[i][j];
            som += m1[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if((i == 0 || i == 2) && (j == 0 || j == 2)){
                m2[i][j] = m1[i][j] * 2;
            } else if (i == 1 && j == 1){
                m2[i][j] = som;
            } else {
                m2[i][j] = m1[i][j] * 3;
            }
        }
    }
    cout << "\n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << m2[i][j] << "\t";
        }
        cout << "\n";
    }
    return 0;
}