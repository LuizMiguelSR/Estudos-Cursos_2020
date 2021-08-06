/*João recebeu seu salário e precisa pagar duas contas que estão atrasadas. Como as contas estão atrasadas, João pagará multa de 2% sobre as contas. Desenvolva um algoritmo que leia as informações necessárias e que calcule quanto restará do salário do João.*/

#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    system("cls");

    float sal, cont;

    cout<<"Dgite seu salário R$";
    cin>>sal;

    for(int c=1; c<3; c++){
        cout<<"\nDigite o valor da conta R$";
        cin>>cont;
        sal = sal - (cont*1.02);
    }
    cout<<"\nRestou R$"<<fixed<<setprecision(2)<<sal<<endl;
    return 0;
}