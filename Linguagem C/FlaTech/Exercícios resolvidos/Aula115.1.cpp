/*Um tonel de refresco � feito com 8 partes de �gua mineral e 2 partes de suco de maracuj�. Construa um programa em C para calcular quantos litros de �gua e de suco s�o necess�rios para se fazer X litros de refresco (informados pelo usu�rio).*/
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

    cout<<"\nPara "<<fixed<<setprecision(3)<<l<<" litros de refresco precisar� "<<fixed<<setprecision(3)<<a<<" e "<<fixed<<setprecision(3)<<s<<" litros de suco";

    return 0;
}