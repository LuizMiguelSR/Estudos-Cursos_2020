/*Uma firma fez uma pesquisa de mercado para saber se as pessoas gostaram ou não de um novo produto lançado no mercado. Para isso, forneceu o sexo do entrevistado (0 ? feminino / 1 ? masculino) e sua resposta (0 - sim / 1 - não). Sabendo-se que foram entrevistadas pessoas até que um valor inválido fosse digitado para sexo, escreva um programa em C que calcule e mostre:
- o número que responderam sim e que responderam não;
- a porcentagem do sexo feminino que responderam sim;
- a porcentagem do sexo masculino que responderam não.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    system("cls");

    int sex=0, gp; 
    float sexm=0, sexf=0, sim=0, nao=0, sexfs=0, sexmn=0, psexf=0, psexm=0;
    
    while(sex == 0 || sex == 1){
        cout<<"Digite o sexo 0=feminino e 1=masculino: ";
        cin>>sex;

        if(sex == 0 || sex == 1){
            if (sex == 1){
                sexm++;                
            } else if (sex == 0){
                sexf++;
            }
            cout<<"Gostou do produto 0=sim e 1=não: ";
            cin>>gp;
            if (gp == 0 || gp == 1){
                if (gp == 0){
                    sim++;
                    if (sex == 0){
                        sexfs++;
                    }
                } else if (gp == 1){
                    nao++;
                    if (sex == 1){
                        sexmn++;
                    }
                }
            } else {
                cout<<"Valor inválido recomece.";
                break;
            }
        } else {
            cout<<"\nExibindo resultado...\n";
            psexf = (sexfs / sexf) * 100;
            psexm = (sexmn / sexm) * 100;
            cout<<"\nSim foi de: "<<sim<<" pessoas e não foi de: "<<nao<<" pessoas";
            cout<<"\nA porcentagem do sexo feminino que responderam sim: "<<fixed<<setprecision(2)<<psexf<<"%";
            cout<<"\nA porcentagem do sexo masculino que responderam não: "<<fixed<<setprecision(2)<<psexm<<"%";
        }

    }

    return 0;
}