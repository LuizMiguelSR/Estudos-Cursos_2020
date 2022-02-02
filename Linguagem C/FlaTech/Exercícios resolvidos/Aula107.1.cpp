/*Um cinema faz muito sucesso na cidade e est� sempre com ocupa��o total. Certo dia, cada espectador respondeu a um question�rio, no qual constava sua idade e sua opini�o em rela��o ao filme, seguindo as notas:
A �timo  /  B Bom  /  C Regular  /  D Ruim  /  E P�ssimo
Elabore um programa em C que, lendo esses dados, calcule e imprima:
� a porcentagem de respostas P�ssimo e a maior idade que utilizou essa op��o;
� a diferen�a de idade entre a maior idade que respondeu �timo e a maior idade que respondeu Ruim.
Terminar o programa quando for digitado um valor negativo para idade.*/

#include <iomanip>
#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** arv) {
    setlocale(LC_ALL,"");
    system("cls");

    int maiA=0, maiD=0, dif, maiE=0, i=0;
    float per=0, somE=0, c=0; 
    char op;

    while (i>=0) {
        cout<<"\nDigite sua idade ou negativo para encerrar : ";
        cin>>i;
        if (i>=0) {
            cout<<"\nQual sua ipini�o sobre o filme A �timo  /  B Bom  /  C Regular  /  D Ruim  /  E P�ssimo ";
            cin>>op;
            switch (op) {
            case 'A':
                if (c==0) {
                    maiA = i;
                } else {
                    if (i > maiA) {
                        maiA = i;
                    }
                }
                break;
            case 'B':
                break;
            case 'C':
                break;
            case 'D':
                if (c==0) {
                    maiD = i;
                } else {
                    if (i > maiD) {
                        maiD = i;
                    }
                }
                break;
            case 'E':
                if (c==0) {
                    maiE = i;
                } else {
                    if (i > maiE) {
                        maiE = i;
                    }
                }
                somE++;
                break;
            default:
                cout<<"\nC�digo inv�lido digite novamente";
                break;
            }
            c++;
        } else {
            cout<<"\nExibindo resultados";
            if (maiA>maiD) {
                dif = maiA - maiD;
                cout<<"\nA diferen�a da maior idade, entre quem responde A e D foi de "<<dif<<" anos.";
            } else if (maiA<maiD) {
                dif = maiD - maiA;
                cout<<"\nA diferen�a da maior idade, entre quem responde D e A foi de "<<dif<<" anos.";
            } else {
                cout<<"\nAmbos tem a mesma idade!";
            }
            per=(somE/c)*100;
            cout<<"\nPercentual de pessoas que respondeu E � "<<fixed<<setprecision(2)<<per<<"% e a maior idade foi "<<maiE<<" anos.";
        } 
    }
    return 0;
}