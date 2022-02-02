/*Crie um programa em C que pe�a ao usu�rio para digitar o tamanho de uma matriz bidimensional chamada M, em seguida fa�a um menu para que o usu�rio escolha uma das seguintes op��es; 0 Aumentar o tamanho da Matriz, 1 Adicionar Elemento na Matriz, 2 Exibir Toda a Matriz e 3 Para Finalizar a Opera��o. Ao escolher ZERO, o programa deve pedir ao usu�rio a quantidade de linhas e colunas que deseja aumentar, ao escolher UM o programa dever� pedir a posi��o na matriz e o valor que ser� armazenado nessa posi��o, ao escolher DOIS a matriz deve ser impressa mostrando todos os seus endere�os e os valores contidos em cada posi��o e ao escolher TR�S o programa finaliza. Sempre que o tamanho da matriz for definido e redefinido, todas as posi��es devem atribuir o valor zero.*/
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
        cout << "\nEscolha uma op��o\n0 - Escolher o n�mero de linhas e colunas\n1 - Adicionar Elemento na Matriz\n2 - Exibir Toda a Matriz\n3 - Para Finalizar a Opera��o\n";
        cin >> c;
        switch (c){
        case 0:
            cout << "\nDigite o n�mero de linhas que deseja adicionar: ";
            cin >> addLin;
            cout << "Digite o n�mero de colunas que deseja adicionar: ";
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
            cout << "\nQual posi��o da linha deseja inserir: ";
            cin >> poslin;
            cout << "Qual posi��o da coluna deseja inserir: ";
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