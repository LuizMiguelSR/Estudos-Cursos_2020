/*Crie um programa em linguagem C que leia as informa��es correspondentes ao sal�rio dos funcion�rios de uma empresa e o tempo que eles trabalham nessa empresa, calcule e imprima:
� o maior e menor sal�rio dos funcion�rios; 
� a quantidade de sal�rios maiores que R$5.000,00; e
� a m�dia do tempo de trabalho dos funcion�rios.
O final da leitura de dados se dar� com a entrada de um sal�rio negativo.*/

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
        
        cout<<"\nDgite seu sal�rio R$ ";
        cin>>sal;

        if (sal>0) {
            c++;
            cout<<"\nDgite o seu tempo de servi�o em horas: ";
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

    cout<<"\nO maior sal�rio � de R$ "<<fixed<<setprecision(2)<<mai;
    cout<<"\nO menor sal�rio � de R$ "<<fixed<<setprecision(2)<<men;
    cout<<"\nA qtde de trabalhadores que ganham acima de R$ 5.000,00 � de "<<soms;
    cout<<"\nA m�dia de tempo de trabalho � de "<<fixed<<setprecision(0)<<med<<" horas.\n";

    return 0;
}