/*Elabore um programa em C que solicite ao usu�rio N n�meros inteiros (onde N tamb�m � fornecido pelo usu�rio), guarde-os em um vetor e em seguida imprima-os na tela. Caso o N fornecido pelo usu�rio seja maior que o tamanho m�ximo do vetor, informe que ele deve digitar um valor de N menor.*/
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    int n, val;

    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    int vet[n];
    for (int i = 0; i < n; i++){
        cout << "Digite o valor da " << i+1 << "� posi��o: ";
        cin >> val;
        while(val > n){
            cout << "Valor maior que tamanho m�ximo digite novamente: ";
            cin >> val;            
        }
        vet[i] = val;
    }

    cout << "Valores digitados: ";
    for(int i = 0; i < n; i++){
        if (i == n-1){
            cout << vet[i] << ".";
        } else if (i == n-2) {
            cout << vet[i] << " e ";
        } else {
            cout << vet[i] << ", ";
        }
        
    }
    return 0;
}