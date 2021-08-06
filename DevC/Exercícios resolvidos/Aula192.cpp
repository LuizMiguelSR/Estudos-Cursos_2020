/*Elabore um programa com uma matriz hexadimensional de duas posições em todas as dimensões, atribua em sua 13ª posição o valor igual ao da combinação do endereço dessa posição e imprima! (Havendo zeros à esquerda, é obrigatório sair na impressão).*/
#include <iomanip>
#include <iostream>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    int m[2][2][2][2][2][2];
    m[0][0][1][1][0][0]=1100;
    
    cout << "O valor da matriz na 13ª é igual = " << setfill('0') << setw(6) << m[0][0][1][1][0][0];
    return 0;
}