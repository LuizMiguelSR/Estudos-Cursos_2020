#include <stdio.h>
#include <iostream>
#include <locale.h>
using namespace std;

int main () {
    setlocale(LC_ALL,"");
    system("cls");

    /*Foi feita uma pesquisa entre os habitantes de uma região. Foram coletados os dados de idade, sexo (0 – Masculino / 1- Feminino) e salário. Faça um programa em C que informe:   
	- a média de salário do grupo; 
	- maior e menor idade do grupo; 
	- quantidade de mulheres com salário até R$1000,00.
	- Encerre a entrada de dados quando for digitada uma idade negativa.*/

    int sex, id, mai, men, i = 0, somm = 0; 
    float sal, som = 0.0, med;

    do {
        cout<<"\nInforme sua idade: ";
        cin>>id;
        if (id > 0) {
            cout<<"\nInforme seu sexo 0 – Masculino / 1- Feminino: ";
            cin>>sex;
            cout<<"\nInforme seu salário R$ ";
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
    cout<<"A maior idade é: "<<mai<<" anos de idade.\n";
    cout<<"A menor idade é: "<<men<<" anos de idade.\n";
    cout<<"A média salarial do grupo é R$ "<<med<<endl;
    cout<<"A quantidade de mulheres que ganham até R$ 1000,00 é "<<somm;

    return 0;
}