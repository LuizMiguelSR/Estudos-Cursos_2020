/*Para uma dada disciplina, a nota final é obtida da seguinte forma: o trabalho tem peso 25% e a prova tem peso 75%. Faça um programa em C que lê as notas e calcula a nota final dos alunos desta disciplina. Se a nota final for inferior a 7,0, o programa deve imprimir a mensagem: "Precisa de exame". Caso contrário, imprime a mensagem: "Aprovado com x de nota". Deve-se permitir que o usuário possa encerrar a execução do programa ao final do cálculo da média de cada aluno.*/

#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

int main (int argc, char** argv) {
    setlocale(LC_ALL,"");
    system("cls");

    float t, p, c=1, nf;

    while(c!=0) {
        if(c==1) {
            cout<<"\nDigite a nota do trabalho: ";
            cin>>t;
            cout<<"\nDigite a nota da prova: ";
            cin>>p;
            nf = (t*0.25) + (p*0.75);
            if(nf<7.00) {
                cout<<"\nPrecisa de Exame";
            } else {
                cout<<"\nAprovado com "<<fixed<<setprecision(2)<<nf<<" de nota.\n";
            }
            cout<<"\nDeseja continuar 1-sim e 0=não? ";
            cin>>c;            
        } else {
            cout<<"\nComando inválido!";
            cout<<"\nDeseja continuar 1-sim e 0=não? ";
            cin>>c; 
        }

    }
    
    cout<<"\nEncerrando...";

    return  0;
}