/*Elabore um programa que carregue dois vetores com dez posições cada um. O primeiro vetor com os códigos de dez produtos e o segundo vetor com os preços dos produtos. Mostre um relatório com o código, o preço e o novo preço dos produtos ordenado por ordem crescente de preço. Sabe-se que os produtos que sofrerão aumento são aqueles que possuem código par ou preço superior a R$ 1.000,00. Sabe-se ainda que se o produto satisfaz as duas condições acima (código e preço), o aumento de preço será de 20%, se satisfazer apenas a condição de código o aumento será de 15%, se satisfaz apenas a condição de preço o aumento será de 10%.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    int cod[5], auxcod;
    float pre[5], auxpre, npre;

    for(int i = 0; i < 5; i++){
        cout << "Digite o código: ";
        cin >> cod[i];
        cout << "Digite o preço R$ ";
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
            cout << "Código: " << cod[i] << "\tPreço R$ " << fixed << setprecision(2) << pre[i] << "\t\tAumento R$ " << fixed << setprecision(2) << npre << endl;
        } else if (cod[i]%2==0) {
            npre = pre[i] * 1.15;
            cout << "Código: " << cod[i] << "\tPreço R$ " << fixed << setprecision(2) << pre[i] << "\t\tAumento R$ " << fixed << setprecision(2) << npre << endl; 
        } else if (pre[i] > 1000.00){
            npre = pre[i] * 1.10;
            cout << "Código: " << cod[i] << "\tPreço R$ " << fixed << setprecision(2) << pre[i] << "\t\tAumento R$ " << fixed << setprecision(2) << npre << endl;
        } else {
            npre = pre[i];
            cout << "Código: " << cod[i] << "\tPreço R$ " << fixed << setprecision(2) << pre[i] << "\t\tAumento R$ " << fixed << setprecision(2) << npre << endl;
        }
    }
    return 0;
}