/*Elabore um programa em C que receba as dezenas da Mega-sena (01 a 60), armazene em uma matriz 6x10 conforme a cartela e imprima os 6 índices de linha e coluna da combinação (01,07,13,24,51,60). Mostre abaixo também, todas as dezenas armazenadas com tabulação. Os valores inferiores a dez devem conter um zero à esquerda.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    int mega[6][10], n = 1;
    
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 10; j++){
            mega[i][j] = n;
            n++;            
        }
    }
    cout << "Posições das Dezenas\n";
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 10; j++){
            if(mega[i][j] == 1 || mega[i][j] == 7 || mega[i][j] == 13 || mega[i][j] == 24 || mega[i][j] == 51 || mega[i][j] == 60){
                if(mega[i][j] < 10){
                    cout << "Dezena: " << setfill('0') << setw(2) << mega[i][j] << " Linha: " << i << " Coluna: " << j <<"\n";
                } else {
                    cout << "Dezena: " << mega[i][j] << " Linha: " << i << " Coluna: " << j <<"\n";
                }
            }            
        }
    }
    cout << "\nDEZENAS\n";
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 10; j++){
            if(mega[i][j] < 10){
                cout << setfill('0') << setw(2) << mega[i][j] << "\t";
            } else {
                cout << mega[i][j] << "\t";
            }
            
        }
        cout << "\n";
    }
    return 0;
}