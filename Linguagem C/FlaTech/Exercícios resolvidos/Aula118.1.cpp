/*Jo�o recebeu seu sal�rio e precisa pagar duas contas que est�o atrasadas. Como as contas est�o atrasadas, Jo�o pagar� multa de 2% sobre as contas. Desenvolva um algoritmo que leia as informa��es necess�rias e que calcule quanto restar� do sal�rio do Jo�o.*/

#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    system("cls");

    float sal, cont;

    cout<<"Dgite seu sal�rio R$";
    cin>>sal;

    for(int c=1; c<3; c++){
        cout<<"\nDigite o valor da conta R$";
        cin>>cont;
        sal = sal - (cont*1.02);
    }
    cout<<"\nRestou R$"<<fixed<<setprecision(2)<<sal<<endl;
    return 0;
}