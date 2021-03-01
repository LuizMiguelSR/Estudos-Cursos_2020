#include <stdio.h>
#include <iostream>
#include <locale.h>
using namespace std;
/*A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:   
	-  média do salário da população; 
	-  média do número de filhos; 
Escreva um programa em C que leia as informações e apresente as informações acima. O final da leitura de dados se dará com a entrada de um salário negativo.*/
int main (){
    setlocale(LC_ALL,"");
    system("cls");
    int i=0; 
    float f, somf=0, sal=0, somsal, medf, medsal;

    do {
        cout<<"Digite o seu salário: ";
        cin>>sal;
        if (sal > 0.00) {
            cout <<"Digite quantos filhos você tem: ";
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
    cout<<"A média de salário é R$"<<medsal<<endl;
    cout<<"A média de filhos é "<<medf<<endl;
    return 0;
}