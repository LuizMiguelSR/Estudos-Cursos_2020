#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");

    //Atribuição direta
    int m[2][2][2] = {1, 2, 3, 4, 5, 6, 7, 8}; //linhas coluna e profundidade
    cout << "Exemplo 01" << endl;
    cout << "A posição oculta é " << m[1][0][1] << endl;

    /*
    Representação de uma matriz tridmensional
        L C P
        0 0 0
        0 0 1
        0 1 0
        0 1 1
        1 0 0
        1 0 1
        1 1 0
        1 1 1
    */

    //Populando uma matriz 3x3x3 com laço for
    int m1[3][3][3], ct = 1;

    for(int l = 0; l < 3; l++){
        for(int c = 0; c < 3; c++){
            for(int p = 0; p < 3; p++){
                m1[l][c][p] = ct;
                ct = ct + 1;
            }
        }
    }
    cout << "\nExemplo 02" << endl;
    cout << "Primeira posição oculta: " << m1[1][0][1] << endl;
    cout << "Segunda posição oculta: " << m1[1][0][2] << endl;
    cout << "Terceira posição oculta: " << m1[1][1][1] << endl;
    cout << "Quarta posição oculta: " << m1[1][1][2] << endl;
    
    return 0;
}