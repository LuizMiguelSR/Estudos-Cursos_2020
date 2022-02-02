#include <stdio.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main() {
    setlocale(LC_ALL,"");
    system("cls");

    float n1, n2, r;
    int c;

    do {
        cout<<"Digite o primeiro valor: ";
        cin>>n1;
        cout<<"Digite o segundo valor: ";
        cin>>n2;
        cout<<"Escolha uma das opções 0-Finalizar 1-Somar 2-Subtrair 3-Multiplicar e 4-Dividir"<<endl;
        cout<<"Digite o número da operação"<<endl;
        cin>>c;
        switch (c)
        {
        case 0:
            cout<<"Finalizando..."<<endl;
            break;
        case 1:
            r = n1 + n2;
            cout<<"Resultado: "<<r<<endl;
            break;
        case 2:
            r = n1 - n2;
            cout<<"Resultado: "<<r<<endl;
            break;
        case 3:
            r = n1 * n2;
            cout<<"Resultado: "<<r<<endl;
            break;
        case 4:
            r = n1 / n2;
            cout<<"Resultado: "<<r<<endl;
            break;
        default:
            cout<<"Opção inválida!"<<endl;
            break;
        }
    } while (c!=0);

    return 0;
}