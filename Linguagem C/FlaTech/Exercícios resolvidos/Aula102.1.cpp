#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <locale.h>
using namespace std;
/*Foi feita uma pesquisa entre os habitantes de uma regi�o para coletar os seguintes dados: sexo (0-feminino, 1-masculino), idade e altura. Escreva um programa em C que leia as informa��es coletadas e mostre as seguintes informa��es:   
- m�dia da idade do grupo; 
- m�dia da altura das mulheres; 
- m�dia da idade dos homens; 
Encerre a entrada de dados quando for digitado um c�digo inv�lido para sexo.*/
int main () {
    setlocale(LC_ALL,"");
    system("cls");

    float sex=0, somidh, somaid, id, cid=0, caltm=0, cidh=0, somaltm=0.00, alt, medid=0.00, medaltm=0.00, medidh=0.00;

    while (sex==0 || sex==1) {
        cout<<"\nDigite seu sexo 0-feminino 1-masculino: ";
        cin>>sex;
        if (sex==0 || sex==1) {
            cout<<"\nDigite sua idade: ";
            cin>>id;
            cout<<"\nDigite sua altura: ";
            cin>>alt;
            somaid += id;
            cid++;
            if (sex==0) {
                somaltm += alt;
                caltm++;
            } else {
                somidh += id;
                cidh++;
            }
        } else {
            cout<<"\nExibindo resultados...";
        }
    }
    medid = somaid / cid;
    cout<<"\nA m�dia de didade do grupo � "<<fixed<<setprecision(0)<<medid<<" anos de idade.";
    medaltm = somaltm / caltm;
    cout<<"\nA m�dia de altura das mulheres do grupo � "<<fixed<<setprecision(2)<<medaltm<<" m de altura.";
    medidh = somidh / cidh;
    cout<<"\nA m�dia de idade dos homens do grupo � "<<fixed<<setprecision(0)<<medidh<<" anos de idade.";

    return 0;
}
