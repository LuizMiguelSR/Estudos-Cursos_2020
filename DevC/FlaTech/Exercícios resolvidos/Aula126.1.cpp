/*Escreva um programa em C que leia um caractere do teclado e informe se é vogal, número ou consoante. Caso não seja nenhuma dessas opções o programa pode definir o caractere lido como caractere especial. Considere apenas as letras minúsculas.
OBSERVAÇÃO: Código realizado com a leitura de um valor digitado usando o comando SCANF e IF ELSE para resolução da comparação dos valores da tabela ASCII. Note que para letras maiúsculas os valores da tabela ASCII são diferentes das referências minúsculas!*/

#include <iostream>
#include <iomanip>
#include <locale.h>
#include <stdio.h>
using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL,"");
    system("cls");

    char x;
    cout<<"Digite um caractere ou número: ";
    scanf("%c", &x);
    printf("REFERÊNCIA ASCII = %i", x);
    if (x >= 48 && x <= 57) {
        cout<<"\nNúmero";
    } else if (x == 97 || x == 101 || x == 105 || x == 111 || x == 117) {
        cout<<"\nVogal";
    } else if ((x >= 97 && x <= 122) && (x != 97 || x != 101 || x != 105 || x != 111 || x != 117)) {
        cout<<"\nConsoante";
    } else {
        cout<<"\nEspecial";
    }

    return 0;
}