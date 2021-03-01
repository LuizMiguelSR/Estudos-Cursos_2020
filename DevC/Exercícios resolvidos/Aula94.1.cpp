#include <stdio.h>
#include <locale.h>
#include <iostream>
using namespace std;
int main(){
    setlocale(LC_ALL,"");
    system ("cls");
    /*Escreva um programa em C no qual o usuário vai entrando sucessivamente com valores positivos. Quando o usuário entrar com um valor negativo o programa para de pedir valores e calcula a média dos valores já fornecidos.*/
    int i=0, n, som=0;
    float med;
    do {
        cout<<"Digite um número: ";
        cin>>n;
        if(n>0) {
            som = som + n;
            i=i+1;
        }
    } while (n>=0);
    med = som / i;
    cout<<"A média é: "<<med;
    return 0;
}