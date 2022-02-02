/*Foi feita uma pesquisa de audi�ncia de canal de TV em v�rias casas de uma certa cidade, num determinado dia. Para cada casa visitada, � fornecido o n�mero do canal (4,5,7,12) e o n�mero de pessoas que o estavam assistindo naquela casa. Se a televis�o estivesse desligada, nada era anotado, ou seja, esta casa n�o entrava na pesquisa. Escreva um programa em C que leia um n�mero indeterminado de dados, at� que o n�mero do canal igual a zero, calcule e escreva:
- a porcentagem de audi�ncia para cada emissora;
- a emissora que teve maior e a que teve menor audi�ncia.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv) {
    setlocale(LC_ALL,"");
    system("cls");

    float por, emi4=0, emi5=0, emi7=0, emi12=0;
    int pes, canal=1, lig, som4=0, som5=0, som7=0, som12=0, somt=0;
    
    while(canal!=0){
        cout<<"Qual canal ou digite 0 para encerrar: ";
        cin>>canal;
        switch (canal) {
        case 4:
            cout<<"TV ligada 0-Sim 1-N�o: ";
            cin>>lig;
            if(lig == 0){
                cout<<"Quantas pessoas: ";
                cin>>pes;
                som4+=pes;
                somt+=pes;
            } else {
                break;
            }
            break;
        case 5:
            cout<<"TV ligada 0-Sim 1-N�o: ";
            cin>>lig;
            if(lig == 0){
                cout<<"Quantas pessoas: ";
                cin>>pes;
                som5+=pes;
                somt+=pes;
            } else {
                break;
            }
            break;
        case 7:
            cout<<"TV ligada 0-Sim 1-N�o: ";
            cin>>lig;
            if(lig == 0){
                cout<<"Quantas pessoas: ";
                cin>>pes;
                som7+=pes;
                somt+=pes;
            } else {
                break;
            }
            break;
        case 12:
            cout<<"TV ligada 0-Sim 1-N�o: ";
            cin>>lig;
            if(lig == 0){
                cout<<"Quantas pessoas: ";
                cin>>pes;
                som12+=pes;
                somt+=pes;
            } else {
                break;
            }
            break;        
        default:
            cout<<"\nExibindo resultados...\n";
            break;
        }
    }
    emi4 = ((float)som4/(float)somt)*100;
    cout<<"\nEmissora 4 teve "<<emi4<<" porcento de audi�ncia.\n";
    emi5 = ((float)som5/(float)somt)*100;
    cout<<"Emissora 5 teve "<<emi5<<" porcento de audi�ncia.\n";
    emi7 = ((float)som7/(float)somt)*100;
    cout<<"Emissora 7 teve "<<emi7<<" porcento de audi�ncia.\n";
    emi12 = ((float)som12/(float)somt)*100;
    cout<<"Emissora 12 teve "<<emi12<<" porcento de audi�ncia.\n";
    if((som4 > som5) && (som4>som7) && (som4>som12)) {
        cout<<"Emissora 4 teve maior audi�ncia.\n";
    }
    if((som5 > som4) && (som5>som7) && (som5>som12)) {
        cout<<"Emissora 5 teve maior audi�ncia.\n";
    }
    if((som7 > som5) && (som7>som4) && (som7>som12)) {
        cout<<"Emissora 7 teve maior audi�ncia.\n";
    }
    if((som12 > som5) && (som12>som7) && (som12>som4)) {
        cout<<"Emissora 12 teve maior audi�ncia.\n";
    }
    return 0;
}