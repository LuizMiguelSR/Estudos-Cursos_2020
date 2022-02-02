/*Erro ao comparar Números de Valor FLOAT dentro de uma condição do comando IF, WHILE ou FOR.
Crie um programa em linguagem C, que leia as informações da altura dos alunos de uma determinada turma da faculdade, calcule e imprima:
- A maior e a menor altura da turma; 
- A média da altura dos alunos; e
- A quantidade de alunos maiores que 1,70m.
O final da leitura de dados se dará com a entrada de um valor de altura igual a zero.*/

#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    system("cls");

    float alt=0, mai=0, men=0, med=0, som=0;
    int c=0, ca=0;

    do {
        cout<<"\nDigite a sua altura: ";
        cin>>alt;
        if(alt>0){
            if(c==0){
                mai = alt;
                men = alt;
            } else {
                if(alt > mai){
                    mai = alt;
                }
                if(alt < men){
                    men = alt;
                }
            }
            som += alt;
            c++;
            if(alt >= 1.70){
                ca++;
            }
        } else {
            cout<<"\nExibindo resultados...\n";
        }
    } while(alt > 0);
    
    med = som / c;

    cout<<"A maior altura é de "<<fixed<<setprecision(2)<<mai<<" metros."<<endl;
    cout<<"A menor altura é de "<<fixed<<setprecision(2)<<men<<" metros."<<endl;
    cout<<"A média de altura é de "<<fixed<<setprecision(2)<<med<<" metros."<<endl;
    cout<<"A qtde de alunos maiores que 1.70 é de "<<ca<<" alunos."<<endl;

    return 0;
}