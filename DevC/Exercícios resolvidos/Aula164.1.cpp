/*Uma locadora de vídeos tem guardada, em um vetor de 50 posições, o código dos seus clientes e, em outro vetor, tem guardada a quantidade de filmes retirados por esses clientes durante o ano de 2014. Agora, esta locadora está fazendo uma promoção e quer saber quais os 10 clientes que mais retiraram filmes em 2014. Faça um programa em C que leia, armazene e exiba as informações pedidas. Os vetores devem ser ordenados.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    int cod[10], qtde[10], auxqtde, auxcod;
    for(int i = 0; i < 10; i++){
        cout << "Digite o código: ";
        cin >> cod[i];
        cout << "Digite a quantidade de filmes: ";
        cin >> qtde[i];       
    }
    for(int i = 0; i < 10; i++){
        for(int j = i+1; j < 10; j++){
            if(qtde[i] < qtde[j]){
                if(j < 10){
                    auxqtde = qtde[i];
                    qtde[i] = qtde[j];
                    qtde[j] = auxqtde;

                    auxcod = cod[i];
                    cod[i] = cod[j];
                    cod[j] = auxcod;
                }
            }
        }
    }
    cout << "Classificação" << endl;
    for(int i = 0; i < 5; i++){
        cout << i+1 << "º lugar código: " << cod[i] << " qtde: " << qtde[i] << endl;
    }
    return 0;
}