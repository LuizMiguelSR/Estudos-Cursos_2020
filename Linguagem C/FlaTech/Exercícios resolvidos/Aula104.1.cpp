/*Em uma eleição presidencial existem quatro candidatos. Os votos são informados através de códigos. Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:   
1,2,3,4 = voto para os respectivos candidatos; 
5 = voto nulo; 
6 = voto em branco;
Elabore um programa em C que leia o código de cada voto, calcule e escreva: 
- total de votos para cada candidato; 
- total de votos nulos; 
- total de votos em branco;
Como finalizador do conjunto de votos, tem-se o valor 0.*/

#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

int main () {
    setlocale(LC_ALL,"");
    system("cls");

    int vot, c, som1=0, som2=0, som3=0, som4=0, som5=0, som6=0;

    do {
        cout<<"\nEscolha um candidato ou digite 0 para encerrar: ";
        cin>>vot;
        if (vot != 0) {
            switch (vot) {
            case 1:
                som1++;
                break;
            case 2:
                som2++;
                break;
            case 3:
                som3++;
                break;
            case 4:
                som4++;
                break;
            case 5:
                som5++;
                break;
            case 6:
                som6++;
                break;
            default:
                cout<<"\nVoto inválido digite novamente!";
                break;
            }
        } else {
            cout<<"\nExibindo resultados!\n";
        }
    } while (vot != 0);

    cout<<"O candidato 1 recebeu "<<som1<<" votos.";
    cout<<"\nO candidato 2 recebeu "<<som2<<" votos.";
    cout<<"\nO candidato 3 recebeu "<<som3<<" votos.";
    cout<<"\nO candidato 4 recebeu "<<som4<<" votos.";
    cout<<"\nQuantidade de votos nulos: "<<som5;
    cout<<"\nQuantidade de votos em branco:  "<<som6<<endl;

    return 0;
}