/*Crie uma matriz unidimensional 1x7 e imprima como resultado o dobro de cada posição de índice e o triplo de cada posição de tamanho, sem atribuir valores a matriz.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    int m[7];
    for(int i = 0; i < 7; i++){
        cout << "\nDobro = " << i*2 << "\tTriplo = " << (i+1)*3;
    }
    return 0;
}