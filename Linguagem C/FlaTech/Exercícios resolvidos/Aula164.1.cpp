/*Uma locadora de v�deos tem guardada, em um vetor de 50 posi��es, o c�digo dos seus clientes e, em outro vetor, tem guardada a quantidade de filmes retirados por esses clientes durante o ano de 2014. Agora, esta locadora est� fazendo uma promo��o e quer saber quais os 10 clientes que mais retiraram filmes em 2014. Fa�a um programa em C que leia, armazene e exiba as informa��es pedidas. Os vetores devem ser ordenados.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    int cod[10], qtde[10], auxqtde, auxcod;
    for(int i = 0; i < 10; i++){
        cout << "Digite o c�digo: ";
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
    cout << "Classifica��o" << endl;
    for(int i = 0; i < 5; i++){
        cout << i+1 << "� lugar c�digo: " << cod[i] << " qtde: " << qtde[i] << endl;
    }
    return 0;
}