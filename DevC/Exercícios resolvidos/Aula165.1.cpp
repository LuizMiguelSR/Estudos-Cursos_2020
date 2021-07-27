/*Numa competição de natação foram inscritos 40 atletas (10 atletas em cada modalidade). Elabore um programa em C que leia a inscrição de cada competidor, sua modalidade (1-crawl, 2-peito, 3-costas, 4-borboleta) e o seu respectivo tempo na competição. O programa deve criar uma classificação de cada modalidade da competição ordenando os atletas pelo seu tempo e depois imprimir os dados do primeiro colocado em cada uma das modalidades.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    int cod[12], auxcod, mod[12], auxmod, c = 1;
    float temp[12], auxtemp; 
    for(int i = 0; i < 12; i++){
        cout << "Digite o código: ";
        cin >> cod[i];
        cout << "Digite a modalidade: ";
        cin >> mod[i];                
        cout << "Digite o tempo: ";
        cin >> temp[i];
        cout << "\n";
    }
    for(int i = 0; i < 12; i++){
        for(int j = i+1; j < 12; j++){
            if(temp[i] > temp[j]){
                if(j < 12){
                    auxtemp = temp[i];
                    temp[i] = temp[j];
                    temp[j] = auxtemp;

                    auxcod = cod[i];
                    cod[i] = cod[j];
                    cod[j] = auxcod;
                    
                    auxmod = mod[i];
                    mod[i] = mod[j];
                    mod[j] = auxmod;
                }
            }
        }
    }
    cout << "\nModalidade CRAWL\n";
    for(int j = 0; j < 12; j++){        
        if(mod[j] == 1){            
            cout << c << "º lugar tempo: " << fixed << setprecision(1) << temp[j] << " Código: " << cod[j] << endl;
            c++;
        }
    }
    c = 1;   
    cout << "\nModalidade PEITO\n"; 
    for(int j = 0; j < 12; j++){        
        if(mod[j] == 2){    
            cout << c << "º lugar tempo: " << fixed << setprecision(1) << temp[j] << " Código: " << cod[j] << endl;
            c++;
        }
    }
    c = 1;
    cout << "\nModalidade COSTAS\n";
    for(int j = 0; j < 12; j++){        
        if(mod[j] == 3){     
            cout << c << "º lugar tempo: " << fixed << setprecision(1) << temp[j] << " Código: " << cod[j] << endl;
            c++;
        }
    }
    c = 1;
    cout << "\nModalidade BORBOLETA\n";
    for(int j = 0; j < 12; j++){        
        if(mod[j] == 4){   
            cout << c << "º lugar tempo: " << fixed << setprecision(1) << temp[j] << " Código: " << cod[j] << endl;
            c++;
        }
    }
    return 0;
}