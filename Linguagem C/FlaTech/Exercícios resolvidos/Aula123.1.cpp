/*Em uma escola um aluno precisa obter a média 6 nas 2 primeiras notas para passar de ano. Caso a média das notas seja inferior a 6 ele terá que fazer a recuperação e obter os pontos restantes para passar. A média da recuperação é calculada entre as 3 notas obtidas pelo aluno. Elabore um programa em C para realizar esses cálculos através da seguinte regra: 
- MEDIA maior ou igual 6 PASSOU
- MEDIA menor que 6 FAZ RECUPERACAO
- MEDIA_RECUPERAÇÃO maior ou igual 6 PASSOU
- MEDIA_RECUPERAÇÃO menor que 6 REPROVADO*/

#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    system("cls");

    float n1, n2, med, nr, medr;

    cout<<"Digite as notas do aluno: ";
    cin>>n1>>n2;
    
    med = (n1 + n2) / 2;

    if (med >= 6){
        cout<<"\nAluno aprovado"<<endl;
    } else {
        cout<<"\nAluno em recuperação";
        cout<<"\nDigite a nota da recuperação: ";
        cin>>nr;
        
        medr = (n1 + n2 + nr) / 3;

        if(medr >= 6){
            cout<<"\nAluno aprovado";
        } else {
            cout<<"\nAluno reprovado";
        }
    }
    return 0;
}