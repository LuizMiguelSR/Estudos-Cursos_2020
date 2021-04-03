/*Um tonel de refresco é feito com 8 partes de água mineral e 2 partes de suco de maracujá. Construa um programa em C para calcular quantos litros de água e de suco são necessários para se fazer X litros de refresco (informados pelo usuário).*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

main (int argc, char** argv){
    setlocale(LC_ALL,"");
    system("cls");

    float l, a, s;

    cout<<"Digite a quantidade de litros de refresco: ";
    cin>>l;

    a = (l/10)*8;
    s = (l/10)*2;

    cout<<"\nPara "<<fixed<<setprecision(3)<<l<<" litros de refresco precisará "<<fixed<<setprecision(3)<<a<<" e "<<fixed<<setprecision(3)<<s<<" litros de suco";

    return 0;
}