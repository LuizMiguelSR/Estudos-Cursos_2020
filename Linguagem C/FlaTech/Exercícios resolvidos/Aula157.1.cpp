/*Fa�a um programa em C que leia um vetor de 20 elementos e em seguida ache a posi��o do elemento M (dado pelo usu�rio) no vetor. Caso o elemento n�o exista no vetor informe ao usu�rio.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    int vet[5], m, c=0;
    for(int i = 0; i < 5; i++){
        cout << "Digite um numero: ";
        cin >> vet[i];
    }
    cout << "Digite o elemento a ser encontrado: ";
    cin >> m;
    for(int i = 0; i < 5; i++){
        if(m==vet[i]){
            cout << "Elemento encontrado na posi��o " << i << "\n";
            c++;
        }
        if(i==4&&c==0){
            cout << "Elemento n�o encontrado\n";
        }
    }
    return 0;
}