/*Crie um programa em C que carregue um vetor com 8 n�meros inteiros, calcule e mostre dois vetores resultantes ordenados de forma crescente. O primeiro vetor deve conter os n�meros positivos, o segundo vetor deve conter os n�meros negativos. Cada vetor resultante vai ter no m�ximo 8 posi��es, sendo que nem todas devem obrigatoriamente ser utilizadas.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    int vet[8], pos[8], neg[8], auxpos, auxneg, c = 0, t = 0;

    for(int i = 0; i < 8; i++){
        cout << "Digite um n�mero inteiro: ";
        cin >> vet[i];
        if(vet[i] > 0){
            pos[c] = vet[i];
            c++;
        } 
        if(vet[i] < 0) {
            neg[t] = vet[i];
            t++;
        }
    }
    for(int i = 0; i < c; i++){
        for(int j = i+1; j < c; j++){
            if(pos[i] > pos[j]){
                if(j < c){
                    auxpos = pos[i];
                    pos[i] = pos[j];
                    pos[j] = auxpos;
                }
            }
        }
    }
    for(int i = 0; i < t; i++){
        for(int j = i+1; j < t; j++){
            if(neg[i] > neg[j]){
                if(j < t){
                    auxneg = neg[i];
                    neg[i] = neg[j];
                    neg[j] = auxneg;
                }
            }
        }
    }
    cout << "\nN�meros positivos\n";
    for(int i = 0; i < c; i++){
        cout << pos[i] << " ";
    }
    cout << "\nN�meros negativos\n";
    for(int i = 0; i < t; i++){
        cout << neg[i] << " ";
    }
    return 0;
}