/*Elabore um programa com uma matriz hexadimensional de duas posi��es em todas as dimens�es, atribua em sua 13� posi��o o valor igual ao da combina��o do endere�o dessa posi��o e imprima! (Havendo zeros � esquerda, � obrigat�rio sair na impress�o).*/
#include <iomanip>
#include <iostream>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    int m[2][2][2][2][2][2];
    m[0][0][1][1][0][0]=1100;
    
    cout << "O valor da matriz na 13� � igual = " << setfill('0') << setw(6) << m[0][0][1][1][0][0];
    return 0;
}