#include <stdio.h>
#include <iostream>
#include <locale.h>
using namespace std;
/*A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o sal�rio e n�mero de filhos. A prefeitura deseja saber:   
	-  m�dia do sal�rio da popula��o; 
	-  m�dia do n�mero de filhos; 
Escreva um programa em C que leia as informa��es e apresente as informa��es acima. O final da leitura de dados se dar� com a entrada de um sal�rio negativo.*/
int main (){
    setlocale(LC_ALL,"");
    system("cls");
    int i=0; 
    float f, somf=0, sal=0, somsal, medf, medsal;

    do {
        cout<<"Digite o seu sal�rio: ";
        cin>>sal;
        if (sal > 0.00) {
            cout <<"Digite quantos filhos voc� tem: ";
            cin>>f;
            somsal = somsal + sal;
            somf = somf + f;
            i++;
        } else {
            cout<<"Finalizando..."<<endl;
        }
    } while (sal > 0.00);
    medsal = somsal / i;
    medf = somf / i;
    cout<<"A m�dia de sal�rio � R$"<<medsal<<endl;
    cout<<"A m�dia de filhos � "<<medf<<endl;
    return 0;
}