#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <locale.h>
using namespace std;
/*Foi feita uma pesquisa entre os habitantes de uma região para coletar os seguintes dados: sexo (0-feminino, 1-masculino), idade e altura. Escreva um programa em C que leia as informações coletadas e mostre as seguintes informações:   
- média da idade do grupo; 
- média da altura das mulheres; 
- média da idade dos homens; 
Encerre a entrada de dados quando for digitado um código inválido para sexo.*/
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
    cout<<"\nA média de didade do grupo é "<<fixed<<setprecision(0)<<medid<<" anos de idade.";
    medaltm = somaltm / caltm;
    cout<<"\nA média de altura das mulheres do grupo é "<<fixed<<setprecision(2)<<medaltm<<" m de altura.";
    medidh = somidh / cidh;
    cout<<"\nA média de idade dos homens do grupo é "<<fixed<<setprecision(0)<<medidh<<" anos de idade.";

    return 0;
}
