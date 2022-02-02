#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");

    int m[3][3] = {9, 8, 7, 6, 5, 4, 3, 2, 1}; // atribuindo os valores as linha e colunas da matriz

    cout << "Exemplo 01" << endl;
    cout << m[0][2] << endl;

    int m1[2][2];

    m1[0][0] = 12;  //atribuindo valores pelos seus índices
    m1[0][1] = 13;
    m1[1][0] = 14;
    m1[1][1] = 15;

    cout << "\nExemplo 02" << endl;

    for(int l = 0; l < 2; l++){
        for(int c = 0; c < 2; c++){
            cout << m1[l][c] << " ";
        }
        cout << "\n";
    }

    int m2[3][3]; //atribuindo valores usando o laço for

    cout << "\nExemplo 03" << endl;

    for(int l = 0; l < 3; l++){
        for(int c = 0; c < 3; c++){
            cin >> m2[l][c];
        }
    }
    
    for(int l = 0; l < 3; l++){
        for(int c = 0; c < 3; c++){
            cout << m2[l][c] << "\t";
        }
        cout << "\n";
    }
    
    return 0;
}