/*Desenvolva um programa em C que leia dois vetores com 10 elementos cada. Considerando cada vetor como sendo um conjunto, crie um terceiro vetor, que seja a uni�o dos dois primeiros, e um quarto, que seja a intersec��o entre os dois primeiros. Ao final, imprima na tela os valores dos dois novos vetores criados.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    int veta[5], vetb[5], c = 0, z = 0, uni[10], inter[5];
    bool y = true; 
    for(int i = 0; i < 5; i++){
        cout << "Digite o " << i+1 <<"� valor do vetor A: ";
        cin >> veta[i];
        cout << "Digite o " << i+1 <<"� valor do vetor B: ";
        cin >> vetb[i];
    }
    for (int i = 0; i < 5; i++){
        uni[z] = veta[i];
        z++;
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(veta[i] == vetb[j]){
                inter[c] = vetb[j];
                c++;
            }            
        }
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(vetb[i] != veta[j]){
                y = true;
            } else {
                y = false;
                break;
            }            
        }
        if (y == true){
            uni[z] = vetb[i];
            z++;
        }
        
    }
    cout << "\nUni�o dos conjuntos: ";
    for (int i = 0; i < z; i++){
        cout << uni[i] << " " ;
    }
    cout << "\nIntersec��o dos conjuntos: ";
    for (int i = 0; i < c; i++){
        cout << inter[i] << " ";
    }
    return 0;
}