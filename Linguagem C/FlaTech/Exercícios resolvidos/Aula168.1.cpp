/*Elabore um programa que carregue dois vetores com dez posi��es cada um. O primeiro vetor com os c�digos de dez produtos e o segundo vetor com os pre�os dos produtos. Mostre um relat�rio com o c�digo, o pre�o e o novo pre�o dos produtos ordenado por ordem crescente de pre�o. Sabe-se que os produtos que sofrer�o aumento s�o aqueles que possuem c�digo par ou pre�o superior a R$ 1.000,00. Sabe-se ainda que se o produto satisfaz as duas condi��es acima (c�digo e pre�o), o aumento de pre�o ser� de 20%, se satisfazer apenas a condi��o de c�digo o aumento ser� de 15%, se satisfaz apenas a condi��o de pre�o o aumento ser� de 10%.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    int cod[5], auxcod;
    float pre[5], auxpre, npre;

    for(int i = 0; i < 5; i++){
        cout << "Digite o c�digo: ";
        cin >> cod[i];
        cout << "Digite o pre�o R$ ";
        cin >> pre[i];
    }
    for(int i = 0; i < 5; i++){
        for(int j = i+1; j < 5; j++){
            if(pre[i] > pre[j]){
                if(j < 5){
                    auxpre = pre[i];
                    pre[i] = pre[j];
                    pre[j] = auxpre;

                    auxcod = cod[i];
                    cod[i] = cod[j];
                    cod[j] = auxcod;
                }
            }
        }
    }
    cout << "\nLista de Reajustes\n";
    for(int i = 0; i < 5; i++){
        if(cod[i]%2==0 && pre[i] > 1000.00){
            npre = pre[i] * 1.20;
            cout << "C�digo: " << cod[i] << "\tPre�o R$ " << fixed << setprecision(2) << pre[i] << "\t\tAumento R$ " << fixed << setprecision(2) << npre << endl;
        } else if (cod[i]%2==0) {
            npre = pre[i] * 1.15;
            cout << "C�digo: " << cod[i] << "\tPre�o R$ " << fixed << setprecision(2) << pre[i] << "\t\tAumento R$ " << fixed << setprecision(2) << npre << endl; 
        } else if (pre[i] > 1000.00){
            npre = pre[i] * 1.10;
            cout << "C�digo: " << cod[i] << "\tPre�o R$ " << fixed << setprecision(2) << pre[i] << "\t\tAumento R$ " << fixed << setprecision(2) << npre << endl;
        } else {
            npre = pre[i];
            cout << "C�digo: " << cod[i] << "\tPre�o R$ " << fixed << setprecision(2) << pre[i] << "\t\tAumento R$ " << fixed << setprecision(2) << npre << endl;
        }
    }
    return 0;
}