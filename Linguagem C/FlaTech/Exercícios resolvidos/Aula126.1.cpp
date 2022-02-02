/*Escreva um programa em C que leia um caractere do teclado e informe se � vogal, n�mero ou consoante. Caso n�o seja nenhuma dessas op��es o programa pode definir o caractere lido como caractere especial. Considere apenas as letras min�sculas.
OBSERVA��O: C�digo realizado com a leitura de um valor digitado usando o comando SCANF e IF ELSE para resolu��o da compara��o dos valores da tabela ASCII. Note que para letras mai�sculas os valores da tabela ASCII s�o diferentes das refer�ncias min�sculas!*/

#include <iostream>
#include <iomanip>
#include <locale.h>
#include <stdio.h>
using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL,"");
    system("cls");

    char x;
    cout<<"Digite um caractere ou n�mero: ";
    scanf("%c", &x);
    printf("REFER�NCIA ASCII = %i", x);
    if (x >= 48 && x <= 57) {
        cout<<"\nN�mero";
    } else if (x == 97 || x == 101 || x == 105 || x == 111 || x == 117) {
        cout<<"\nVogal";
    } else if ((x >= 97 && x <= 122) && (x != 97 || x != 101 || x != 105 || x != 111 || x != 117)) {
        cout<<"\nConsoante";
    } else {
        cout<<"\nEspecial";
    }

    return 0;
}