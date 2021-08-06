/*Crie um programa em C que imprima na tela os termos de uma sequ?ncia de Fibonacci. Uma sequ?ncia ? dita de Fibonacci quando os dois primeiros termos forem 0 e 1 e todos os termos consecutivos tenham valor igual ? soma dos dois termos anteriores.
Exemplo: 0 ? 1 ? 1 ? 2 ? 3 ? 5 ? 8 ? 13 ? 21 ? 34 ? 55 . . .
Ao final do c?lculo de cada termo deve-se questionar ao usu?rio se ele deseja continuar o c?lculo do pr?ximo termo ou se ele deseja encerrar a sequ?ncia.*/

#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL,"");
    system("cls");

    int n1=0, n2=1, n3, c, quest;

    cout<<"Termo "<<n1;
    cout<<"\nDeseja continuar 0-SIM outro n?mero para N?O: ";
    cin>>quest;
    if (quest == 0) {
        cout<<"Termo "<<n2;
    } else {
        cout<<"\nSequ?ncia Finalizada";
    }

    cout<<"\nDeseja continuar 0-SIM outro n?mero para N?O: ";
    cin>>quest;

    if (quest == 0) {
        while (quest == 0) {
            n3 = n1 + n2;
            cout<<"Termo "<<n3;
            cout<<"\nDeseja continuar 0-SIM outro n?mero para N?O: ";
            cin>>quest;
            n1 = n2;
            n2 = n3;
        }
    } else {
        cout<<"\nSequ?ncia Finalizada";
    }

    cout<<"\nSequ?ncia Finalizada";
    
    return 0;
}
