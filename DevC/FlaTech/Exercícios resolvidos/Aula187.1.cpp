/*Uma empresa especializada em perfura��o de rochas e solos precisa de um programa que armazene e mostre a quantidade de cada elemento injetado para novas detona��es, para isso um cubo de massa � pintado de vermelho em apenas um dos lados para representar a parte da frente, e em seguida esse cubo � dividido fazendo assim surgir oito novos cubos menores id�nticos e sem tira-los de suas posi��es. Fa�a uma matriz tridimensional M 2x2x2 para representar esse cubo e que receba em cada uma de suas posi��es, a quantidade com valor real de cada um dos 8 elementos e uma sigla de A � H para cada parte. Os cubos que n�o tem tinta vermelha representam a parte do fundo onde a dosagem dos elementos tem que ser maior e receber o triplo do valor informado ap�s cada leitura. Imprima ao final todos os valores da matriz M.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    int m[2][2][2];
    char l[2][2][2];

    for(int x = 0; x < 2; x++){
        for(int y = 0; y < 2; y++){
            for(int z = 0; z < 2; z++){
                cout << "Linha: " << x << " Coluna: " << y << " Profundidade: " << z << " Valor: ";
                cin >> m[x][y][z];
                cout << "Letra do elemento: ";
                cin >> l[x][y][z];
                if(z == 1){
                    m[x][y][z] = m[x][y][z] * 3;
                }
            }
        }
    }
    for(int x = 0; x < 2; x++){
        for(int y = 0; y < 2; y++){
            for(int z = 0; z < 2; z++){
                cout << "\nLinha: " << x << " Coluna: " << y << " Profundidade: " << z << " Valor: " << m[x][y][z] << " Letra: " << l[x][y][z];
            }
        }
    }
    return 0;
}