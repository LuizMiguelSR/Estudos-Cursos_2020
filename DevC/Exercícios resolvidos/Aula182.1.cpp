/*Um fiscal de �nibus precisa de um software para guardar um hor�rio exato e lembra-lo ap�s 12 Horas. Crie um programa em C que armazene a hora, minuto e segundo em uma matriz 3x1 e imprima o hor�rio inverso do dia. Considere o tempo de 0:00 as 23:59.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    int mat[3][1];
   
    cout << "Hor�rio:" << endl;
    cout << "Digite a hora: ";
    cin >> mat[0][0];
    cout << "Digite o minuto: ";
    cin >> mat[1][0];
    cout << "Digite o segundo: ";
    cin >> mat[2][0];
    
    cout << "\n";
    if(mat[0][0] > 12){
        mat[0][0] = mat[0][0] - 12;
    } else if(mat[0][0] < 13){
        mat[0][0] = mat[0][0] + 12;
    }
    cout << "\nO hor�rio inverso � " << mat[0][0] << ":" << mat[1][0] << ":" << mat[2][0];
    return 0;
}