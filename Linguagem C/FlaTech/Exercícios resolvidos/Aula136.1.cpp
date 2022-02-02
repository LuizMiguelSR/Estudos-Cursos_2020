/*Uma universidade deseja fazer um levantamento a respeito do seu concurso vestibular. Para cada curso, � fornecido o c�digo do curso, o n�mero de vagas, o n�mero de candidatos do sexo masculino e o n�mero de candidatos do sexo feminino. A leitura deve ser encerrada quando for digitado o c�digo do curso igual a zero. Crie um programa em C que calcule escreva:
- o total de candidatos;
- o n�mero de candidatos por vaga e a porcentagem de candidatos do sexo feminino para cada curso;
- o maior n�mero de candidatos por vaga e qual o curso correspondente.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    system("cls");

    float cod, vag, mas, fem, tcand=0, tcandc=0, c=0, mai=0, maic=0,pvag=0, pfem;

    while(cod!=0){
        cout<<"\nDigite o c�digo do curso: ";
        cin>>cod;
        if(cod!=0){
            cout<<"Digite o n�mero de vagas: ";
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
            cout<<"\nN�mero de candidatos por vaga do curso "<<cod<<" � de "<<fixed<<setprecision(2)<<pvag;
            cout<<"\nA porcentagem de candidatas no curso "<<cod<<" � de: "<<fixed<<setprecision(2)<<pfem<<"%";
            cout<<"\nO curso "<<maic<<" possui maior n�mero de candidatos por vaga = "<<mai;
            cout<<"\n";
        }
    }
    return 0;
}