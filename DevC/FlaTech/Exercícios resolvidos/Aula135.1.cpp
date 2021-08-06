/*Uma empresa decidiu fazer um levantamento em relação aos candidatos que se apresentarem para preenchimento de vagas no seu quadro de funcionários, utilizando processamento eletrônico. Supondo que você seja o programador encarregado desse levantamento, faça um programa em C que leia para cada candidato, o número de sua inscrição, sua idade, seu sexo (0-masculino, 1-feminino) e se possui experiência no serviço (1-sim, 0-não). O programa deve calcular e exibir:
- o número de candidatos do sexo feminino e do sexo masculino;
- idade média dos homens com mais de 45 anos entre o total de homens;
- número de mulheres que têm idade inferior a 35 anos e com experiência no serviço;
- a menor idade entre mulheres que já tem experiência no serviço;
 A leitura de dados deve ser encerrada quando o número de inscrição do candidato for negativo.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

int main(int argc, char** argv){

    int ni=0, id, sex, exp;
    int csm=0, ssm=0, csf=0, csfm=0, men=0;
    float med;

    while(ni>-1) {
        cout<<"Numero de inscricao: ";
        cin>>ni;
        if(ni>-1){
            cout<<"Idade: ";
            cin>>id;
            cout<<"Sexo 0-masculino, 1-feminino: ";
            cin>>sex;
            cout<<"Experiencia 1-sim, 0-nao: ";
            cin>>exp;
            if(sex == 0){
                csm++;
                if(id > 45){
                    ssm+=id;
                }  
            } else if (sex == 1) {
                csf++;
                if(id < 35 && exp == 1){
                    csfm++;
                }
                if(exp ==1){
                    if(men == 0){
                        men = id;
                    } else {
                        if(id < men){
                            men = id;
                        }
                    }
                }      
            } else {}
        } else {
            cout<<"\nExibindo resultados...\n";
        }
    }

    med = ssm / csm;

    cout<<"\nTotal masculino: "<<csm<<" Total feminino: "<<csf;
    cout<<"\nMedia idadea dos homens com idade maior que 45 anos: "<<fixed<<setprecision(0)<<med<<" anos";
    cout<<"\nMulher com idade menor que 35 anos com experiencia: "<<csfm;
    cout<<"\nMenor idade e mulher com experiencia: "<<men<<" anos";
    return 0;
}