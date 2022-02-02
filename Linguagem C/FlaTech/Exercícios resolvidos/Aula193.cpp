/*Crie um programa em C que peça ao usuário para digitar o tamanho de uma matriz bidimensional chamada M, em seguida faça um menu para que o usuário escolha uma das seguintes opções; 0 Aumentar o tamanho da Matriz, 1 Adicionar Elemento na Matriz, 2 Exibir Toda a Matriz e 3 Para Finalizar a Operação. Ao escolher ZERO, o programa deve pedir ao usuário a quantidade de linhas e colunas que deseja aumentar, ao escolher UM o programa deverá pedir a posição na matriz e o valor que será armazenado nessa posição, ao escolher DOIS a matriz deve ser impressa mostrando todos os seus endereços e os valores contidos em cada posição e ao escolher TRÊS o programa finaliza. Sempre que o tamanho da matriz for definido e redefinido, todas as posições devem atribuir o valor zero.*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;
int main(int argc, char** argv){
    setlocale(LC_ALL,"");
    int c, lin, col, poslin, poscol, val, addLin = 0, addCol = 0;
    bool q = true;
    cout << "Digite o tamanho da linha: ";
    cin >> lin;
    cout << "Digite o tamanho da coluna: ";
    cin >> col;
    int m[lin][col];
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            m[i][j] = 0;
        }
    }
    while(q){
        cout << "\nEscolha uma opção\n0 - Escolher o número de linhas e colunas\n1 - Adicionar Elemento na Matriz\n2 - Exibir Toda a Matriz\n3 - Para Finalizar a Operação\n";
        cin >> c;
        switch (c){
        case 0:
            cout << "\nDigite o número de linhas que deseja adicionar: ";
            cin >> addLin;
            cout << "Digite o número de colunas que deseja adicionar: ";
            cin >> addCol;
            lin += addLin;
            col += addCol;
            
            for(int i = 0; i < lin; i++){
                for(int j = 0; j < col; j++){
                    m[i][j] = 0;
                }
            }
            break;
        case 1:
            cout << "\nQual posição da linha deseja inserir: ";
            cin >> poslin;
            cout << "Qual posição da coluna deseja inserir: ";
            cin >> poscol;
            cout << "Qual o valor: ";
            cin >> val;
            m[poslin][poscol] = val;
            break;
        case 2:
            cout << "\nMATRIZ\n";
            for(int i = 0; i < lin; i++){
                for(int j = 0; j < col; j++){
                    cout << "Linha: " << i << ", Coluna: " << j << ", Valor: " << m[i][j] << "\n";
                }
            }
            break;
        case 3:
            cout << "\nFinalizando...";
            q = false;
            break;
        }
    }

    return 0;
}