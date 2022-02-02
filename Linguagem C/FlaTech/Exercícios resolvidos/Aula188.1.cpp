/*Crie um programa em C com uma matriz chamada SL de tamanho 3x3 que receba os valores de 1 a 9 e outra chamada SC de tamanho 3x3 que também receba os valores de 1 a 9. Em seguida imprima os três resultados da soma de cada uma das linhas da matriz SL e o três resultados da soma de cada uma das colunas da matriz SC. Deve-se ainda criar em seguida uma matriz chamada R de tamanho 2x2x2 que receba o valor da soma das linhas de SL nas três primeiras posições, o valor da soma das colunas de SC nas três posições posteriores, a soma dos valores de todas as posições da SL na penúltima posição dessa matriz R e a multiplicação dos valores de todas as posições da SC na última posição. Ao final, imprima a matriz R mostrando o índice e os valores.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    int sl[3][3], somasl = 0, somasl1 = 0, somasl2 = 0, somasl3 = 0, sc[3][3], somasc = 0, somasc1 = 0, somasc2 = 0, somasc3 = 0, r[2][2][2];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "Preencha a matriz sl de 1 a 9: ";
            cin >> sl[i][j];
            if(i == 0){
                somasl1 += sl[i][j];
            } else if (i == 1){
                somasl2 += sl[i][j];
            } else {
                somasl3 += sl[i][j];
            }
            somasl += sl[i][j];
        }
    }
    cout << "\nSoma linha 1: " << somasl1 << "\nSoma linha 2: " << somasl2 << "\nSoma linha 3: " << somasl3 << endl;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "Preencha a matriz sc de 1 a 9: ";
            cin >> sc[i][j];
            if(j == 0){
                somasc1 += sc[i][j];
            } else if (j == 1){
                somasc2 += sc[i][j];
            } else if (j == 2){
                somasc3 += sc[i][j];
            }
            if(i == 0 && j == 0){
                somasc = sc[i][j];
            } else {
                somasc *= sc[i][j];
            }
            
        }
    }
    cout << "\nSoma coluna 1: " << somasc1 << "\nSoma coluna 2: " << somasc2 << "\nSoma coluna 3: " << somasc3 << endl;

    for(int x = 0; x < 2; x++){
        for(int y = 0; y < 2; y++){
            for(int z = 0; z < 2; z++){
                if(x == 0 && y == 0 && z == 0){
                    r[x][y][z] = somasl1;
                } else if(x == 0 && y == 0 && z == 1){
                    r[x][y][z] = somasl2;
                } else if(x == 0 && y == 1 && z == 0){
                    r[x][y][z] = somasl3;
                } else if(x == 0 && y == 1 && z == 1){
                    r[x][y][z] = somasc1;
                } else if(x == 1 && y == 0 && z == 0){
                    r[x][y][z] = somasc2;
                } else if(x == 1 && y == 0 && z == 1){
                    r[x][y][z] = somasc3;
                } else if(x == 1 && y == 1 && z == 0){
                    r[x][y][z] = somasl;
                } else {
                    r[x][y][z] = somasc;
                }
            }
        }
    }

    for(int x = 0; x < 2; x++){
        for(int y = 0; y < 2; y++){
            for(int z = 0; z < 2; z++){
                cout << "Valor linha " << x << ", coluna " << y << ", profundiade " << z << " = " << r[x][y][z] << endl;
            }
        }
    }
    return 0;
}