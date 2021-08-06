/*Uma universidade deseja fazer um levantamento a respeito do seu concurso vestibular. Para cada curso, é fornecido o código do curso, o número de vagas, o número de candidatos do sexo masculino e o número de candidatos do sexo feminino. A leitura deve ser encerrada quando for digitado o código do curso igual a zero. Crie um programa em C que calcule escreva:
- o total de candidatos;
- o número de candidatos por vaga e a porcentagem de candidatos do sexo feminino para cada curso;
- o maior número de candidatos por vaga e qual o curso correspondente.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    system("cls");

    float cod, vag, mas, fem, tcand=0, tcandc=0, c=0, mai=0, maic=0,pvag=0, pfem;

    while(cod!=0){
        cout<<"\nDigite o código do curso: ";
        cin>>cod;
        if(cod!=0){
            cout<<"Digite o número de vagas: ";
            cin>>vag;

            cout<<"Candidatos masculinos: ";
            cin>>mas;

            cout<<"Candidatas femininas: ";
            cin>>fem;
            tcandc += (mas + fem);
            tcand = mas + fem;
            pvag = tcand / vag;
            pfem = (fem / (mas+fem)) * 100;
            if(c == 0){
                mai = pvag;
                maic = cod;
            } else {
                if(pvag > mai){
                    mai = pvag;
                    maic = cod;
                }
            }
            c++; 
            cout<<"\nTotal de candidatos do Vestibular: "<<tcand;
            cout<<"\nNúmero de candidatos por vaga do curso "<<cod<<" é de "<<fixed<<setprecision(2)<<pvag;
            cout<<"\nA porcentagem de candidatas no curso "<<cod<<" é de: "<<fixed<<setprecision(2)<<pfem<<"%";
            cout<<"\nO curso "<<maic<<" possui maior número de candidatos por vaga = "<<mai;
            cout<<"\n";
        }
    }
    return 0;
}