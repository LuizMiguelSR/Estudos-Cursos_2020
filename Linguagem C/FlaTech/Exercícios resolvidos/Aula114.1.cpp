/*Crie um programa em linguagem C que leia as informações correspondentes ao salário dos funcionários de uma empresa e o tempo que eles trabalham nessa empresa, calcule e imprima:
• o maior e menor salário dos funcionários; 
• a quantidade de salários maiores que R$5.000,00; e
• a média do tempo de trabalho dos funcionários.
O final da leitura de dados se dará com a entrada de um salário negativo.*/

#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

int main (int argc, char** argv){
    setlocale(LC_ALL,"");
    system("cls");

    float sal=0, mai, men, med;
    int temp, soms=0, somt=0, c=0;

    while(sal>=0){
        
        cout<<"\nDgite seu salário R$ ";
        cin>>sal;

        if (sal>0) {
            c++;
            cout<<"\nDgite o seu tempo de serviço em horas: ";
            cin>>temp;

            somt += temp;
            if(sal >= 5000) {
                soms++;
            }
            if (c==1) {
                mai = sal;
                men = sal;
            } else {
                if (sal > mai) {
                    mai = sal;
                }
                if (sal < men) {
                    men = sal;
                }
            }  
        } else {
            cout<<"\nExibindo resultados...\n";
        }

    }

    med = somt / c;

    cout<<"\nO maior salário é de R$ "<<fixed<<setprecision(2)<<mai;
    cout<<"\nO menor salário é de R$ "<<fixed<<setprecision(2)<<men;
    cout<<"\nA qtde de trabalhadores que ganham acima de R$ 5.000,00 é de "<<soms;
    cout<<"\nA média de tempo de trabalho é de "<<fixed<<setprecision(0)<<med<<" horas.\n";

    return 0;
}