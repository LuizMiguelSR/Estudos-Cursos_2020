/*Desenvolva um programa em linguagem C que calcule o valor de S para um determinado valor de n informado pelo usu�rio a partir da seguinte express�o:       S = 1� + 2� + 3� + ... + Nn*/
#include <iostream>
#include <iomanip>
#include <math.h>
#include <locale.h>
using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL,"");
    system("cls");

    int n, s=0, m, p;
    cout<<"Digite o valor de n: ";
    cin>>n;

    m = n;
    n = 1;

    for (int i = 1; i <= m; i++) {
        p = pow (n, n);
        s = s + p;
        n = n + 1;
    }

    cout<<"S = "<<s;
    return 0;
}