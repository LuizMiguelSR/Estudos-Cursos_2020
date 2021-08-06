/*Foi feita uma pesquisa entre 100 os moradores de uma cidade onde cada morador informou sua idade. Faça um programa em linguagem C que informe:   
• a média de idade dos moradores; 
• a idade do morador mais velho e do morador mais novo da cidade; 
• quantidade de moradores na terceira idade (acima de 65 anos).*/

#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

int main (int argc, char** argv) {
    setlocale(LC_ALL,"");
    system("cls");
    
    int id, mn, mv, som=0, ti=0;
    float med;

    for(int i=1; i <= 5; i++) {
        cout<<"Quantos anos você tem: ";
        cin>>id;
        som += id;
        if(i==1){
            mn = id;
            mv = id;
        } else {
            if(id > mv) {
                mv = id;
            } 
            if(id < mn){
                mn = id;

            }
        }
        if(id > 65){
            ti++;
        }
    }
    med = som/5;
    cout<<"\nA média de idade dos moradores é "<<fixed<<setprecision(0)<<med<<" anos";
    cout<<"\nO morador mais velho tem "<<fixed<<setprecision(0)<<mv<<" anos";
    cout<<"\nO morador mais novo tem "<<fixed<<setprecision(0)<<mn<<" anos";
    cout<<"\nA quantidade de moradores acima de 65 anos é "<<ti;
    return 0;
}