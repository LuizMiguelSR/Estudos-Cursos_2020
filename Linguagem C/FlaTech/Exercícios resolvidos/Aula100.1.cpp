#include <stdio.h>
#include <iostream>
#include <locale.h>
using namespace std;

int main () {
    setlocale(LC_ALL,"");
    system("cls");

    /*Foi feita uma pesquisa entre os habitantes de uma regi�o. Foram coletados os dados de idade, sexo (0 � Masculino / 1- Feminino) e sal�rio. Fa�a um programa em C que informe:   
	- a m�dia de sal�rio do grupo; 
	- maior e menor idade do grupo; 
	- quantidade de mulheres com sal�rio at� R$1000,00.
	- Encerre a entrada de dados quando for digitada uma idade negativa.*/

    int sex, id, mai, men, i = 0, somm = 0; 
    float sal, som = 0.0, med;

    do {
        cout<<"\nInforme sua idade: ";
        cin>>id;
        if (id > 0) {
            cout<<"\nInforme seu sexo 0 � Masculino / 1- Feminino: ";
            cin>>sex;
            cout<<"\nInforme seu sal�rio R$ ";
            cin>>sal;
            if (sex == 1 && sal <= 1000.00) {
                somm++;
            }
            if (i==0) {
                mai = id;
                men = id;
            } else {
                if (id > mai) {
                    mai = id;
                }
                if (id < men) {
                    men = id;
                }
            }
            som += sal;
            i++;
        } else {
            cout<<"\nExibindo resultados...\n";
        }
    } while (id > 0);

    med = som / i;
    cout<<"A maior idade �: "<<mai<<" anos de idade.\n";
    cout<<"A menor idade �: "<<men<<" anos de idade.\n";
    cout<<"A m�dia salarial do grupo � R$ "<<med<<endl;
    cout<<"A quantidade de mulheres que ganham at� R$ 1000,00 � "<<somm;

    return 0;
}